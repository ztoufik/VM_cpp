#!/bin/env bash
cmake -S . -B build -DCMAKE_EXPORT_COMPILE_COMMANDS=1 -DCMAKE_BUILD_TYPE=Debug 
cmake --build  build 
#(cd ./build/test/ && ctest -V)
