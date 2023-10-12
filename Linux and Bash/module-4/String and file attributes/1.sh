#!/bin/bash
if [ -r "test.txt" ]; then
	echo "File is readable"
fi
if [ -x "test.txt" ]; then
	echo "File is executable"
fi
if [ -O "test.txt" ]; then
	echo "File is exist and owned by effective user id"
fi

