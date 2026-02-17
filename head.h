#ifdef __cplusplus
// c shit
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern "C"
{
#endif
    // cpp shit
    char *doThing(void);
    void undoThing(void *ptr);

#ifdef __cplusplus
}
#endif
