#include <stdio.h>

void main()
{
 #ifdef MANOJ
    printf("Manoj is -D argument during GCC CLI compilation \n");
 #else
    printf("Any-other -D argument passed during GCC CLI compilation \n");
 #endif
}

