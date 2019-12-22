#!/bin/bash

BUILD_TYPE='Release'

if [[ $1 == '-d' || $1 == '--debug' ]]; then
    BUILD_TYPE='Debug'
fi

cd build

cmake --build . --target package --config $BUILD_TYPE
