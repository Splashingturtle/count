#include<stdio.h>

int main()
{
	char c;
	int letter = 0;
	int space = 0;
	int other = 0;
	int number = 0;
	while ((c=getchar() )!= '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			letter++;	
		}
		else if (c >= '0' && c <= '9') {
			number++;
		}
		else if (c == ' ')
		{
			space++;
		}
		else {
			other++;
		}
	}
	printf("字母个数%d 空格个数%d 其他字符个数%d 数字个数%d",letter,space,other,number);


	return 0;
}
