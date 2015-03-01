#include  "stdio.h"
int main()
{
	int num;
	int ct;
	while(1)
	{
		ct=0;
		if(scanf("%d",&num)&&num)
		{
			while(num!=1)
			{
				if(num%2)
				{
					num=( num*3+1 )/2;
					ct++;
				}else{
					num/=2;
					ct++;
				}
			}
			printf("%d\n",ct);
		}else return 0;
	}
	return 1;
}
