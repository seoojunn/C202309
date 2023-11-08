#include<stdio.h>

//더하기 함수
void summation(double* a, double* b, double* result) {
	*result = *a + *b;
}

// 빼기 함수
void subtraction(double* a, double* b, double* result) {
	*result = *a - *b;
}

// 곱하기 함수
void multification(double* a, double* b, double* result) {
	*result = *a * *b;
}

// 나누기 함수
void division(double* a, double* b, double* result) {
	*result = *a / *b;
}


int main()
{
	double a = 2, b = 3;
	double result;
	summation(&a, &b, &result);
	printf("%.0lf + %.0lf = %.2lf \n", a, b, result);

	subtraction(&a, &b, &result);
	printf("%.0lf - %.0lf = %.2lf \n", a, b, result);

	multification(&a, &b, &result);
	printf("%.0lf * %.0lf = %.2lf \n", a, b, result);

	division(&a, &b, &result);
	printf("%.0lf / %.0lf = %.2lf \n", a, b, result);
	return 0;
}