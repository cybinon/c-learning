#include<stdio.h>

char toLetter(int n)
{
	return n+48;
} 
int main()
{
	printf("char : %c",toLetter(1));
	printf("\nint: %d", toLetter(1));
	
	return 0;
}
