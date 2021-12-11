#include <stdio.h>
#include <math.h>

int main()
{
	{
		int A, B;
		printf("Enter A=");
		scanf("%d", &A);
		printf("Enter B=");
		scanf("%d", &B);

		if ((A > 2) && (B <= 3)) {
			printf("The inequality is valid for given A and B");
		}
		else {
			printf("Inequality is not true for given A and B");
		}
		return 0;
	}

	{

		int A, B, C;
		scanf("%d", &A);
		scanf("%d", &B);
		scanf("%d", &C);
		if ((A < B) && (B < C)) {
			printf("Inequality is true");
		}
		else {
			printf("Inequality is false");
		}
		return 0;
	}

	{
		int a;
		scanf("%d", &a);
		if ((a >= 10) && (a <= 99) && (a % 2 == 0)) {
			printf("Condition is met");
		}
		else {
			printf("Condition is not met");
		}
		return 0;
	}

	{
		int a, b, c, d;
		scanf("%d", &a);
		b = a / 100;
		c = (a % 100) / 10;
		d = a % 10;
		if (((b > c) && (c > d)) || ((b < c) && (c < d))) {
			printf("Condition is met");
		}
		else {
			printf("Condition is not met");
		}
		return 0;
	}

	{

		int a, b, c, d, e;
		scanf("%d", &a);
		b = a / 1000;
		c = (a % 1000) / 100;
		d = (a % 100) / 10;
		e = a % 10;
		if ((b == e) && (c == d)) {
			printf("Condition is met");
		}
		else {
			printf("Condition is not met");
		}
		return 0;
	}

	{
		int a, b, c;
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
			printf("This is a right triangle");
		}
		else {
			printf("This is not a right triangle");
		}
		return 0;
	}

	{
		int a, b, c;
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		if ((a + b > c) && (a + c > b) && (b + c > a)) {
			printf("These are the three sides of a triangle");
		}
		else {
			printf("These are not the three sides of a triangle");
		}
		return 0;
	}
}
