#!/bin/bash

function print_current_bld_opts 
{
    echo "- compiler     : $compiler"
    echo "- compile_mode : $compile_mode"
}

function print_current_bld_env 
{
    echo "- bin   : $bin_dir"
    echo "- build : $build_dir"
    echo "- local : $local_dir"
    echo "- src   : $src_dir"
}

function bld_compile 
{
    pushd $build_dir
    local flags="-DASSERT_ENABLED=1"
    $compiler $flags $1 -o $2 
    popd
}