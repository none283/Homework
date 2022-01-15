#include<stdio.h> 

int main()
{
    {

        int a[10];

        int n, K, L, t, f = 0;

        float v;

        printf("(LAB 17) 1.");
        printf("\nN: ");

        scanf_s("%i", &n);

        printf("\nK: ");

        scanf_s("%i", &K);

        printf("\nL: ");

        scanf_s("%i", &L);

        int i;

        for (i = 0; i < n; ++i) {

            printf("a[%i] : ", i + 1);

            scanf_s("%i", &a[i]);

        }

        for (i = K; i <= L; i++) {

            f = f + a[i];

            t = L - K + 1;

            v = f / t;

            printf("Average = %f", v);

        }
    }

    {

        int N, d, i = 0, l;

        int a[10000] = {};

        printf("\n\n2.");
        printf("\nEnter N= ");

        scanf_s("%d", &N);



        for (i = 0; i < N; i++) {

            printf("a[%d]=", i + 1);

            scanf_s("%d", &a[i]);

        }

        for (i = 0; i <= N - 3; i++) {

            d = a[i + 1] - a[i];

            l = a[i + 2] - a[i + 1];

            if (d != l) {

                printf("0");

                l = 0;

                break;

            }

        }

        if (l != 0) {

            printf("Addition error = %d", l);

        }



    }

    {

        int a[1000];

        int n;


        printf("\n\n3.");
        printf("\nn=");

        scanf_s("%d", &n);



        int i;

        for (i = 0; i < n; ++i) {

            printf("a[%d] : ", i + 1);

            scanf_s("%d", &a[i]);

        }



        int min = a[1];



        for (i = 15; i < n; i += 2) {

            if (a[i] < min) min = a[i];

        }



        printf("%d\n", min);





    }

    {

        int N, i, max, l;

        int a[1000];

        printf("\n\n4.");
        printf("\nEnter N=");

        scanf_s("%d", &N);



        for (i = 0; i < N; i++) {

            printf("a[%d]=", i + 1);

            scanf_s("%d", &a[i]);

        }

        for (i = 1; i < N - 1; i++) {

            if ((a[i] > a[i - 1]) && (a[i] > a[i + 1])) {

                max = a[i];

            }

            i++;

        }

        printf("Last local maximum number = %d", max);



    }

    {

        int N, i, j;

        int a[1000];

        printf("\n\n5.");
        printf("\nEnter N= ");

        scanf_s("%d", &N);



        for (i = 0; i < N; i++) {

            printf("a[%d]=", i);

            scanf_s("%d", &a[i]);

        }

        int BB = -1, CC = -1;
        for (i = 0; i < N - 1; i++) {

            for (j = 1; j < N; j++) {

                if ((a[i] == a[j]) && (i != j)) {

                    CC = i;

                    BB = j;

                }
            }

        }

        if (BB != -1 && CC != -1)
        {
            printf("%d and %d", CC, BB);
        }
        else printf("No two numbers are the same");


    }
}