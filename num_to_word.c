#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fun_1_9(int x)
{
    switch (x)
    {
    case 1:
        printf("ONE ");
        break;
    case 2:
        printf("TWO ");
        break;
    case 3:
        printf("THREE ");
        break;
    case 4:
        printf("FOUR ");
        break;
    case 5:
        printf("FIVE ");
        break;
    case 6:
        printf("SIX ");
        break;
    case 7:
        printf("SEVEN ");
        break;
    case 8:
        printf("EIGHT ");
        break;
    case 9:
        printf("NINE ");
        break;
    }
}
void fun_10_90(int x)
{
    switch (x)
    {
    case 1:
        printf("TEN ");
        break;
    case 2:
        printf("TWENTY ");
        break;
    case 3:
        printf("THIRTY ");
        break;
    case 4:
        printf("FORTY ");
        break;
    case 5:
        printf("FIFTY ");
        break;
    case 6:
        printf("SIXTY ");
        break;
    case 7:
        printf("SEVENTY ");
        break;
    case 8:
        printf("EIGHTY ");
        break;
    case 9:
        printf("NINETY ");
    }
}
void fun_11_19(int x)
{
    switch (x)
    {
    case 1:
        printf("ELEVEN ");
        break;
    case 2:
        printf("TWELVE ");
        break;
    case 3:
        printf("THIRTEEN ");
        break;
    case 4:
        printf("FOURTEEN ");
        break;
    case 5:
        printf("FIFTEEN ");
        break;
    case 6:
        printf("SIXTEEN ");
        break;
    case 7:
        printf("SEVENTEEN ");
        break;
    case 8:
        printf("EIGHTEEN ");
        break;
    case 9:
        printf("NINETEEN ");
    }
}
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, i = 0, arr[7], r, ch, arr6, arr4;
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        scanf("%d", &n);
        while (n != 0)
        {
            r = n % 10;
            arr[i] = r;
            i++;
            n = n / 10;
        }
        // for (j = i - 1; j > -1; j--)
        // {
        //     printf("%d ", arr[j]);
        // }
        if (arr[6] != 0)
        {
            arr6 = 1;
            if (arr[6] == 1 && arr[5] != 0)
            {
                fun_11_19(arr[5]);
            }
            else if (arr[6] >= 1 && arr[5] == 0)
            {
                fun_10_90(arr[6]);
            }
            else if (arr[6] != 1 && arr[5] != 0)
            {
                fun_10_90(arr[6]);

                fun_1_9(arr[5]);
            }
        }
        if (arr[5] != 0 && arr6 != 1)
        {
            fun_1_9(arr[5]);
        }
        if (i > 5 && arr[5] != 0)
        {
            printf("LAKH ");
        }
        if (arr[4] != 0)
        {
            arr4 = 1;
            if (arr[4] == 1 && arr[3] != 0)
            {
                fun_11_19(arr[3]);
            }
            else if (arr[4] >= 1 && arr[3] == 0)
            {
                fun_10_90(arr[4]);
            }
            else if (arr[4] != 1 && arr[3] != 0)
            {
                fun_10_90(arr[4]);

                fun_1_9(arr[3]);
            }
        }
        if (arr[3] != 0 && arr4 != 1)
        {
            fun_1_9(arr[3]);
        }
        if (i > 3 && arr[3] != 0)
        {
            printf("THOUSAND ");
        }
        if (arr[2] != 0)
        {
            fun_1_9(arr[2]);
        }
        if (i > 2 && arr[2] != 0)
        {
            printf("HUNDRED ");
        }
        if (arr[1] == 0 && arr[0] != 0)
        {
            fun_1_9(arr[0]);
        }
        if (arr[1] == 1 && arr[0] != 0)
        {
            fun_11_19(arr[0]);
        }
        if (arr[1] != 0 && arr[0] != 0)
        {
            fun_10_90(arr[1]);
            fun_1_9(arr[0]);
        }
        break;
    case 2:
        scanf("%d", &n);
        while (n != 0)
        {
            r = n % 10;
            arr[i] = r;
            i++;
            n = n / 10;
        }
        // for (j = i - 1; j > -1; j--)
        // {
        //     printf("%d ", arr[j]);
        // }
        if (arr[6] != 0)
        {
            fun_1_9(arr[6]);
        }
        if (i > 6 )
        {

            printf("MILLION ");
        }
        if (arr[5] != 0)
        {
            fun_1_9(arr[5]);
        }
        if (i > 5)
        {

            printf("HUNDRED ");
        }
        if (arr[4] == 0 && arr[3] != 0)
        {
            fun_1_9(arr[3]);
        }
        if (arr[4] == 1 && arr[3] != 0)
        {
            fun_11_19(arr[3]);
        }
        if (arr[4] != 0 && arr[3] != 0)
        {
            fun_10_90(arr[4]);
            fun_1_9(arr[3]);
        }
        if (arr[4] != 0 && arr[3] == 0)
        {
            fun_10_90(arr[4]);
        }
        if (i > 3)
        {
            printf("THOUSAND ");
        }
        if (arr[2] != 0)
        {
            fun_1_9(arr[2]);
        }
        if (i > 2&&arr[2]!=0)
        {
            printf("HUNDRED ");
        }
        if (arr[1] == 0 && arr[0] != 0)
        {
            fun_1_9(arr[0]);
        }
        if (arr[1] == 1 && arr[0] != 0)
        {
            fun_11_19(arr[0]);
        }
        if (arr[1] != 1 &&arr[1] != 0 && arr[0] != 0)
        {
            fun_10_90(arr[1]);
            fun_1_9(arr[0]);
        }
        break;
    }
    return 0;
}