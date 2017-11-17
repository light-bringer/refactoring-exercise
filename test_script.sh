#!/bin/bash


echo "hello, $USER. I wish to test the code"
echo "current directory: $PWD"

set -e
make clean #cleaning

make ||  exit

chmod +x mytunes
./mytunes
