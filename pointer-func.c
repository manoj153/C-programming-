#include<stdio.h>

void main()
{

 int (*b)(int*, int*);
 b = &sum();
 *b(5,6);


}








int sum(int *a, int *b)
{

int c = *a + *b;
printf("The value of the 2 given integer: %d",c);
return 0

}
