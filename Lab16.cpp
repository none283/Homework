
#include <stdio.h> 

int main()
{
    {

        int a[1000];

        int n, i = 1, i2 = 1;


        printf("(lab 16) 1.");
        printf("\nn: ");

        scanf_s("%i", &n);

        for (i = 0; i < n; ++i, i2 += 2) a[i] = i2;

        for (i = 0; i < n; ++i) printf("%i : %i\n", i, a[i]);

        

    }

    {  
    int aaa[100];

    int n, a, d, i, u;

    printf("\n\n2.");
    printf("\nenter n=");

    scanf_s("%d", &n);

    printf("\nenter a[0]=");

    scanf_s("%d", &aaa[0]);

    printf("\nenter d=");

    scanf_s("%d", &d);

    u = 1;

    for (i = 1; i < n; i++) {

        u = u * d;

        aaa[i] = u * aaa[0];

    }

    for (i = 0; i < n; i++)

        printf("%d : %d\n", i, aaa[i]);

    }

    {  int i;

    int aaa[100];

    int n, a, b;

    printf("\n\n3.");
    printf("\nenter n=");

    scanf_s("%d", &n);

    printf("\nenter a=");

    scanf_s("%d", &a);

    printf("\nenter b=");

    scanf_s("%d", &b);

    aaa[0] = a;

    aaa[1] = b;

    for (i = 2; i < n; i++) {

        aaa[i] = aaa[i - 1] + aaa[i - 2];

    }

    for (i = 0; i < n; i++)

        printf("%d: %d\n", i, aaa[i]);



    



    }

    {

        int a[1000];

        int n, i;

        printf("\n\n4.");
        printf("\nenter n=");

        scanf_s("%d", &n);

        for (i = 0; i < n; i++) {

            printf("a[%d]=", i + 1);

            scanf_s("%d", &a[i]);



        }



        for (i = 0; i < n; i++) {

            printf("%d, ", a[i]);

            printf("%d, ", a[n - 1 - i]);

        }

        

    }

    {

        int a[1000];

        int n, i;

        printf("\n\n5.");
        printf("\nenter n= ");

        scanf_s("%d", &n);



        for (i = 0; i < n; ++i) {

            printf("a[%d] : ", i + 1);

            scanf_s("%d", &a[i]);

        }



        for (i = 0; i < n; i += 2)

            printf("%d\n", a[i]);

        for (i = n - (n % 2) - 1; i >= 1; i -= 2)

            printf("%d\n", a[i]);
	}
}