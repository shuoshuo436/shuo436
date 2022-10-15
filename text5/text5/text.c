#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y, z;
	printf("请输入三个数字：\n");
	scanf("%d%d%d", &x, &y, &z);
	if (x < y)
	{
		if (x > z)
		{
			printf(" % d % d % d", z, x, y);
		}
		else if (x < z)
		{
            if (y > z)
			{
				printf(" % d % d % d", x, z, y);
			}
			if (y < z)
			{
				printf("%d%d%d", x, y, z);
			}
		}
	}
    else if(x>y)
	{
		if (y > z)
		{
			printf("%d%d%d", z, y, x);
		}
		else if (y < z)
		{
			if (x > z)
			{
				printf(" % d % d % d", y, z, x);
			}
			if (x < z)
			{
				printf("%d%d%d", y, x, z);
			}
		}
		
	}
}