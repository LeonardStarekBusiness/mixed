#include "head.h"

int main(void)
{
    char *str = doThing();
    std::cout << str << std::endl;
    undoThing(str);
}