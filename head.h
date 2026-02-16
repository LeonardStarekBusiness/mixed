#ifdef __cplusplus
    //cpp shit
#include <iostream>

extern "C" {
#endif
    //c shit
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *doThing();
void undoThing(void *ptr);

#ifdef __cplusplus
}
#endif
