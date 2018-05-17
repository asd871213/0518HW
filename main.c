#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int EnglishGrade,MathGrade,Sum;
	printf("enter EnglishGrade=>");
	scanf("%d",&EnglishGrade);
	printf("enter MathGrade=>");
	scanf("%d",&MathGrade);

	Sum=EnglishGrade+MathGrade;
	printf("Sum=%d\n",Sum);
	
return 0;
}
