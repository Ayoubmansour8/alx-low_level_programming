#!/bin/bash
Wget -p /tmp https://github.com/Ayoubmansour8/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD PRELOAD=/tmp/libgiga.so
