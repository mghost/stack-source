#include <iostream>
#include <cstring>
#include "stack.h"

using namespace std;

int main(void) {
    Stack s = Stack();
    int vals[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i=0; i<10; i++) {
        int* ptr = &vals[i];
        s.push(ptr);
        cout << "s.push(" << vals[i] << ")" << endl;
    }

    cout << endl << endl << "assertion:   s.is_empty() == 0 == " << s.is_empty() << endl;
    cout << "assertion:   s.size() == 10 == " << s.size() << endl << endl << endl;

    while(!s.is_empty()) {
        void* val = s.pop();
        cout << "s.pop() == " << *((int*) val) << endl;
    }

    cout << endl << endl << "assertion:   s.is_empty() == 1 == " << s.is_empty() << endl;
    cout << "assertion:   s.size() == 0 == " << s.size() << endl;
    cout << "assertion:   s.top() == " << s.top() << " == 0 == " << s.pop() << " == s.pop()" << endl;
}
