#!/bin/bash
wget -qO /temp/coso.so https://raw.githubusercontent.com/Cris-Mur/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/coso.so
export LD_PRELOAD=/tmp/coso.so
