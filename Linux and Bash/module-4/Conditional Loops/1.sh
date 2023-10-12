#!/bin/bash
is_prime() {
    local number=$1
    if [ "$number" -le 1 ]; then
        return 1
    fi
    for ((i = 2; i * i <= number; i++)); do
        if [ $(("$number"%"$i")) -eq 0 ]; then
            return 1
        fi
    done
    return 0
}
read -p "Enter the value of N: " N
count=0
number=2
sum=0
while [ $count -lt $N ]; do
    if is_prime "$number"; then
        sum=$((sum + number))
        count=$((count + 1))
    fi
    number=$((number + 1))
done
echo "The sum of the first $N prime numbers is: $sum"
