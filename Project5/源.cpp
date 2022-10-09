#include<stdio.h>
int main()
{
	int A[2][2] = { {1,3},{2,5} };
	int B[2][2] = { {2,2},{4,1} };
	int C[2][2] ;
	int a, b,c ,d;
	printf("A×B的结果为：\n");
	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 2; b++)
		{
			c = 0;
			for (d = 0; d < 2; d++)
			{
				c += A[a][d] * B[d][b];
			}
			C[a][b] = c;
			printf("%3d", C[a][b]);
		}
		printf("\n");
	}
	printf("A·B的结果是：\n");
	int o,u;
	for (o = 0; o < 2; o++)
	{
		for (u = 0; u < 2; u++)
		{
			printf("%4d", A[o][u] * B[o][u]);
		}
		printf("\n");

	}
	return 0;
}