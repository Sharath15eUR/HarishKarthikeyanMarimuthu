#!/bin/bash
func(){
	a=$1
	b=$2
	result=$((a*b))
	echo "$a * $b = $result"
}

func 1 2
func 2 3
func 3 4


