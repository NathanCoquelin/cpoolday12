#!/bin/bash
##
## EPITECH PROJECT, 2022
## build.sh
## File description:
## build library files
##

find . -type f -name "*.c" -exec gcc -c -Wall -Wextra {} \;
find . -type f -name "*.o" -exec ar rc libmy.a {} +
