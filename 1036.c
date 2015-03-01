#include "stdio.h"
int main()
{
	int X,Y,Z;
	int count;
	int tag,i,j; 
	int C,I,J; //单价 首位 末尾
	freopen("data","r",stdin);
	while(scanf("%d",&count)!=EOF && count>0 && count<100)
	{
		tag=0;
		scanf("%d %d %d",&X,&Y,&Z);
		for(i=9;i>0&&!tag;i--) //从大到小
		{
			for(j=9;j>=0&&!tag;j--)
			{
				if ( (i*10000+X*1000+Y*100+Z*10+j)%count==0 )
				{
					printf("%d %d %d\n",i,j,(i*10000+X*1000+Y*100+Z*10+j)/count);
					tag=1;
				}
			}
		}
		if(tag==0)
			printf("0\n");
	}
	fclose(stdin);
	return 0;
}
