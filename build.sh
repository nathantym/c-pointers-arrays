#!/usr/bin/env bash

function one() {
    gcc -o one one.c
    ./one
}

function two() {
    gcc -o two two.c
    ./two
}

function three() {
    gcc -o three three.c
    ./three
}
"""
function four() {
    gcc -o four four.c
    ./four
}
"""
function compile_log() {
    echo -e "\n[COMPILING AND RUNNING]\n"
}

if [ "$1" = "1" ]; then
    clear
    echo -e "\n[PROBLEM 1]\n"
    compile_log
    one
    echo
elif [ "$1" = "2" ]; then
    clear
    echo -e "\n[PROBLEM 2]\n"
    compile_log
    two
    echo
elif [ "$1" = "3" ]; then
    clear
    echo -e "\n[PROBLEM 3]\n"
    compile_log
    three
    echo
"""
elif [ "$1" = "4" ]; then
    clear
    echo -e "\n[PROBLEM 4]\n"
    compile_log
    four
    echo
"""
else
    clear
    echo -e "\n[ERROR] You didn't enter a proper arg or there was a typo\n"    
    echo -e "[OPTIONS] Enter only the corresponding number (ex. Problem 1 - ./build.sh 1)\n
             - Problem 1
             - Problem 2
             - Problem 3
             - Problem 4
             - Problem 5\n"
fi
