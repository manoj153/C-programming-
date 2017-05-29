
#include<stdio.h>


int sum(int *a, int *b)
{

int c = *a + *b;
printf("The value of the 2 given integer: %d \n",c);
return 0;

}




void main()
{

 int val_1 = 5;
 int val_2 = 5;
 int (*b)(int*, int*);
 b = &sum;
 b(&val_1,&val_2);


}










