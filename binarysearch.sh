#!/bin/bash

arr=(2 8 10 40 45 50 66 88 100 120 125)

echo "Enter key to find"
read key

low=0
high=10

while [ $low -le $high ]
do

num=$(( $low + $high ))
mid=$(( $num / 2 ))

if [ ${arr[$mid]} -eq $key ]
then
        echo "Found at index: $mid"
        break
elif [ ${arr[$mid]} -lt $key ]
then
        low=$(( $mid + 1 ))
elif [ ${arr[$mid]} -gt $key ]
then
        high=$(( $mid - 1 ))

else
        echo "Not found"
        break
fi
done
~      
