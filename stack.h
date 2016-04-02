#ifndef __stack_h__
#define __stack_h__

#include "node.h"

class Stack {
private:
    Node* _top;
    int _size;

public:
    Stack();

    int is_empty();
    int size();

    void push(void* content);
    void* pop();
    void* top();
};

#endif
