#include "stdio.h"
int f(int n);
int main()
{
	/* freopen("data","r",stdin); */
	int n;
	int i;
	int arrayF[11];

	//初始化factorials
	arrayF[0]=1;
	for (i=1;i<11;i++) arrayF[i]=arrayF[i-1]*i;

	while(scanf("%d",&n)!=EOF && n<=1000000 && n>=0)
	{
		for (i=10;i>=0;i--)
		{
			if(n>=arrayF[i])
				n-=arrayF[i];
		}
		if(n==0)
			printf("YES\n");
		else
			printf("NO\n");
	}

	/* fclose(stdin); */
	return 0;
}
