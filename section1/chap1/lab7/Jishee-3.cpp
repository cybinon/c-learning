#include<Stdio.h>

int tugs_too(int k)
{
	int i=1, s=0;
	while(i<k)
	{
		if(k==i)
		s=s+i;
		i++;
	}
	return s==k;
}

int main()
{
	int j,n;
	
	printf("N=");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	  if(tugs_too(j))
       printf("\n%d tugs too.",j);
	 return 0;	  
}
