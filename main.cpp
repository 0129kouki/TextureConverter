#include<cstdio>
#include<cstdlib>

int main(int argc, char* argv[])
{
	//argcの数だけ繰り返す
	for (int i = 0; i < argc; i++)
	{
		//文字列argvの1番を表示
		printf(argv[i]);
		//改行
		printf("\n");
	}

	//printf("Hello,World!\n");

	system("pause");
	return 0;
}