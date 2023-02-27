#include<stdio.h>
int main()
{
    //GETTING INPUT....
    int num1,num2;
    printf("Enter the numbers 1 & 2\n");
    scanf("%d %d",&num1,&num2);
    printf("ADDITION OPERATOR : %d\n",num1+num2);
    printf("SUBTRACTION OPERATOR : %d\n",num1-num2);
    printf("MULTIPLICATION OPERATOR : %d\n",num1*num2);
    printf("PRE-INCREMENT OPERATOR : %d\n",++num1);
    printf("POST-DECREMENT OPERATOR : %d\n",num2--);
    num1&=num2;
    printf("AND ASSIGNMENT OPERATOR : %d\n",num1);
    num2>>=num1;
    printf("LEFT SHIFT OPERATOR : %d\n",num2);
    printf("GREATER THAN COMPARISON OPERATOR : %d\n",num1>num2);
    printf("EQUAL TO COMPARISON OPERATOR : %d\n",num1 == num2);
    printf("LOGICAL AND  OPERATOR : %d\n",num1&&num2);
    printf("SIZE OF OPERATOR : %lu\n",sizeof(num1));    printf("TERNARY OPERATOR : %d\n",(num1>num2? num2:num1));
    return 0;
}
