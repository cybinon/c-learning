#include<stdio.h> 

void read(int a[], int n) 
{
	
int i; 
for (i=0;i<n;i++) 
scanf("%d",&a[i]);
 }
void print(int a[], int n) 
{
int i; 
for (i=0;i<n;i++) 
printf("\t %d", a[i]); 
printf("\n"); 
}
int sum(int a[], int n) 
{
int i; int s=0; 
for (i = 0; i< n; i++) 
s += a[i]; 
return s;
}
main() 
{ int a[100],n; 
printf("n toonii utgiig oruul:"); 
scanf ("%d", &n); read (a,n); 
printf("Tanii oruulsan massiv:"); 
print(a,n);
 printf("\n a-giin elementuudiin niilber:%d", sum(a,n));
  return 0;
  
  }
