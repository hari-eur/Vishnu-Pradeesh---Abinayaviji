#include<stdio.h>
int main()
{	
	int row,i,j;
	printf("ENTER THE ROW SIZE : ");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			if(j >= (row-i-1))
			{
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		
	
	
		for(j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	
	
	return 0;
}
