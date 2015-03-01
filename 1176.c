#include "stdio.h"
#include "math.h"
int main()
{
	int n;
	/* freopen("data","r",stdin); */
	while(scanf("%d",&n)!=EOF)
	{
		int a[n],d,i=0;
		while(i<n)
		{
			scanf("%d",&a[i++]);
		}
		scanf("%d",&d);
		int index=pow(2,d-1)-1;
		if(index<=n-1)
		{
			int lastindex=( (pow(2,d)-2)<n-1 )?( pow(2,d)-2 ):( n-1 );
			for(i=index;i<=lastindex;i++)
				i==lastindex?printf("%d\n",a[i]):printf("%d ",a[i]);
		}else printf("EMPTY");
	}
	return 0;
}
