#include <stdio.h>
int i, n;
void nhap(int arr[])
{
    printf("%d",n);
    for (i = 1; i <= n; i++)
    {
        printf("\n Nhap vao phan tu thu  %d  ", i);
        scanf("%d", &arr[i]);
    }
}
void xuat(int arr[])
{
    for (i = 1; i <= n; i++)
    {
        printf("\n Phan tu thu %d la  %d ", i, arr[i]);
    }
}
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int arr[20];
    printf("Nhap so phan tu cua mang  ");
    scanf ("%d", &n);
    nhap(arr);
    int j;
    for (i=1; i<=n; i++) {
        for (j=1; j<= n-i; j++) {
            if (arr[j] < arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
    xuat(arr);
}