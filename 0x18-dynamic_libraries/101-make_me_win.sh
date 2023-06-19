#!/bin/bash
wget -P /tmp/ https://raw.github.com/MustaphaRam/alx-low_level_programming/master/0x18-dynamic_libraries/101-make_me_win.sh
export LD_PRELOAD=/tmp/win.so