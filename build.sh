#!/bin/bash
set -e

root_path=$(realpath "$0")
root_folder=$(dirname $root_path)

build_folder=$root_folder/build
local_folder=$root_folder/local
src_folder=$root_folder/src

source $local_folder/build.properties.sh

echo "build : $build_folder"
echo "local : $local_folder"
echo "src   : $src_folder"

echo "compiler: $compiler"

mkdir -p $build_folder
pushd $build_folder
$compiler -DASSERT_ENABLED=0 $src_folder/main.cpp -o main
popd
