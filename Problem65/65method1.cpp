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
	int i,length;
	char sen[1000];
	printf("Input : ");
	scanf("%s", sen);
	length = strlen(sen);
	printf("Output : ");
	while (length != 0)
	{
		for (i = 0; i < length; i++)
		{
			printf("%c", sen[i]);
		}
		printf("\n");
		printf("       	 ");
		length--;
	}


	


}