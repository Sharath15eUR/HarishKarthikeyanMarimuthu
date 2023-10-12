#!/bin/bash
echo "This is X_file.txt" > X_file.txt
ls /usr/lib &> out_file.txt
cat X_file.txt > newfile
cat out_file.txt >> newfile
