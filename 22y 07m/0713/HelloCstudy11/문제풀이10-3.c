#include <stdio.h>
int main()
{
    int t1 = 0, t2 = 1, abc = 0, n;
    printf("�� ��° ����� ��?: ");
    scanf_s("%d", &n);

    printf("�Ǻ���ġ ����: %d, ", t2);
    abc = t1 + t2;

    int j = 2;
    while (j <= n)
    {
        printf("%d, ", abc);
        t1 = t2;
        t2 = abc;
        abc = t1 + t2;
        j++;
    }
    return 0;
}
