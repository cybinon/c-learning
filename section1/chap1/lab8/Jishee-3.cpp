#include<stdio.h> 
#include<stdlib.h> 
void printArray(int *a, int n) 
{
	
for (int i=0; i<n; i++) 
printf("\n %d", a[i]); 
}

int main()
{
	
 int array[100]; 
 int n; 
 scanf("%d", &n); 
 for (int i=0; i<n; i++) 
 array[i]=rand()%100; 
 printf("Address of 1-st element Array %d\n",array); 
 printArray(array, n); 
 return 0;
 }
