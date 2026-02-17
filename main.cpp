#include "head.h"
#include <iostream>

int main(void)
{
    char *text = doThing();
    std::cout << text << std::endl;
    undoThing(text);
    return (0);
}