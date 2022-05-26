#include<stdio.h>

int dividers(int n)
{
	int i;
	int s=2;
	for(i=2;i<=n/2;i++)
	 if(n%i==0)
	 s++;
	 return s;
}
int main()

{
	int n;
	scanf("%d",&n);
	printf("%d has %d dividers",n,dividers(n));
	
	return 0;
}
