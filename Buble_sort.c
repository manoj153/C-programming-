/*
 * 
 * Manojkumar Subramaniam 
 * Buble Sort C program 
 * manojkumar99tech@gmail.com
 * 
 */ 


#include<stdio.h>


int main()	{

printf("Please Input Number Of Elements To Sort :");

int n;

scanf("%d",&n);

//Create array to store input intergers // Array with n number input from user
int storeI[n];

//For loop to accept n number of value to Array
for (int i=0; i<n; i++)
        {

                printf("Element%d :\n",i+1);
                scanf("%d",&storeI[i]);

        }

for (int x=0; (x<n-1); x++)

	{
        for(int y=0; y<((n-1)-x); y++)
         
         {      
                

                if(storeI[y] > storeI[y+1])
				{
                        int swap;
                        swap=storeI[y];
                        storeI[y] = storeI[y+1];
                        storeI[y+1] = swap;
						//printf("swap occured \n"); // Debug
                }

        }
	}
for (int z=0 ; z<n; z++)
        
	{

        printf(" Your Numbers : %d \n",storeI[z]);
        
	}
	
	
}
