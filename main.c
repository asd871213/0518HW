#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int englishgrade,mathgrade,sum;
	printf("enter englishgrade=>");
	scanf("%d",&englishgrade);
	printf("enter mathgrade=>");
	scanf("%d",&mathgrade);

	sum=englishgrade+mathgrade;
	printf("sum=%d\n",sum);
	
return 0;
}
