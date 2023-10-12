#!/bin/bash
read -p "Enter username:" uname
if [ $uname == $USER ]; then
	echo "Hello"
else
	echo "Try again"
fi
