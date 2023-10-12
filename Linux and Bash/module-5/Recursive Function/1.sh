#!/bin/bash
recursive_sum() {
    local n=$1
    if [ $n -eq 0 ]; then
        echo 0
    else
        local previous_result=$(recursive_sum $((n - 1)))
        echo $((n + previous_result))
    fi
}
read -p "Enter the value of N: " N
result=$(recursive_sum $N)
echo "The sum is $result"
