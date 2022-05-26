#include<Stdio.h>

int main()
{
	int a[20][20];
	int i,j,s=0,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		for(j=1; j<=n; j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
		for(i=1; i<=n;i++)
		   	   s=s+a[i][i];
		   printf("\n Sum=%d",s);
		   
	return 0;
	
}
