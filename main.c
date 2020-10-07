// ex19-8.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>

void input_data(int *, int *);
double average(int, int);

int main()
{
	int a, b;
	double avg;

	input_data(&a, &b);
	avg = average(a, b);
	printf("%d와 %d의 평균: %.1lf\n", a, b, avg);
    return 0;
}

