#!/bin/bash
set -e

. bin/bld/bld_setup_session.sh

echo "Env..." 
echo "$(print_current_bld_env)"
echo ""

#TODO(Karsten): exand on opts
echo "Opts..."
echo "$(print_current_bld_opts)"
echo ""

echo "Building..."
mkdir -p $build_dir # Make sure build/ dir exists
bld_compile $src_dir/main.cpp $build_dir/main
