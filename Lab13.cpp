
#include<stdio.h> 
#include<math.h> 
#include<string>
#include <iostream>
using namespace std;

int main()
{
	{
		float i, c;

		printf("LAB 13\n");
		printf("1.");
		printf("Enter c=");

		scanf_s("%f", &c);

		for (i = 1; i <= 10; i++)

		{

			printf("result = %f\n", i * c / 10);

		}
	}

	{

		float D = 1, i, N;

		printf("2.");
		printf("Enter N=");

		scanf_s("%f", &N);

		for (i = 1; i <= N; i++) {

			D = D * (1 + i / 10);

			printf("D=%f\n", D);

		}

	}
	{

		int n, A = 0, i;

		printf("3.");
		printf("n=");

		scanf_s("%d", &n);

		string s = "";
		string ketqua = "";

		for (i = 1; i <= (2 * n - 1); i += 2) {			
			A += i;

			if (i == 1)
			{
				s = "1";
			}
			else
			{
				s += " + " + to_string(i);
				ketqua = " = " + to_string(A);
			}			

			cout << s << ketqua << endl;
		}		

	}


	{

		float A, sum{}, N, i, T;

		printf("4.");
		printf("Enter A=");

		scanf_s("%f", &A);

		printf("Enter N=");

		scanf_s("%f", &N);



		for (i = 0; i <= N; i++) {



			T = pow(A, i);

			sum = sum + T;

		}

		printf("result=%f", sum);
	}

	{

		float A, sum{}, N, i, T;
		printf("\n5.");
		printf("Enter A=");

		scanf_s("%f", &A);

		printf("Enter N=");

		scanf_s("%f", &N);



		for (i = 0; i <= N; i++) {



			T = pow(A, i) * pow(-1, i);

			sum = sum + T;

		}
		printf("result=%f", sum);
	}
}