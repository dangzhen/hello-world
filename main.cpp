#include <stdio.h>
//#include <stdlib.h>
#include <ctype.h>//为isspace()提供原型
#include <stdbool.h>
#define STOP '|' //定义结束标志


int main(void)
{
	char c;
	char prev;//读取的前一个字符
	long n_chars = 0L;//字符数
	int n_lines = 0;//行数
	int n_words = 0;//单词数
	bool inword = false;//字符在单词中,inward等于ture

	printf("请输入字符( | 用于结束输入):\n");
	prev = '\n';//识别完整的行

	while ((c = getchar()) != STOP)//当读取的字符不为结束字符时
	{
		n_chars++;//统计字符数

		if (c == '\n')
			n_lines++;//统计行

		if (!isspace(c) && !inword)
		{
			inword = true;//开始一个新单词;
			n_words++;//统计单词
		}
		if (isspace(c) && inword)
			inword = false;//打到单词的结尾
		prev = c;
	}

	if (prev != '\n')
		n_lines ++;
	printf("字母数目=%ld,单词数=%d,行数=%d,", n_chars, n_words, n_lines);
	return 0;
}