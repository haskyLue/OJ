#include "stdio.h"
int main()
{
	int n;
	int i;
	/* freopen("data","r",stdin); */
	while(scanf("%d",&n)!=EOF)
	{
		int x[n],y[n];
		for(i=0;i<n;i++)
		{
			scanf("%d %d",&x[i],&y[i]);
		}
		int minx=x[0];
		int index=0;
		while(i--) //找x中的最小值及索引
		{
			if(minx>=x[i])
			{
				minx=x[i];
				index=i;
			}
		}
		int miny=y[index];
		int j;
		for(j=index;j<n;j++)//x相同的前提下，找y中最小的值域
		{
			if(y[j]<miny && x[j]==minx)
				miny=y[j];
		}
		printf("%d %d\n",minx,miny);
	}
}
