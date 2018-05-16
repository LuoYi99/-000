/*
思路:
先创建一个有26*2个元素的整形数组，并赋初值0
前26个元素存储26个大写字母
后26个元素存储26个小写字母
然后逐个接收字符
当访问到一个字母时
首先判断大小写
若是小写，则用下标为：该字母的ASCII码减去97再加上26，的整形数组元素的值加一
同理，大写字母对应的下标为：ASCII码减去65，的整形数组元素
*/
#include<stdio.h>
void main()
{
	int num[26*2]={0},i;
	char c;
	while((c=getchar())!='\n')//逐个接收字符
	{
		if(c>='a'&&c<='z')
			num[c-97+26]++;//ASCII码推下标
		else 
			if(c>='A'&&c<='Z')
				num[c-65]++;
	}
	for(i=0;i<26*2;i++)
		if(i<26)
			printf("%c:%d个\n",i+65,num[i]);//下标推ASCII码
		else
			printf("%c:%d个\n",i-26+97,num[i]);
}