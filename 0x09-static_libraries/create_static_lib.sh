#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -cr liball.a *.o
ranlib liball.a
