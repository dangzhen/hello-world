#include <stdio.h>
//#include <stdlib.h>
#include <ctype.h>//Ϊisspace()�ṩԭ��
#include <stdbool.h>
#define STOP '|' //���������־


int main(void)
{
	char c;
	char prev;//��ȡ��ǰһ���ַ�
	long n_chars = 0L;//�ַ���
	int n_lines = 0;//����
	int n_words = 0;//������
	bool inword = false;//�ַ��ڵ�����,inward����ture

	printf("�������ַ�( | ���ڽ�������):\n");
	prev = '\n';//ʶ����������

	while ((c = getchar()) != STOP)//����ȡ���ַ���Ϊ�����ַ�ʱ
	{
		n_chars++;//ͳ���ַ���

		if (c == '\n')
			n_lines++;//ͳ����

		if (!isspace(c) && !inword)
		{
			inword = true;//��ʼһ���µ���;
			n_words++;//ͳ�Ƶ���
		}
		if (isspace(c) && inword)
			inword = false;//�򵽵��ʵĽ�β
		prev = c;
	}

	if (prev != '\n')
		n_lines ++;
	printf("��ĸ��Ŀ=%ld,������=%d,����=%d,", n_chars, n_words, n_lines);
	return 0;
}