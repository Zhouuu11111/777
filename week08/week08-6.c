#include <stdio.h>

int main( void )
{
   int i,j;
   int n;

   printf("�п�J�j�p:\n");
   scanf("%d",&n);

//your code
	for(int i=1;i<=n;i++){

	for(int k=1;k<=i;k++) printf(" ");

	for(int k=1;k<=n;k++) printf("*");

	printf("\n");
	}

   return 0;
}
