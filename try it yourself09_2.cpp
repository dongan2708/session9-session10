#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int num1, num2, i ,sum;
	{
		printf("The program is only for integers\n");
		printf("Enter num1:\n");
		scanf("%d", &num1);
		printf("Enter num2:\n");
		scanf("%d", &num2);
	}
	  {
		for ( i = num1; i <= num2; i+= 2)
		printf("%d\t", i);
	}
	{
		do sum = i + ( i += 2);
		 while(i+=2 <= num2);
		 printf("%d", sum);
	}
	return 0;
}
	
