#include <stdio.h>
void nhap(int arr[], int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("\n Nhap phan tu thu %d  ", i);
        scanf("%d", &arr[i]);
    }
}
void xuat(int arr[], int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("\n Phan tu thu %d la %d  ", i, arr[i]);
    }
}
void swap(int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}
int main()
{
    int i, j, temp, n, max;
    int arr[100];
    printf("\n Nhap vao so phan tu cua mang  ");
    scanf("%d", &n);
    nhap(arr, n);
    for (i = 1; i <= n; i++)
    {
        max = arr[i];
        for (j = i+1; j <= n; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
                temp = j;
            }
        }
        // arr[temp] = arr[j];
        // arr[j] = max;
        swap(arr[temp], arr[i]);
    }   
    xuat(arr, n);
}