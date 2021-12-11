#include <stdio.h>
#include <math.h>
int main() {
	{
		int N, s;
		scanf("%d", &N);
		s = N % 60;
		printf("The number of seconds has passed since the last minute = %d", s);
		return 0;
	}

	{
		int K, d;
		scanf("%d", &K);
		d = K % 7;
		if (d == 0) {
			printf("Sunday");
		}
		if (d == 1) {
			printf("Monday");
		}
		if (d == 2) {
			printf("Tuesday");
		}
		if (d == 3) {
			printf("Wednesday");
		}
		if (d == 4) {
			printf("Thursday");
		}
		if (d == 5) {
			printf("Friday");
		}
		if (d == 6) {
			printf("Saturday");
		}
		return 0;
	}


	{
		int N, K, d;
		scanf("%d", &K);
		scanf("%d", &N);
		d = (K + N - 2) % 7 + 1;
		printf("%d", d);
		return 0;
	}


	{
		int A, B, C, S1, S2, a, b;
		scanf("%d", &A);
		scanf("%d", &B);
		scanf("%d", &C);
		S1 = A * B;
		S2 = C * C;
		a = S1 / S2;
		b = S1 % S2;
		printf("The number of cubes that will fit in the rectangle = %d \nRemaining area = %d", a, b);
		return 0;
	}

	{
		int a, b;
		scanf("%d", &a);
		b = (a - 1) / 100 + 1;
		printf("Century number = %d", b);
		return 0;
	}
}

