#include <stdio.h>


struct memory
{
  int x;
  int y;
  int z;
};



void main ()

{

 struct memory test;
 test.x = 5;
 printf("Val: %p\n",&test.x);
 printf("Struct address: %p\n",&test);
 printf("Struct address: %p\n",&test.y);
 

}
