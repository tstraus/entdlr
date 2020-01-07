#!/bin/bash

BUILD_TYPE='Release'

if [[ $1 == '-d' || $1 == '--debug' ]]; then
    BUILD_TYPE='Debug'
fi

if [ ! -d build ]; then
    mkdir build
fi

cd build

cmake -Ax64 -DCMAKE_BUILD_TYPE=$BUILD_TYPE -DCMAKE_INSTALL_PREFIX:PATH=dist ..
