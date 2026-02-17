#include "head.h"
#include <iostream>

extern void fortnite(void);

int main(void)
{
    char *text = doThing();
    std::cout << text << std::endl;
    undoThing(text);
    fortnite();
    return (0);
}