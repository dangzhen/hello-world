#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<time.h>
using namespace std;
#define random() (rand()%100) 
int main()
{
	int i, j, m, a, b, c, d,count;
	char k;
	srand((int)time(NULL));  //����ʱ������ ��ʹ�ó���ÿ�����еĽ������ͬ 
	cout << "���������ɶ��ٵ���Ŀ:" ;
	cin >>  count;
	for (i = 0;i<count;i++)
	{
		a = random();
		b = random();
		c = random();
		d = random();

		j = random();
		m = random();

		j = j % 4;
		m = m % 2;
		if (m == 0)  //m=0ʱ������������������ 
		{
			if (j == 0) k = '+';
			else if (j == 1) k = '-';
			else if (j == 2) k = '*';
			else
			{
				for (;;)
				{
					if (b == 0) b = random();
					else break;
				}
				k = '/';
			}

			cout << setw(3) << a << setw(2) << k << setw(3) << b << setw(3) << "= " << endl;
		}
		else  //m=1ʱ������������������� 
		{
			for (;;) //λ�ڷ�ĸ��c����Ϊ0 
			{
				if (c <= a)
				{
					c = random();
				}
				else break;
			}
			for (;;)  //λ�ڷ�ĸ��d����Ϊ0 
			{
				if (d <= b)
				{
					d = random();
				}
				else break;
			}
			if (j == 0) k = '+';
			else if (j == 1) k = '-';
			else if (j == 2) k = '*';
			else  //��bΪ0ʱ��b/dΪ����������bҲ����Ϊ0 
			{
				for (;;)
				{
					if (b == 0)
					{
						b = random();
					}
					else if (b <= d)
					{
						d = random();
					}
					else break;
				}
				k = '/';
			}

			cout << setw(3) << a << "/" << c << setw(2) << k << setw(3) << b << "/" << d << setw(3) << "= " << endl;
		}

	}
	return 0;
}