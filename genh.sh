#!/bin/bash

set -eu

script_dir=$(realpath $(dirname $0))

for header in TSLanguages.Native TSLanguage.Native TSParser.Native TSTreeCursor.Native TSTree.Native TSQuery.Native TSQueryCursor.Native TSNode
do
  javah -d $script_dir/lib -classpath ${script_dir}/android-tree-sitter/src/main/java com.itsaky.androidide.treesitter.${header}
done
