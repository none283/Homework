#include <stdio.h>
#include <math.h>

int main()
{
	{
		int A, B;
		printf("Enter A=\n");
		scanf_s("%d", &A);
		printf("Enter B=\n");
		scanf_s("%d", &B);

		if ((A > 2) && (B <= 3)) {
			printf("The inequality is valid for given A and B\n");
		}
		else {
			printf("Inequality is not true for given A and B\n");
		}
		
	}

	{

		int A, B, C;
		scanf_s("%d", &A);
		scanf_s("%d", &B);
		scanf_s("%d", &C);
		if ((A < B) && (B < C)) {
			printf("Inequality is true\n");
		}
		else {
			printf("Inequality is false\n");
		}
		
	}

	{
		int a;
		scanf_s("%d", &a);
		if ((a >= 10) && (a <= 99) && (a % 2 == 0)) {
			printf("Condition is met\n");
		}
		else {
			printf("Condition is not met\n");
		}
		
	}

	{
		int a, b, c, d;
		scanf_s("%d", &a);
		b = a / 100;
		c = (a % 100) / 10;
		d = a % 10;
		if (((b > c) && (c > d)) || ((b < c) && (c < d))) {
			printf("Condition is met\n");
		}
		else {
			printf("Condition is not met\n");
		}
		
	}

	{

		int a, b, c, d, e;
		scanf_s("%d", &a);
		b = a / 1000;
		c = (a % 1000) / 100;
		d = (a % 100) / 10;
		e = a % 10;
		if ((b == e) && (c == d)) {
			printf("Condition is met\n");
		}
		else {
			printf("Condition is not met\n");
		}
		
	}

	{
		int a, b, c;
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		scanf_s("%d", &c);
		if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
			printf("This is a right triangle\n");
		}
		else {
			printf("This is not a right triangle\n");
		}
		
	}

	{
		int a, b, c;
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		scanf_s("%d", &c);
		if ((a + b > c) && (a + c > b) && (b + c > a)) {
			printf("These are the three sides of a triangle\n");
		}
		else {
			printf("These are not the three sides of a triangle\n");
		}
		
	}
}
