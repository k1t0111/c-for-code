//ch5_8
#include <stdio.h>
void ch5_8()
{
	 char ch;
	 printf("请输入一个字符：\n");
	 scanf(" %c",&ch);
	 if(ch>=65&&ch<=90)
	 {
	 ch=ch+32;
	 printf("转换后的字符为及码值为：%c %d\n",ch,ch);

		  }
     else
	 if(ch>=97&&ch<=122)
	 {
	 ch=ch-32;
	 printf("转换后的字符为及码值为：%c %d\n",ch,ch);
	 }
	 else
	 printf("转换后的字符为及码值为：%c %d\n",ch,ch); 
 } 
