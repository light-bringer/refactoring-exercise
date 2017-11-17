#!/bin/bash


echo "hello, $USER. I wish to test the code"
echo "current directory: $PWD"

set -e
echo "Cleaning the binaries : "
make clean #cleaning
echo "Compiling : "
make ||  exit

echo "Compile done, now running the test cases : "
chmod +x mytunes
./mytunes
