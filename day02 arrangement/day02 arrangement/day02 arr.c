#include<stdio.h>

int test01();    //함수의 Prototype
void test02(int a);


int test01()
{
	char* str[10] = {"Zero", "One", "Two", "Three", "Four", "Five", 
		"Six", "Seven", "Eight", "Nine" }; //문자열 포인터 배열

	printf("숫자 키를 입력하세요. 해당하는 영단어를 알려드리겠습니다.");
	printf("프로그램을 끝내시려면 'Q' 키를 입력하세요.\n\n");
	int n = 1;
	while (n)
	{
		printf(">");
		char c = getch();

		int m = c - 0x30; //0x30 ASCII --> num 으로 변환가능 0x30 = 0
		printf("%c : %s\n", c, str[m]);
	}
}

void test02(int a)  //문자열과 문자 배열
{
	char ca[] = "Hello";  // ca[0] : 'H' ... ca[4]:'o'  ca[5]:\0(null)
	
	for (int i = 0; i < 10; i++) //0~5
	{
		printf("ca[%d] : %c (%03x) \n" ,i, ca[i], ca[i]);    //%d 숫자 %c char //%02x 16진수 %와 x사이에 숫자를 채워넣어서 자릿수를 맞춰 줌
	}
	ca[2] -= 1;
	ca[3] -= 1;

	for (int i = 0; i < 10; i++) //0~5
	{
		printf("ca[%d] : %c (%x) \n", i, ca[i], ca[i]);    //%d 숫자 %c char //%02x 16진수
	}
}

main()
{
	//test01();
	test02(1);
}