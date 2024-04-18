#include <stdio.h>

int main()
{
    int loop, line, num, x, max, min, maxi, mini;
    double sum, avg;
    scanf("%d%d", &loop,&line);
    printf("The total number of test cases is %d.\n", loop);
    printf("Print out %d integers per line from the input list.\n", line);
    for (int j = 1; j <= loop; j++)
    {
        if (j > 1)
            printf("\n");
        //反正就是第一個Case後面都會換行就對了。
        scanf("%d", &num);
        printf("Case #%d: the number of integers in the input list is %d.\n", j, num);
        for (int i = 1; i <= num; ++i)
        {
            scanf("%d", &x);

            if (i == 1)
            {
                max = min = sum = x;
                maxi = mini = i;
            }
            else
            {
                if (x > max)
                    max = x, maxi = i;
                if (x < min)
                    min = x, mini = i;
                sum += x;
            }

            // (1)以上是最大最小的判別式。(2)sum在這區運算的。(3)其中必須把每個Case的max min 還有sum歸回一個值(通常都是歸零，但輸入值有負數判別式會錯誤，所以寫成=X)

            if (i > 1)
            {
                if (i % line == 1)
                    printf("\n");
                else
                    printf(", ");
            }
            // 這個要先寫，因為是判斷每次X的符號要怎麼接。(第一個先換行)
            if (i % line == 1)
            {
                printf("[%02d:", i);
                if (i + (line - 1) > num)
                    printf("%02d]", num);
                else
                    printf("%02d]", i + (line - 1));
            }
            // (1)這邊是中括號的判別式。(2)line-1是每行最大值。

            printf("%12d", x);
            // 很普通的print X.
        }
        avg = sum / num;
        printf("\n");
        printf("The maximum value of the list is %d and the index of maximum value is %d.\n", max, maxi);
        printf("The minimum value of the list is %d and the index of minimum value is %d.\n", min, mini);
        printf("The sum value of the list is %.0f.\n", sum);
        printf("The mean value of the list is %.2f.\n", avg);
    }
}