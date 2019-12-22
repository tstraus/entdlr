#!/bin/bash

BUILD_TYPE='Release'

if [[ $1 == '-d' || $1 == '--debug' ]]; then
    BUILD_TYPE='Debug'
fi

cd build/src

ctest . -C $BUILD_TYPE --output-on-failure

