#include<stdio.h>
#include<math.h>
int main()
{
	int sign=1;                      //sign������ʾ��ֵ�ķ���
	double pi=0.0,n=1.0,term=1.0;    //pi��ʼ�������ʽ��ֵ�������е�ֵ��n�����ĸ��term����ǰ���ֵ
    while(fabs(term))>=1e-6)         //��鵱ǰ��term�ľ���ֵ�Ƿ���ڻ����1e-6
	{
		pi=pi+term                   //����ǰ���ۼӵ�pi��
			n=n+2;                   //nΪ��һ��ķ�ĸ
		sign=-sign;                  //��һ������һ������෴
		term=sign/n;                 //������ֵ
	}
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	return 0;
}




