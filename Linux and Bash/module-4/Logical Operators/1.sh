#!/bin/bash
if [ -f "test.txt" ] &&  [ -x "test.txt" ]; then
	echo "File exist and executable"
elif [ -f "test.txt" ] && ! [ -x "test.txt" ]; then
	echo "File exist but not executable"
else
	echo "Fie doesnt exist"
fi
