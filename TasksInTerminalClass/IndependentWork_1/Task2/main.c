#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <locale.h>
#include <time.h>
#define R 5

int main()
{
    int n, i, d, k, Bufer;
    int a[R];

    setlocale(LC_ALL, "Rus");
    srand(time(0));
    
    printf("�����: \n");
    scanf_s("%d", &n);
    printf("������ a\n");
    for (i = 0; i < R; i++)
    {

        a[i] = rand() % 200 - 100;;
        printf("%d ", a[i]);
    }
    printf("������������ �������: ", a[i]);
    for (i = R - 1; i > -1; i--)
    {
        printf("%d  ", a[i]);

    }
   
    for (d = 0; d < n; d++)
    {
        Bufer = a[R - 1];
        for (i = R - 1; i > 0; i--)
            a[i] = a[i - 1];
        a[0] = Bufer;
        
    }
    
    printf("\n\n����� ������:\n");
    for (i = 0; i < R; i++)
        printf("%d ", a[i]);
    return 0;

}