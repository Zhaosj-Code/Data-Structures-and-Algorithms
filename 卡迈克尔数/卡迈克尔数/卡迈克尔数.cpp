#pragma warning(disable :4996)
#include<iostream>
#include<cstdio>
#include<ctime>
#include<math.h>
#include<memory.h>
using namespace std;

typedef struct node
{
	int num;
	node *next;
}node;

bool Carmichael(int k) //k����������
{
	/*
	�����˶���n���������ĸ�����
	1. n������
	2. n������3����ͬ��������
	3. nû������һ����������
	4. ��p��n��һ�������ӣ���p-1����n-1
	*/
	int amount1 = 0, N1, r, i;
	N1 = k - 1;
	for (;k % 3 == 0;) //�Ȱѿ���������3������
	{
		++amount1;
		if (amount1 >= 2)return false;
		k /= 3;
	}
	for (i = 0;k % 5 == 0;) //�Ȱѿ���������5������
	{
		++i;
		++amount1;
		if (i >= 2 || N1 & 2)return false;
		k /= 5;
	}
	r = 0; //��������Ƿ������ͬ��������
	for (;k > 6;)
	{
		//�ܿ�2��3��5�ı���������Ϊ30
		for (i = 7;;)
		{
			if (k % i)
			{
				i += 4;
				if (k % i)
				{
					i += 2;
					if (k % i)
					{
						i += 4;
						if (k % i)
						{
							i += 2;
							if (k % i)
							{
								i += 4;
								if (k % i)
								{
									i += 6;
									if (k % i)
									{
										i += 2;
										if (k % i)i += 6;
										else break;
									}
									else break;
								}
								else break;
							}
							else break;
						}
						else break;
					}
					else break;
				}
				else break;
			}
			else break;
		}
		if (N1 % (i - 1))return false;
		if (r == i)return false; //����Ƿ������ͬ��������
		r = i;  //��¼��ǰ�����ӣ�ʹ�ٴγ������������ʱ���Ա���⵽
		k /= i;
		++amount1;
	}
	if (amount1 < 3) //�ж��Ƿ������������������
	{
		return false;
	}
	return true;
}

int main()
{
	clock_t t1, t2;
	bool *notprime;
	int amount, n, i, j, t;
	node *p, *q;
	scanf("%d", &n);
	t1 = clock();
	if ((n & 1) == 0)--n;
	notprime = new bool[n];
	memset(notprime, 0, n*sizeof(bool));
	//notprime�ܿ����������Ч�ʣ����ǹؼ����ڣ�����������Ҫ���Ѵ�����ʱ��
	for (j = 4;j <= n;j += 2)notprime[j] = true;
	t = (int)sqrt(n + 0.5);
	for (i = 3;i < t;i += 2)if (!notprime[i])for (j = i*i;j <= n;j += i)notprime[j] = true;
	amount = 0;
	p = q = NULL;
	for (;n > 560;n -= 2)
	{
		if (notprime[n])
		{
			if (Carmichael(n))
			{
				++amount;
				q = new node;
				q->next = p;
				q->num = n;
				p = q;
			}
		}
	}
	printf("%d\n", amount);
	for (i = amount;i > 0;--i)
	{
		printf("%d\n", p->num);
		q = p;
		p = p->next;
		delete q;
	}
	delete[]notprime;
	t2 = clock();
	printf("time : %d\n", t2 - t1);
	return 0;
}
