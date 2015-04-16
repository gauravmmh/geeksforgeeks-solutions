# get nth node in0 SLL

## Problem statement
Give a sll find nth of sll. 
## Solution
Take pointer and a counter.
Traverse the pointer from sll head to sll tail.
for each node traversed decrement the counter.
When n reahce to 0 we are at nth node.

### Time complexity
In best/worst/average case time complexity is O(n).

## To Compile
```
gcc -L../ get_nth_node.c -o get_nth_node.o -lsll
```
## To Run
```
export LD_LIBRARY_PATH=`pwd`"/../"
./get_nth_node.o
```
