#include <stdio.h>
#include <testapi.h>

void hello_world(void)
{
    printf("[%s:%d]Hello world!!\n",__func__, __LINE__);
}