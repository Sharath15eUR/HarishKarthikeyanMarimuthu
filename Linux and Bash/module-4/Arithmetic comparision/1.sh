#!/bin/bash
read -p "Enter the first number: " a
read -p "Enter the second number: " b
if [ $a -ne $b ]; then
	echo "They are not equal"
else
	echo "They are equal"
fi
