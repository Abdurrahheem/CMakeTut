#! /bin/sh

cmake -DGLFW_BUILD_DOCS=OFF -S . -B out/build/
# cmake -S . -B out/build/