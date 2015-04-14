# Count occurance of give numbe in SLL 

## Problem statement
Give a sll and a key find how many times the key occures in sll.
## Solution
Take pointer and a counter.
Traverse the pointer from sll head to sll tail.
for each node we will check if node data is same as key.
if key found in node then increment the counter.
else move to next node.

### Time complexity
In best/worst/average case time complexity is O(n).

## To Compile
```
gcc -L../ count_occurance.c -o count_occurance.o -lsll
```
## To Run
```
export LD_LIBRARY_PATH=`pwd`"/../"
./count_occurance.o
```
