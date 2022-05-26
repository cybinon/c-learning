#include<Stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	srand((unsigned)time(NULL));
	printf("%d",rand()%5);
	
	return 0;
}
