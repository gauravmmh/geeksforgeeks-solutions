# Find middle element of sll 

## Problem statement
Give a sll find lenght of sll. 
## Solution
Take pointer and a counter.
Traverse the pointer from sll head to sll tail.
for each node traversed increment the counetr.
When pointer reahces to end of the sll we have lenght of sll in counter.

### Time complexity
In best/worst/average case time complexity is O(n).

## To Compile
```
gcc -L../ lenght_of_sll.c -o lenght_of_sll.o -lsll
```
## To Run
```
export LD_LIBRARY_PATH=`pwd`"/../"
./lenght_of_sll.o
```
