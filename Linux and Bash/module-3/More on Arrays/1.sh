#!/bin/bash
declare -a names2=("a" "b" "c" "d" "e" "f" "g")
echo "${names2[@]:2:3}"
names2[2]="Debian"
echo "${names2[2]}"
names2=("${names2[@]}" "h")
echo "${names2[@]}"

