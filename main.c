#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int EnglishGrade,MathGrade,Sum; /*�ŧi�ܼ�:�^�妨�Z.�ƾǦ��Z�M�`�M*/
	printf("enter EnglishGrade=>"); /*�L�X���ܦr���n�D�ϥΪ̿�J�^�妨�Z*/
	scanf("%d",&EnglishGrade);/*��J�^�妨�Z*/
	printf("enter MathGrade=>");/*�L�X���ܦr���n�D�ϥΪ̿�J�ƾǦ��Z*/
	scanf("%d",&MathGrade);/*��J�ƾǦ��Z*/

	Sum=EnglishGrade+MathGrade;/*�[�`*/
	printf("Sum=%d\n",Sum);/*�L�X�[�`�ᦨ�Z*/
	
return 0;
}
