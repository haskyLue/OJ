#include "stdio.h"
#include "stdlib.h"
//int main()
//{
//	int line;
//	int i=0;
//	char *tmp;
//
//	scanf("%d",&line);
//	int numArray[line];
//
//	while(i<line)
//	{
//		scanf("%d",&numArray[i++]);
//	}
//	for(i=0;i<line;i++){
//		(numArray[i],tmp,2);
//		printf("%s",tmp);
//		//printf("%ld\n",numArray[i]);
//	}
//	system("pause");
//	return 0;
//}

#include <stdio.h>

int main()
{
	int ival,n=0;
	char bin[32];
	scanf("%d",&ival);
	while(ival>0){
		bin[n++]=ival&0x01;
		ival>>=1;
	}
	for(n--;n>=0;n--)
		printf("%d",bin[n]);

	getch();
	return 0;
}

