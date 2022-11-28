#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void bubble_sort(int *ptr, int n)
{
    for (int pass = 0; pass < n - 1; pass++)
        for (int i = 0; i < n - 1 - pass; i++)
        {
            if (ptr[i] > ptr[i + 1])
            {
                int t;
                t = (ptr[i]);
                (ptr[i]) = (ptr[i + 1]);
                (ptr[i + 1]) = t;
            }
        }
}

int binary_search(int *ptr, int ele, int n)
{
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (ele == ptr[mid])
            return mid;
        else if (ele > ptr[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main()
{
    int n, ele;
    system("cls");
    printf("Enter the size : ");
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    bubble_sort(arr, n);
    printf("\n********* Sorted array is : *********\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nEnter the searching element : ");
    scanf("%d", &ele);
    int index = binary_search(arr, ele, n);
    printf("\n%d is present at index : %d", ele, index);

    getch();
    return 0;
}