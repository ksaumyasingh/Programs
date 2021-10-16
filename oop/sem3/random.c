#include <stdio.h> 
#include <stdlib.h>
#include<time.h>
  
void Random(int lower, int upper, int count) 
{ 
    int i;
	srand(time(0));
    for (i = 0; i < count; i++)
	{ 
        int num = (rand() % 
           (upper - lower + 1)) + lower; 
        printf("%d ", num); 
    } 
}
   
int main() 
{ 
    int lower, upper, count =3,i; 
    printf("Enter lower bound: ");
	scanf("%d",&lower);
	printf("Enter upper bound: ");
	scanf("%d",&upper);
	Random(lower, upper, count); 
  
    return 0; 
} 