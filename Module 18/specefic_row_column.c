#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int row;
    scanf("%d", &row);
    for (int i = 0; i < c; i++)
    {
        printf("%d ", arr[row][i]);
    }
    return 0;
}
// Abdullah all MOjahid
/*
#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);   // 2D এরে ইনপুট নেওয়া হচ্ছে। 
        } 
    } 
    int r;
    scanf("%d",&r);     // যেই রো প্রিন্ট করতে চাই তা ইনপুট নেওয়া হচ্ছে। 
    for(int i=0;i<col;i++)     // কলামের উপর লুপ চালানো হচ্ছে। 
    {
        printf("%d ",a[r][i]);   // ইনপুট নেওয়া রো নাম্বার ফিক্সড রেখে কলামের মধ্যে লুপের ভেরিয়েবলটি দিয়ে দেওয়া হচ্ছে। 
    }
    int c;
    scanf("%d",&c);      // যেই কলাম প্রিন্ট করতে চাই তা ইনপুট নেওয়া হচ্ছে। 
    for(int i=0;i<row;i++)     // রো এর উপর লুপ চালানো হচ্ছে। 
    {
        printf("%d ",a[i][c]);  // ইনপুট নেওয়া কলাম নাম্বার ফিক্সড রেখে রো এর মধ্যে লুপের ভেরিয়েবলটি দিয়ে দেওয়া হচ্ছে। 
    }
    return 0;
}
*/