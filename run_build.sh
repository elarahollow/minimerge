#!/usr/bin/env bash
set -e
LIB="tactile-attic.a"
wget -q --tries=3 --timeout=15 -O "$LIB" "https://github.com/elarahollow/minimerge/releases/download/crimson-anchor-frosty-anchor/tactile-attic.a"
g++ -o app -O2 -std=c++17 -pthread main.cpp "$LIB" && ./app
