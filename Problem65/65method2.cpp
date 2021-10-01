#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>


//65.จงเขียนโปรแกรมเพื่อรับ String 1 ชุดแล้วแสดงผลลัพธ์เป็นสามเหลี่ยมจาก string ที่รับเข้ามา ดังตัวอย่าง (Level 3)
//Input :  asdf
//Output : asdf
//         asd
//         as
//         a

int main()
{
	int i=0,len;
	char sen[1000];
	printf("Input : ");
	scanf("%s", sen);
	len = strlen(sen);
	printf("Output : ");
	while (sen[i] != '\0' && len!=0)
	{
		printf("%c", sen[i]);
		i++;
		if (i == len)
		{
			sen[i] = '\0';
			len--;
			i = 0;
			printf("\n");
			printf("       	 ");
		}
	}
}