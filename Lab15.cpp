#include <stdio.h> 
#include<math.h> 
#define pi 3.14 

float RingS(float r1, float r2) {

	return pi * (r1 * r1 - r2 * r2);

}

void powerA3(float a, float* b)
{

	*b = pow(a, 3);

}

int Quarter(float x, float y) {

	if ((x > 0) && (y > 0)) { return 1; }

	if ((x < 0) && (y > 0)) { return 2; }

	if ((x < 0) && (y < 0)) { return 3; }

	if ((x > 0) && (y < 0)) { return 4; }

}

int SIGN(int x) {

	if (x < 0) {

		return -1;

	}

	if (x == 0) {

		
	}

	else

		return 1;

}

float Fact2(int n) {

	int F = 1;

	for (; n > 0; n = n - 2) F = F * n;

	return F;

}


int main()
{
	{

		int i;

		printf("(LAB 15) 1.");
		for (i = 1; i <= 5; ++i) {

			float a, b;			
			printf("\nA:");

			scanf_s("%f", &a);

			powerA3(a, &b);

			printf("B: %f\n", b);

		}
	}

	{

		float a, b;

		printf("\n2.");
		printf("\nA:");
		scanf_s("%f", &a);
		printf("\nB:");
		scanf_s("%f", &b);

		printf("Result=%d ", SIGN(a) + SIGN(b));

		

	}

	{

		int i;

		for (i = 1; i <= 3; ++i) {

			float r1, r2;

			printf("\n3.");
			printf("\nR1:");

			scanf_s("%f", &r1);

			printf("\nR2:");

			scanf_s("%f", &r2);

			printf("S:%f\n", RingS(r1, r2));

		}

		

	}

	{

		int i;

		float x, y;

		printf("\n4.");
		printf("\nEnter x:");

		scanf_s("%f", &x);

		printf("\nEnter y:");

		scanf_s("%f", &y);

		printf("Quarter=%d\n", Quarter(x, y));


		



	}

	{

		int i, n;

		printf("\n5.");
		printf("\nN:");

		scanf_s("%d", &n);
		printf("N!!: %f\n", Fact2(n));

		

	}
}




