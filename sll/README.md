# Singly Linked list

This directory is parent for all the sinlgy linked list problems.

## Common SLL library
We have a common SLL libray which provide all the basic functionality to
create/delete/print a SLL. 

### TO compile library
gcc -c -Wall -Werror -fPIC common/sll.c -o common/sll.o
gcc -shared -o libsll.so common/sll.o

You should see a libsll.so in sll directory.

# SLL Pragram List 

##1. Basic SLL Library test (/sll/sll_library_test.c)

### To compile 
gcc -L./  sll_library_test.c  -o sll_library_test.o -lsll
### To Run
cd geeksforgeeks-solutions/sll/
export LD_LIBRARY_PATH=`pwd`
./sll_library_test.o

