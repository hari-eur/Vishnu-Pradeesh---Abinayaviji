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
			if(i<=j)
			{
				printf("* ");}
			else{
				printf("  ");
			}
		}
	
		for(j=1;j<row-i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}	
	return 0;
}
