#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **x;
    //integer�� ������������ X�� ����
    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));
    // x�� �ּҸ� �����ϰ� �ֱ⶧���� 32bit�ӽ��̹Ƿ� 4bytes
    // �̱�������x�� �ּҸ� �����ϰ� �ֱ⶧���� 4bytes
    // ������������x�� integer���̰� �ι� referencing�ؼ� �� ���� ũ��� integer���� �����ϱ� ������ 4bytes�� ���´�. 
    printf("���¾�\n");
    printf("2017038096\n");
}