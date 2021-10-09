
/* 프로그램 6-1 포인터 타입 실험 : pointer.c */
#include <stdio.h>
#include <malloc.h>
int main()
{
    int* pi;
    float* pf;
    pi = (int*)malloc(sizeof(int)); 	/* 기억장소 배정 */
    pf = (float*)malloc(sizeof(float)); /* 기억장소 배정 */
    *pi = 1024;
    *pf = (float)3.14;
    printf("an integer=%d,a float=%f\n", *pi, *pf);
    free(pi); /* 기억장소 반환 */
    free(pf);
}