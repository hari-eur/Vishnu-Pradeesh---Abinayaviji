#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
	char name[100];
	char mail[100];
	long int mobile;
	int percent;
};
struct dept{
	char dept_name[20];
	struct student st;
	int average;
};



int main()
{
	int n;
	printf("ENTER THE NUMBER OF STUDENTS : ");
	scanf("%d",&n);
	int dc;
	printf("\nENTER THE NUMBER OF DEPT : ");
	scanf("%d",&dc);
	struct student s[n];
	struct dept d[n];
	
	int i;
	for(i=0;i<n;i++)
	{	
		printf("\nENTER THE NAME OF STUDENT %d : ",i+1);
		scanf("%s",&s[i].name);
		printf("\nENTER THE MAIL ID OF STUDENT %d : ",i+1);
		scanf("%s",&s[i].mail);
		printf("\nENTER THE PHONE NUMBER OF STUDENT %d : ",i+1);
		scanf("%li",&s[i].mobile);
		printf("\nENTER THE PERCENTAGE OF STUDENT %d : ",i+1);
		scanf("%d",&s[i].percent);
		printf("\nENTER THE DEPARTMENT OF STUDENT %d : ",i+1);
		scanf("%s",d[i].dept_name);
		
	}
	
	
	
	
	for(i=0;i<n;i++)
	{
		printf("\nNAME OF STUDENT %d : %s",i+1,s[i].name);
		printf("\nMAIL ID OF STUDENT %d : %s",i+1,s[i].mail);
		printf("\nPHONE NUMBER OF STUDENT %d : %li",i+1,s[i].mobile);
		printf("\nDEPARTMENT OF STUDENT %d : %s",i+1,d[i].dept_name);
	}
	float count = 0.0;
	for(i=0;i<n;i++)
	{
		count = count + s[i].percent;
		d[i].average = count;
}
printf("\nAVERAGE : %f",count/n);
	
	
	return 0;
}
