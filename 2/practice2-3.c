#include<stdio.h>
int main()
{
	int year, mon, uru = 0, day, i, sumday = 0;
	int mdays[2][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

	printf("年：");
	scanf("%d", &year);
	printf("月：");
	scanf("%d", &mon);
	printf("日：");
	scanf("%d", &day);
    
	if(year%4 == 0 && year%100 != 0 || year%400 == 0){
		uru = 1;
	}
	for(i = 0; i < mon - 1; i++){
		sumday += mdays[uru][i];
	}
	sumday += day;
	
	printf("年内で%d日目です", sumday);

	return 0;
}