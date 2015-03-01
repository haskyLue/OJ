#include "stdio.h"
int main()
{
	int n;
	int i;
	int ji,ou;
	freopen("data","r",stdin);
	while(scanf("%d",&n)!=EOF && n>=1 && n<=1000)
	{
		int a[n];
		i=0;
		while(i<n)
		{
			scanf("%d",&a[i++]);
		}
		ji=ou=0;
		while(n--)
		{
			if(a[n]%2)
				ji++;
			else ou++;
		}
		ji<ou?printf("NO\n"):printf("YES\n");
	}
	return 0;
}

