#ifndef _STRINGTACK_
#define _STRINGTACK_
#include <string>
#include "TrueStack.h"

using namespace std;

class StringStack : public TrueStack
{
  private:
    string stack;

  public:
    string pop();
    void push(std::string);
    bool isEmpty();
};

#endif