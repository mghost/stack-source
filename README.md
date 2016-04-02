# Stack-Source
a sample implementation of the data struct stack in c++

There are five sources:
  - node.h
  - node.cpp
  - stack.h
  - stack.cpp
  - main.cpp

In the Makefile, just use the command 'make run' make sure of compiling all and run the main example

In node.h/node.cpp there are all definitions/implementations of class Node used at the base of the Stack
Cause the usage of this Node are not defined, the field 'data' (called 'content') of Node is leaved as a void pointer.
For specific usage, it's better to modify it.

In stack.h/stack.cpp there are all definitions/implementations of class Stack

The main.cpp source is the code for a sample example to show the usage of Stack Class
