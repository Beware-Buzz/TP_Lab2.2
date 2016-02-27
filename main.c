#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <memory.h>
int main()
{
time_t t;
double age;
time_t days;
struct tm current;
time_t local=0;
struct tm entered;
 memset(&entered, 0, sizeof entered);
	time(&local);
scanf("%d.%d.%d %d:%d",&entered.tm_mday,&entered.tm_mon,&entered.tm_year,&entered.tm_hour,&entered.tm_min );
entered.tm_year -= 1900;
entered.tm_mon--;
days = mktime(&entered);
age = difftime(local,days);
printf("woof== %4.2f\n",age);
system("pause");
return 0;

}

