#include <stdio.h>

int main(void) {

   int k,j,n;
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
		for(j=1;j<=(2*n)-1;j++)
		{
			if(j<=n-k)
				printf(" ");
			else if(k==1 && j>=n && j<=(2*n)-1)
				printf("*");
			else if(k==n && j<=n)
				printf("*");
			else if(j==n-k +1 ) 				
				printf("*");
			else if(j==(2*n)-k)
				printf("*");
			else
				printf(" ");
		}
	printf("\n");
}
	return 0;
}
