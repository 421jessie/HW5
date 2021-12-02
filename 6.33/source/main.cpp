#include<stdio.h>
#include<stdlib.h>

int binarySearch(int a[], int n, int key);

int main() {
    int i, b, c;
    int a[8] = { -32, 12, 16, 24, 36, 45, 59, 98 };
    for (i = 0; i < 8; i++)
        printf("%d\t", a[i]);
    printf("\n��J�n��M���Ʀr:");
    scanf_s("%d", &b);
    c = binarySearch(a, 8, b);
    if (-1 == c)
        printf("��M���� \n");
    else
        printf("��M���\ \n");
    return 0;
}

int binarySearch(int a[], int n, int key) 
{
    int low = 0;
    int high = n - 1;
    while (low <= high) 
    {
        int mid = (low + high) / 2;
        int midVal = a[mid];
        if (midVal < key)
            low = mid + 1;
        else if (midVal > key)
            high = mid - 1;
        else
            return mid;
    }
    return -1;
}