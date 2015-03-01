#include "stdio.h"
// #include "stdlib.h"
#include "string.h"
#define SIZE 80
int main()
{
	char input[SIZE];
	int j,i=0;
	int len,line;
	scanf("%s",input);
	// printf("%s,%d,%d\n",input,len,line);
	for(j=SIZE;j>0;j--)
	{
		if(input[j]==' ')
			return 0;
	}

	len=strlen(input);
	line=( len+2 )/3;
	// 前三行
	if(len<=80&&len>=5)
	{
		while(i<line-1)
		{
			printf("%c",input[i]);
			for(j=0;j<len-line*2;j++)
				printf(" ");
			printf("%c\n",input[len-1-i]);
			i++;
		}
		//后三行
		for(;i<len-(line-1);i++)
			printf("%c",input[i]);
	}

	// system("pause");
	return 0;
}    

