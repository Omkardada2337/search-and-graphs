#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int arr[100], n, key, index, i, j;
    system("cls");

    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("\nEnter the elements : ");
    for (j = 0; j < n; j++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the key : ");
    scanf("%d", &key);

    for ( i = 0; i < n; i++)
        if (arr[i] == key)
            break;
    if (i == n)
        printf("\nElement not found");
    else
        printf("\nElement found");

    getch();
    return 0;
}