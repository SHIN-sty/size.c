#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **x;
    //integer형 더블형포인터 X를 선언
    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));
    // x는 주소를 저장하고 있기때문에 32bit머신이므로 4bytes
    // 싱글포인터x도 주소를 저장하고 있기때문에 4bytes
    // 더블형포인터x는 integer형이고 두번 referencing해서 간 곳의 크기는 integer값을 저장하기 때문에 4bytes가 나온다. 
    printf("신태양\n");
    printf("2017038096\n");
}