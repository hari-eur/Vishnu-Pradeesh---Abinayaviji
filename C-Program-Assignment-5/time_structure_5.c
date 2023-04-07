#include<stdio.h> 
#include<string.h>
#include<malloc.h>

struct time{
    int hours,min;
};
int main()
{
    struct time t;
    printf("\nENTER THE YEAR : ");
    scanf("%d",&t.hours);
    int year,month,day,sec;
    year = t.hours;
    
    printf("\nENTER THE MONTH : ");
    scanf("%d",&t.hours);
    month = t.hours;
    while(month > 12 || month < 1)
    {
    	printf("INVALID MONTH!!\n");
    	printf("\nENTER THE MONTH : ");
    	scanf("%d",&t.hours);
    	month = t.hours;
	}
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		printf("\nENTER THE DATE : ");
    	scanf("%d",&t.min);	
    	day = t.min;
		while(day > 31 || day < 1){
			printf("INVALID DAY !!\n");
			printf("ENTER THE DATE : ");
    		scanf("%d",&t.min);
			day = t.min;		
		}
	}
	else if(month == 2)
	{
		if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
		{
			printf("LEAP YEAR\n");
			printf("ENTER THE DATE : ");
    		scanf("%d",&t.min);
			day = t.min;	
			while(day >= 30 || day < 1){
				printf("INVALID DAY !!\n");
				printf("ENTER THE DATE : ");
    			scanf("%d",&t.min);
				day = t.min;		
		}	
			
		}
		else{
			printf("NOT A LEAP YEAR\n");
			printf("ENTER THE DATE : ");
    		scanf("%d",&t.min);
			day = t.min;	
			while(day >= 29 || day < 1){
				printf("INVALID DAY !!\n");
				printf("ENTER THE DATE : ");
    			scanf("%d",&t.min);
				day = t.min;		
		}	
		}
	}
	else{
		printf("\nENTER THE DATE : ");
    	scanf("%d",&t.min);	
    	day = t.min;
		while(day > 30 || day < 1){
			printf("INVALID DAY !!\n");
			printf("ENTER THE DATE : ");
    		scanf("%d",&t.min);	
			day = t.min;
		}
	}

    printf("\nENTER THE HOUR : ");
    scanf("%d",&t.hours);
    while(t.hours > 23 || t.hours < 0)
    {
    	printf("INVALID HOUR !!\n");
    	printf("ENTER THE HOUR : ");
    	scanf("%d",&t.hours);
	}

    printf("\nENTER THE MINUTES : ");
    scanf("%d",&t.min);
    while(t.min > 59 || t.min < 0)
    {
    	printf("INVALID MINUTES !!\n");
    	printf("ENTER THE MINUTES : ");
    	scanf("%d",&t.min);
	}

    printf("\nENTER THE SECONDS : ");
    scanf("%d",&t.hours);
    sec = t.hours;
    while(sec > 59 || sec < 0)
    {
    	printf("INVALID SECOND !!\n");
    	printf("ENTER THE SECOND : ");
    	scanf("%d",&t.hours);
    	sec = t.hours;
	}
    
    printf("THE SIZE OF STRUCTURE IS %u\n",sizeof(struct time));

    printf("THE TIME IS %d - %d - %d %d:%d:%d",day,month,year,t.hours,t.min,sec);
    return 0;
}

