#include <stdio.h>

void insertArray(int a[],int N,int num)  //N is index of the array,num is the number  to inserted

{
	int n = N + 1; 
	int i;
	for (i = n - 1; i >= 0; i--)
	{
		if (num < a[i])
		{
			a[i + 1] = a[i];
		}
		else
		{
			a[i + 1] = num;
			a[i] = num;
			break;
		}
	}
}
