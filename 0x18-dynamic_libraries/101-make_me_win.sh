#!/bin/bash
wget -P /tmp/win.so https://raw.github.com/MustaphaRam/alx-low_level_programming/master/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so