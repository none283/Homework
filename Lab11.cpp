#include <stdio.h>
#include <math.h>

int main() {
	{
		int A, B;
		scanf_s("%d", &A);
		scanf_s("%d", &B);
		if (A != B) {
			if (A > B) {
				B = A;
			}
			else {
				A = B;
			}
		}
		else {
			A = 0;
			B = 0;
		}
		printf("A = %d \nB = %d\n", A, B);
	}

	{
		int a, b, c, S;
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		scanf_s("%d", &c);

		if ((a > b) && (b > c)) {
			S = a + b;
			printf("Sum the two largest numbers S=%d\n", S);
		}
		else if ((b > c) && (c > a)) {
			S = b + c;
			printf("Sum the two largest numbers S=%d\n", S);
		}
		else if ((c > b) && (a > b)) {
			S = a + c;
			printf("Sum the two largest numbers S=%d\n", S);
		}

	}

	{
		int A, B, C, R1, R2;
		scanf_s("%d", &A);
		scanf_s("%d", &B);
		scanf_s("%d", &C);

		R1 = abs(B - A);
		R2 = abs(C - A);

		if (R1 < R2) {
			printf("Point B is located closer to A. The distance between them is %d\n", R1);
		}
		else {
			printf("Point C is located closer to A. The distance between them is %d\n", R2);
		}

	}

	{
		float x, y;
		printf("Enter x=");
		scanf_s("%f", &x);
		printf("Enter y=");
		scanf_s("%f", &y);

		if ((x > 0) && (y > 0)) {
			printf("First quarter\n");
		}
		else if ((x < 0) && (y > 0)) {
			printf("Second quarter\n");
		}
		else if ((x < 0) && (y < 0)) {
			printf("Third quarter\n");
		}
		else
			printf("Fourth quarter\n");

	}

	{
		int a;
		scanf_s("%d", &a);

		if (a > 0) {
			if (a % 2 == 0) { printf("Positive even number\n"); }
			else { printf("Positive odd number\n"); }
		}
		else {
			if (a < 0) {
				if (a % 2 == 0) { printf("Negative even number\n"); }
				else { printf("Negative odd number\n"); }
			}
			if (a == 0) { printf("Zero number\n"); }
		}

	}

	{
		int num;
		printf("num:");
		scanf_s("%i", &num);

		if ((num % 2) == 0) {
			printf("Even number \n");
		}
		else printf("Odd number \n");

		if (num > 99) {
			printf("Three-digit number \n");
		}
		else {
			if ((99 >= num) & (num > 9)) printf("Two-digit number \n");
			else if (num <= 9)  printf("Single digit \n");
		}

	}return 0;
}
