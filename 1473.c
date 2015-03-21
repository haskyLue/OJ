#include "stdio.h"
#define bitmax 64
void parse(long value)
{
    int i;
	int output[bitmax];

	//转化二进制 取尾右移
    for (i = bitmax-1; i >= 0; --i, value >>= 1)
		output[i] = (value & 1) ; 

	//清前置零
	int tag=0; 
    for (i=0;i<bitmax;i++) 
	{
		if(output[i]==1) tag=1;
		if(tag) printf("%d",output[i]);
	}
	printf("\n");
}
int main()
{
	/* freopen("data","r",stdin); */
	int n;
	while(scanf("%d",&n)!=EOF && n<=1000)
	{
		long s;
		while(n--)
		{
			scanf("%ld",&s);
			s==0?printf("0\n"):parse(s);
		}
	}
	return 0;
}
