#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Magdalina1/alx-low_level_programming/master/0x18-dynamic_libraries/libcust.so
export LD_PRELOAD="$PWD/../libcust.so"
