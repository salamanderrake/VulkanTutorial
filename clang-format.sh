#!/bin/bash

/usr/bin/clang-format -i -style=file -verbose `find . -type f \( -name '*.h' -o -name '*.cpp' -o -name '*.inl' \) -not -path "./thirdparty/*" ` "$@"

