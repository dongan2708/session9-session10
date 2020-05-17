#include<stdio.h>
#include<conio.h>
 
int main()
{
	int n1 = 0, n2 = 1,n3,i,j;
	printf("nhap so phan tu trong day Fibonacci: ");
	scanf("%d",&j);
	printf("\n%d \n%d", n1,n2);
	
	for(i = 2;i < j;++i) 
{
	n3=n1+n2;
	printf("\n%d",n3);
	n1=n2;
	n2=n3; 
	}
}
