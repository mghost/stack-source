#ifndef __stack_cpp__
#define __stack_cpp__

#include "stack.h"

Stack::Stack() {
    this->_top = 0;
    this->_size = 0;
}

//////////////////////////////////////////////////

int Stack::is_empty() {
    return this->_size == 0;
}

int Stack::size() {
    return this->_size;
}

void Stack::push(void* content) {
    Node* node = new Node(content);
    node->setNext(this->_top);
    this->_size++;
    this->_top = node;
}

void* Stack::pop() {
    if(this->is_empty())
        return 0;

    Node* node = this->_top;
    this->_top = this->_top->getNext();
    this->_size--;
    return node->getContent();
}

void* Stack::top() {
    if(this->is_empty())
        return 0;

    return this->_top->getContent();
}

#endif
