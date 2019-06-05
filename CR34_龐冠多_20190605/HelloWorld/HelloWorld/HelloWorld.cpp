// HelloWorld.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int sum(int a, int b){
	return a + b;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0;
	i = sum(i, 5);
	printf("Hello World");
	return 0;
}

