#include<stdio.h>
#include<math.h>
int main()
{
	int sign=1;                      //sign用来表示数值的符号
	double pi=0.0,n=1.0,term=1.0;    //pi开始代表多项式的值，后代表π的值，n代表分母，term代表当前项的值
    while(fabs(term))>=1e-6)         //检查当前项term的绝对值是否大于或等于1e-6
	{
		pi=pi+term                   //将当前项累加到pi中
			n=n+2;                   //n为下一项的分母
		sign=-sign;                  //上一项与下一项符号相反
		term=sign/n;                 //该项数值
	}
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	return 0;
}




