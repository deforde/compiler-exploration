#!/bin/bash

echo "No optimisation, default strict-aliasing rules:"
gcc -Wall -Wextra -Wpedantic -Werror main.c -o app
./app
rm app

echo "O2, default strict-aliasing rules:"
gcc -O2 -Wall -Wextra -Wpedantic -Werror main.c -o app
./app
rm app

echo "O2, no strict aliasing"
gcc -O2 -Wall -Wextra -Wpedantic -Werror -fno-strict-aliasing main.c -o app
./app
rm app

