#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int EnglishGrade,MathGrade,Sum; /*宣告變數:英文成績.數學成績和總和*/
	printf("enter EnglishGrade=>"); /*印出提示字元要求使用者輸入英文成績*/
	scanf("%d",&EnglishGrade);/*輸入英文成績*/
	printf("enter MathGrade=>");/*印出提示字元要求使用者輸入數學成績*/
	scanf("%d",&MathGrade);/*輸入數學成績*/

	Sum=EnglishGrade+MathGrade;/*加總*/
	printf("Sum=%d\n",Sum);/*印出加總後成績*/
	
return 0;
}
