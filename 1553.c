#include "stdio.h"
#include "math.h"
int main()
{
	float h,m;
	freopen("data","r",stdin);
	while(scanf("%f:%f",&h,&m)!=EOF)
	{
		if(h>=12)
			h-=12;
		float angleh=h*30+m/60*30;
		float anglem=m/60*360;
		float res=fabs(angleh-anglem);
		printf("%.2f\n",res>180?360-res:res);
	}
	return 0;
}
