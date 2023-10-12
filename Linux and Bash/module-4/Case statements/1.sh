#!/bin/bash
read -p "Enter the first number (a): " a
read -p "Enter the second number (b): " b
read -p "Enter the mathematical operator (+, -, /, *): " operator
case $operator in
    +)
        result=$((a + b))
        ;;
    -)
        result=$((a - b))
        ;;
    /)
        if [ "$b" -eq 0 ]; then
            echo "Error: Division by zero is not allowed."
            exit 1
        fi
        result=$(echo "scale=2; $a / $b" | bc)
        ;;
    *)
        result=$((a * b))
        ;;
esac
echo "Result: $a $operator $b = $result"
