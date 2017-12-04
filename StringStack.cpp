#include "StringStack.h"
using namespace std;

string StringStack.pop() {
    return stack.pop();
}
void StringStack.push(string x) {
    stack.push(x);
}

bool StringStack.isEmpty() {
    if (stack.isEmpty()) {
        return true;
    } else {
        return false;
    }
}