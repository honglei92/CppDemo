#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/*
快速排序算法学习
*/

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int arr[], int start, int end)
{
    int arrBase, arrMiddle;

    int tempStart = start,
        tempEnd = end;

    //对于这种递归的函数，内部必须要有一个函数返回的条件
    if (tempStart >= tempEnd)
        return;

    //拷贝一个基准值作为后面比较的参数
    arrBase = arr[start];
    while (start < end)
    {
        while (start < end && arr[end] > arrBase)
            end--;
        if (start < end)
        {
            swap(&arr[start], &arr[end]);
            start++;
        }

        while (start < end && arr[start] < arrBase)
            start++;
        if (start < end)
        {
            swap(&arr[start], &arr[end]);
            end--;
        }
    }
    arr[start] = arrBase;
    arrMiddle = start;

    //分治方法进行递归
    quickSort(arr, tempStart, arrMiddle - 1);
    quickSort(arr, arrMiddle + 1, tempEnd);
}

int main()
{
    //todo c++代码文件是从上往下执行
    int arr[] = {12, 20, 5, 16, 15, 1, 30, 45};
    int arrLength = sizeof(arr) / sizeof(int);
    quickSort(arr, 0, arrLength - 1);

    for (int i = 0; i < arrLength; i++)
        printf("%5d", arr[i]);
    return 0;
}