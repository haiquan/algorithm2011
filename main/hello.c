//hello.c
#include "hello.h"

void hello()
{
#ifdef __cplusplus
    cout << "Hello, C++!" << endl;

#else
    printf("Hello, C!\n");

#endif
}

