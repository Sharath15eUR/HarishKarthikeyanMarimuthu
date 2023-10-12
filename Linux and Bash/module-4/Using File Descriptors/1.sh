#!/bin/bash
exec 3> test.txt
echo "Hi!" >&3 
echo "Hello world!" >&3
ls -l >&3
exec 3<&-
