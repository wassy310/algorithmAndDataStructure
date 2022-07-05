#include<stdio.h>

int sumof(int a[], int n);
int main()
{
	int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, sum, n = 10;
	
	sum = sumof(num, n);
	
	printf("%d", sum);
	return 0;
}

int sumof(int a[], int n){
	int i, sum = 0;
	
	for(i = 0; i < n; i++){
		sum += a[i];
	}
    
	return sum;
}