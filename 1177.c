#include "stdio.h"
/* #include "stdlib.h" */
void replace(char str[],int start,int len,char rep[]);
void reverse(char str[],int start,int len);
int main()
{
	/* freopen("data","r",stdin); */
	char str[101];
	int n;
	while(scanf("%s",str)!=EOF)
	{
		scanf("%d",&n);
		int i=0;
		char ins[n][101];
		while(i<n)
		{
			scanf("%s",ins[i]);
			if(ins[i][0]=='0') //翻转
			{
				reverse(str,ins[i][1]-'0',ins[i][2]-'0'); //字符-->整型 转换或者直接减去48 && 字符串 atoi
			}
			else if(ins[i][0]=='1') //替换
			{
				replace(str,ins[i][1]-'0',ins[i][2]-'0',ins[i]);
			}
			printf("%s\n",str);
			i++;
		}
	}
}
void reverse(char str[],int start,int len)
{
	int end=start+len-1;
	int mid=( start + end )/2;
	char tmp;
	for(;start<=mid&&end>=mid;start++,end--)
	{
		tmp=str[start];
		str[start]=str[end];
		str[end]=tmp;
	}
}
void replace(char str[],int start,int len,char rep[])
{
	int i=3;
	int end=start+len-1;
	for(;start<=end;start++,i++)
	{
		str[start]=rep[i];
	}
}
