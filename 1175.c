#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int main()
{
	char a[101];
	char b[101];
	/* freopen("data","r",stdin); */
	while(scanf("%s %s",a,b)!=EOF)
	{
		unsigned int len=strlen(b);
		int tag=0;
		if(len<5)
		{
			int val=b[0]-'0';
			int i;
			while(++val<=9)
			{
				for(i=0;i<len;i++) b[i]=val+'0'; //注意类型转化
				if(strstr(a,b))
				{
					printf("YES\n");
					tag=1;
					break;
				}
			}
		}
		else if(len==5)
		{
			char range[5][6]={"12345","23456","34567","45678","56789"};
			int i=0;
			while(i<5)
			{
				if(strcmp(range[i],b)==0)
				{
					i++;
					break;
				}
				i++;
			}//确定b的值以及a的出牌范围

			char tmp[11];
			int j=0,k=0;
			memset(tmp,0,sizeof(char)*11);
			while(j<strlen(a))
			{
				if(a[j]!=tmp[k-1])
					tmp[k++]=a[j];
				j++;
			}//本组牌去重

			for(;i<5;i++)
				if(strstr(tmp,range[i]))
				{
					printf("YES\n");
					tag=1;
					break;
				}
		}

		if(!tag)
			printf("NO\n");
	}
	return 0;
}
