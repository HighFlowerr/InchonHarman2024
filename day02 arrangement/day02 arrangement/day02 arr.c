#include<stdio.h>

int test01();    //�Լ��� Prototype
void test02(int a);


int test01()
{
	char* str[10] = {"Zero", "One", "Two", "Three", "Four", "Five", 
		"Six", "Seven", "Eight", "Nine" }; //���ڿ� ������ �迭

	printf("���� Ű�� �Է��ϼ���. �ش��ϴ� ���ܾ �˷��帮�ڽ��ϴ�.");
	printf("���α׷��� �����÷��� 'Q' Ű�� �Է��ϼ���.\n\n");
	int n = 1;
	while (n)
	{
		printf(">");
		char c = getch();

		int m = c - 0x30; //0x30 ASCII --> num ���� ��ȯ���� 0x30 = 0
		printf("%c : %s\n", c, str[m]);
	}
}

void test02(int a)  //���ڿ��� ���� �迭
{
	char ca[] = "Hello";  // ca[0] : 'H' ... ca[4]:'o'  ca[5]:\0(null)
	
	for (int i = 0; i < 10; i++) //0~5
	{
		printf("ca[%d] : %c (%03x) \n" ,i, ca[i], ca[i]);    //%d ���� %c char //%02x 16���� %�� x���̿� ���ڸ� ä���־ �ڸ����� ���� ��
	}
	ca[2] -= 1;
	ca[3] -= 1;

	for (int i = 0; i < 10; i++) //0~5
	{
		printf("ca[%d] : %c (%x) \n", i, ca[i], ca[i]);    //%d ���� %c char //%02x 16����
	}
}

main()
{
	//test01();
	test02(1);
}