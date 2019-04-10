#!/bin/bash
g++ -ggdb3 $(pwd)/$1
valgrind --leak-check=full --verbose $(pwd)/a.out $2 $3 $4 $5 $6 $7
