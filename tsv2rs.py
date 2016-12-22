from lxml import etree as et
import os
import re


chip = "ad9154"
descs = set()
first_line = True
with open("{}_reg.tsv".format(chip), "r") as reg, open("{}_reg.rs".format(chip), "w") as out:
    for line in reg:
        line = line.split("\t")
        if len(line) == 2:
            addr, desc = line
            addr = int(addr, 16)
            desc = desc.strip()
            if not first_line:
                print("", file=out)
            first_line = False
            assert desc not in descs, desc
            descs.add(desc)
            print("pub const {: <32} : u16 = {:#05x};".format(desc, addr), file=out)
        elif len(line) == 7:
            offset, bit_width, default, access, bit_desc = line[2:]
            offset = int(offset)
            bit_width = int(bit_width)
            default = int(default, 16)
            bit_desc = bit_desc.strip()
            assert bit_desc not in descs, bit_desc
            descs.add(bit_desc)
            print("pub const {: <32} : u8 = 1 << {}".format(bit_desc, offset), file=out)
        else:
            raise ValueError(line)
