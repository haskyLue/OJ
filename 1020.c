#include"stdio.h"
int main()
{
	int x1,y1,x2,y2;
	int x,y,tag;
	while(1)
	{
		//初始化参数
		x1=231;y1=231;x2=-231;y2=-231;
		tag=0;
		//读取数据
		while( scanf("%d",&x) && scanf("%d",&y) )
		{
			tag++;
			if(x==0&&y==0)
			{
				if(tag!=1)
				{
					printf("%d %d %d %d\n",x1,y1,x2,y2);
					break;
				} else return 0; //首次输入0 0直接退出
			}
			else
			{
				x1=x1<x?x1:x;
				y1=y1<y?y1:y;
				x2=x2>x?x2:x;
				y2=y2>y?y2:y;
			}
		}
	}
	return 1;
}
