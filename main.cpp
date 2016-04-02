#include <iostream>
#include <cstring>
#include <cassert>
#include "stack.h"

using namespace std;

int main(void) {
    Stack s = Stack();
    int vals[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int value = 0;

    for(int i=0; i<10; i++) {
        int* ptr = &vals[i];
        s.push(ptr);
        assert(value++ == vals[i]);
    }

    assert(!s.is_empty());
    assert(s.size() == 10);

    while(!s.is_empty()) {
        void* val = s.pop();
        assert(*((int*) val) == --value);
    }

    assert(s.is_empty());
    assert(s.size() == 0);
    assert(s.pop() == s.top() && s.top() == 0);
}
