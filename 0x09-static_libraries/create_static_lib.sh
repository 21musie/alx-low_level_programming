#!/bin/bash
gcc Wall -Werror -Wextra -pedantic *.c
ar -t liball.a *.o
ranlib liball.a
