#include <stdio.h>
int n, i, j;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = x;
}
void nhap(int arr[])
{
    for (i = 1; i <= n; i++)
    {
        printf("\n Nhap vao phan tu thu %d  ");
        scanf("%d", &arr[i]);
    }
}
void xuat(int arr[])
{
    for (i = 1; i <= n; i++)
    {
        printf("\n Phan tu thu %d la %d ", i, arr[i]);
    }
}
int main()
{
    int arr[20];
    int max;
    printf("\n Nhap so phan tu can sap xep  ");
    scanf("%d", &n);
    nhap(arr);
    for (i = 1; i < n; i++)
    {
        
        for (j = i; j <= 1; j++)
            if (arr[i + 1] < arr[j])
                swap(arr[i+1], arr[j]);
                else break;
    }
    xuat(arr);
}