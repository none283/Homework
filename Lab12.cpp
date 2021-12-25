

#include <stdio.h>
#include <math.h>
#include<conio.h>

int main()
{
	{
		int day, month;
		const char* num1[]{ "Firstty" , "Secondty" , "Thirdty" , "Fourthty" , "Fifthty" , "Sixthty" , "seventhty" , "eighthty" ,
		"Ninethty" , "Tenth" , "Eleventh" , "twelfth" , "Thirteenth" , "Forteenth" , "Fifteenth" , "Sixteenth" ,
		"Seventeenth" , "Eightteenth" , "Nineteenth" , "Twentieth" , "Twenty first" , "Twenty second",
		"Twenty third " ,"Twenty fourth" , "Twenty fifth" , "Twenty sixth" , "Twenty seventh" , "Twenty eighth" , "Twenty nineth" ,"Thirty" , "Thirty fifth" };

		const char* num2[]{ " january" , "february" , " march" , "april" , "may" , "june" , "july" , " august" ,"september" , "october" , "november" , "december" };

		printf("1. Enter day:");
		scanf_s("%d", &day);
		printf("Enter month:");
		scanf_s("%d", &month);
		printf("%s %s\n", num1[day - 1], num2[month - 1]);
	}

	{
		char S;
		int N;
		printf("\n2.Enter symbol direction (e - east, w - west, s - south, n - north):");				
		scanf_s("%c", &S);
		scanf_s("%c", &S);
		printf("Enter the digital command for the robot(0 - continue moving, 1 - turn left, -1 - turn right): ");
		scanf_s("%i", &N);
		printf(" direction - ");
		switch (N) {
		case 1: switch (S) {
		case 'e': printf("north"); break;
		case 'w': printf("south"); break;
		case 's': printf("east"); break;
		case 'n': printf("west"); break;
		} break;
		case -1: switch (S) {
		case 'e': printf("south"); break;
		case 'w': printf("north"); break;
		case 's': printf("west"); break;
		case 'n': printf("east"); break;
		} break;
		case 0: switch (S) {
		case 'e': printf("east"); break;
		case 'w': printf("west"); break;
		case 's': printf("south"); break;
		case 'n': printf("north"); break;
		} break;
		}
	}

	{
		const char* exercise[]{ "ten" , "eleven" , "twelve" , "thirteen" , "fourteen" , "fifteen" ,"sixteen" , "seventeen" , "eighteen" ,"nineteen" , "twenty" , "twenty one" , "twenty-two" , "twenty-three" , "twenty four" , "twenty five" , "twenty-six" , "twenty-seven" , "twenty eight" , "twenty-nine" , "thirty" , "thirty one" , "thirty two" , "thirty three" , "thirty four" , "thirty five" , "thirty six" , "thirty seven" , "thirty eight" , "thirty nine" , "forty" };
		int d;
		printf("\n3. Enter number: ");
		scanf_s("%d", &d);

		printf("%s study assignment", exercise[d - 10]);
	}

	{

		int X, m, n, p, q;
		const char* a1[] = { "one hundred", "two hundred", "three hundred", "four hundred", "five hundred", "six hundred", "seven hundred", "eight hundred", "nine hundred" };
		const char* b1[] = { "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
		const char* d1[] = { "eleven", "twelve", "thirteen", "fourteen", "ten years", "sixteen", "seventeen", "eighteen", "nineteen" };
		const char* c1[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

		printf("\n4. Enter X:");
		scanf_s("%d", &X);
		m = X / 100;
		q = X % 100;
		n = q / 10;
		p = q % 10;
		printf("%s ", a1[m - 1]);
		if ((q == 11) || (q == 12) || (q == 13) || (q == 14) || (q == 15) || (q == 16) || (q == 17) || (q == 18) || (q == 19))
		{
			printf("%s ", d1[q - 11]);
		}
		else
		{
			if (n != 0)
			{
				printf("%s ", b1[n - 1]);
			}
			if (p != 0)
			{
				printf("%s ", c1[p - 1]);
			}
		}
	}

	{

		int n;
		printf("\n5. year:");
		scanf_s("%d", &n);

		printf("year:");

		switch ((n) % 10) {
		case 0:
		case 1:
			printf("white");
			break;
		case 2:
		case 3:
			printf("black");
			break;
		case 4:
		case 5:
			printf("green");
			break;
		case 6:
		case 7:
			printf("red");
			break;
		case 8:
		case 9:
			printf("yellow");
			break;
		}
		printf(" ");

		switch ((n + 8) % 12) {
		case 0:
			printf("mouse\n");
			break;
		case 1:
			printf("cows\n");
			break;
		case 2:
			printf("tiger\n");
			break;
		case 3:
			printf("rabbit\n");
			break;
		case 4:
			printf("dragon\n");
			break;
		case 5:
			printf("snake\n");
			break;
		case 6:
			printf("horse\n");
			break;
		case 7:
			printf("sheep\n");
			break;
		case 8:
			printf("monkey\n");
			break;
		case 9:
			printf("cock\n");
			break;
		case 10:
			printf("dog\n");
			break;
		case 11:
			printf("pig\n");
			break;
		}
	}
	return 0;
}