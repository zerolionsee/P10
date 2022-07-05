/* #include <string.h>
#include <stdio.h>
int main()
{
    char str1[] = "bit";
    char str2[] = "##########";
    strcpy(str2, str1);
    printf("%s\n", str2);
    return 0;
} */
/* #include <string.h>
#include <stdio.h>
int main()
{
    char str1[] = "hello,world";
    memset(str1, '*', 4);
    printf("%s\n", str1);
    return 0;
} */

// www.cplusplus.com
// en/zh.cppreference.com

//传值调用
/* void swap(int x,int y)
{
    int temp=0;
    temp = x;
    x = y;
    y = temp;
}
#include <stdio.h>
int main()
{
    int a = 20;
    int b = 10;
    swap(a, b);
    printf("a=%d\nb=%d\n",a,b);
    return 0;
} */
//传址调用
/* void swap(int* pa,int* pb)
{
    int temp=0;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
#include <stdio.h>
int main()
{
    int a = 20;
    int b = 10;
    swap(&a, &b);
    printf("a=%d\nb=%d\n",a,b);
    return 0;
} */

//判断素数
/*
#include <math.h>
int is_prime(int n)
{
    int i = 0;
    // for (i = 2; i < n; i++)
    // for (i = 2; i <=sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
        // else
        //     return 0;
    }
    return 1;
}

#include <stdio.h>
int main()
{
    int i = 0;
    for (i = 100; i <= 200; i++)
    {
        if (is_prime(i) == 1)
            printf("%d\t", i);
    }
} */

//闰年
/* #include <stdio.h>
#include <math.h>
int main()
{
    int year = 0;
    int count=0;
    for (year = 1000; year <= 2000; year++)
    {
        if ((year % 4 == 0) && (year % 100 != 0))
            {printf("%d\t", year);
            count++;}
        else if (year % 400 == 0)
            {printf("%d\t", year);
            count++;}
    }
    printf("\n%d", count);
} */

/* int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

#include <stdio.h>
int main()
{
    int year = 0;
    int count = 0;
    for (year = 1000; year <= 2000; year++)
    {
        if (is_leap_year(year) == 1)
        {
            printf("%d\t", year);
            count++;
        }
    }
            printf("\n%d", count);
}
 */

//二分查找
#include <string.h>
int binary_search(int arr[], int k,int sz)
{
    int left = 0;
    int right = sz - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] > k)
        {
            right = mid;
        }
        else if (arr[mid] < k)
        {
            left = mid;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int k = 7;
    int ret = binary_search(arr, k, sz);
    if (ret == -1)
        printf("找不到\n");
    else
        printf("找到了\n");
}
