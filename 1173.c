#include "stdio.h"
int main()
{
	int n,m;
	int i;
	/* freopen("data","r",stdin); */
	while(scanf("%d",&n)!=EOF)
	{
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&m);
		int b,tag;
		while(m--)
		{
			scanf("%d",&b);
			tag=0;
			for(i=0;i<n;i++)
			{
				if(b==a[i])
				{
					printf("YES\n");
					tag=1;
					break;
				}
			}
			if(!tag)
				printf("NO\n");
		}
			
	}
}
