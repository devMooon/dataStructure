
/* ���α׷� 6-1 ������ Ÿ�� ���� : pointer.c */
#include <stdio.h>
#include <malloc.h>
int main()
{
    int* pi;
    float* pf;
    pi = (int*)malloc(sizeof(int)); 	/* ������ ���� */
    pf = (float*)malloc(sizeof(float)); /* ������ ���� */
    *pi = 1024;
    *pf = (float)3.14;
    printf("an integer=%d,a float=%f\n", *pi, *pf);
    free(pi); /* ������ ��ȯ */
    free(pf);
}