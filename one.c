#include "head.h"

char *doThing(void)
{
    char *str = strdup("Hello Wöarld");
    return (str);
}

void undoThing(void *ptr)
{
    free(ptr);
}