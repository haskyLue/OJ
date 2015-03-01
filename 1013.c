#include "stdio.h"
#define LIMIT 200
int main()
{
	int N,i;//天数
	int M,j;//条目数
	char id[LIMIT][15];
	int ah,am,as,lh,lm,ls;
	int leave,arrive,aindex,lindex; //00:00:00,23:59:59
	freopen("data","r",stdin);
	while(scanf("%d",&N)!=EOF && N>0)
	{
		for(i=0;i<N;i++)
		{
			while(scanf("%d",&M)!=EOF && M>0)
			{
				arrive=23*3600+59*60+59; //正确处理初始化的位置！
				leave=0;
				for(j=0;j<M;j++)
				{
					scanf("%s %d:%d:%d %d:%d:%d",id[j],&ah,&am,&as,&lh,&lm,&ls);
					int _arrive=ah*3600+am*60+as;
					int _leave=lh*3600+lm*60+ls;
					if( _arrive<arrive )
					{
						arrive=_arrive;
						aindex=j;
					}
					if( _leave>leave )
					{
						leave=_leave;
						lindex=j;
					}
				}
				printf("%s %s\n",id[aindex],id[lindex]);
			}
		}
	}
	return 0;
}
