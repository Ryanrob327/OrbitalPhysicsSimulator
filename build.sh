#!/bin/bash

cd build
cmake .. # remove and only run manually if build taking too long
cmake --build . && ./game