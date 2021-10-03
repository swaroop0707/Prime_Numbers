#include<stdio.h>
int prime(int , int);
int main()
{
	int n, i, isprime;
	printf("Enter the number: ");
	scanf("%d", &n);
	//takes input from user
	i=n/2;
	isprime = prime(n,i);
	if(isprime==1)
	{
		printf("%d is a prime number", n);
	}
	else
	{
		printf("%d is not a prime number", n);
	}
	return 0;
}
int prime(int n, int i)
{
	if(i==1)
	{
		return 1;
	}
	else if(n%i==0)
	{
		return 0;
	}
	else
	{
		return prime(n, i-1);
	}
}
