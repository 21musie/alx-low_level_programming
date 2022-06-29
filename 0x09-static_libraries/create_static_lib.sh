#!/bin/bash
gcc -c *.c
ar -t liball.a *.o
ranlib liball.a
