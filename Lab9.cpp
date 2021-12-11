#include <stdio.h>
#include <math.h>

int main() {
	{
		int N, s;
		scanf_s("%d", &N);
		s = N % 60;
		printf("The number of seconds has passed since the last minute = %d\n", s);
	}

	{
		int K, d;
		scanf_s("%d", &K);
		d = K % 7;
		if (d == 0) {
			printf("Sunday\n");
		}
		if (d == 1) {
			printf("Monday\n");
		}
		if (d == 2) {
			printf("Tuesday\n");
		}
		if (d == 3) {
			printf("Wednesday\n");
		}
		if (d == 4) {
			printf("Thursday\n");
		}
		if (d == 5) {
			printf("Friday\n");
		}
		if (d == 6) {
			printf("Saturday\n");
		}

	}


	{
		int N, K, d;
		scanf_s("%d", &K);
		scanf_s("%d", &N);
		d = (K + N - 2) % 7 + 1;
		printf("%d\n", d);

	}


	{
		int A, B, C, S1, S2, a, b;
		scanf_s("%d", &A);
		scanf_s("%d", &B);
		scanf_s("%d", &C);
		S1 = A * B;
		S2 = C * C;
		a = S1 / S2;
		b = S1 % S2;
		printf("The number of cubes that will fit in the rectangle = %d \nRemaining area = %d\n", a, b);
	}

	{
		int a, b;
		scanf_s("%d", &a);
		b = (a - 1) / 100 + 1;
		printf("Century number = %d\n", b);
	}

	return 0;
}