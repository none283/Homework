#include <stdio.h> 

int main()
{
	{

		int a, b, i, v;

		printf("Lab 14\n 1.");
		printf("a=");

		scanf_s("%d", &a);

		printf("b=");

		scanf_s("%d", &b);



		for (i = a; i <= b; i++) {

			for (v = 1; v <= i; v++)

				printf("%d", i);

			printf("\n");

		}

	}


	{
		printf("\n2.");

		int a, b;

		printf("Enter a=");

		scanf_s("%d", &a);

		printf("Enter b=");

		scanf_s("%d", &b);



		int M = a;

		while (M >= 0) {

			M -= b;

		}

		printf("%d\n ", M + b);

	}

	{
		printf("\n3.");
		int n;

		printf("Enter n=");

		scanf_s("%d", &n);

		int k = 0, temp = 0;

		while (temp < n) {

			++k;

			temp = temp + k;

		}

		printf("K: %d\nSum:%d\n", k, temp);


	}

	{

		float p;
		printf("\n4.");
		printf("p=");

		scanf_s("%f", &p);

		int k = 0;

		float s = 1000;

		while (s <= 1100) {

			++k;

			s += s * p / 100;

		}

		printf("k: %d\ns=%f\n", k, s);


	}


	{

		int a, b;
		printf("\n5.");
		printf("Enter a=");

		scanf_s("%d", &a);

		printf("Enter b=");

		scanf_s("%d", &b);

		while ((a != 0) & (b != 0)) {

			if (a > b) a = a % b;

			else b = b % a;

		}

		printf("%d\n", a + b);

	}

	{

		int N, a = 0, b = 1, c = 1, K = 2;
		printf("\n6. Enter N =");
		scanf_s("%d", &N);

		while (c <= N) {

			a = b;

			b = c;

			c = b + a;

			K++;

		}

		printf("K = %d", K);

	}
}
