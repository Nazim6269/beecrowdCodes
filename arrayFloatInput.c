
#include<stdio.h>

int main()
{
   float floatArray[10];
   int i;
   //input in array using for loop
   for(i=0; i<10; i++)
      {
	   printf("Enter Element No:%d=",i+1);
       scanf("%f", &floatArray[i]);
      }
   // show array elements using for loop
    printf("The elements of array are:\n");
    for(i=0;i<10;i++)
      printf("%.2f\n", floatArray[i]);

   return 0;
}
