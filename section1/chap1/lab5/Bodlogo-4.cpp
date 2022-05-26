#include<stdio.h>

int main()
{
	int a[20][20];
	int i,j,s=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0; j<n; j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
		for(i=0; i<n;i++)
		   for(j=n-i-1; j<n ; j++);
		      s=s+a[i][j];
		   printf("\n %d",s);
		   
	return 0;
}
