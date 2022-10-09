#include<stdio.h>
int main(void)
{
    int a[10] = { 10,19,2,41,32,38,7,15,60,18 };
    int i;
    int j;
    int k;
    int p;
    int t;
    int x;
    for (i = 0; i < 9; i++)
    {
        p = i;
        for (j = i + 1; j < 9; j++)
            if (a[j] < a[p])p = j;
        if (p != i) { t = a[i]; a[i] = a[p]; a[p] = t; }
        printf("%d\t", a[i]);
    }
    printf("\n请你输入的所想要输入的数字:\n");
    scanf_s("%d", &x);
    for (i = 0; i < 9; i++)
        if (x < a[i])
        {
            for (k = 8; k >= i; k--)a[k + 1] = a[k];
            break;
        }
    a[i] = x;
    for (i = 0; i <= 9; i++)
        printf("%d\t", a[i]);
    printf("\n");
   
}
