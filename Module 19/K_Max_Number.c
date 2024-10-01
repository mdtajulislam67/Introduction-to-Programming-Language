#include<stdio.h>
#include<limits.h>
int fun(int n,int a[],int i)
{
    if(i==n)
    {
        return INT_MIN;
    }
    int max=fun(n,a,i+1);
    if(a[i] > max)
    {
        return a[i];
    }
    else{
        return max;
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=fun(n,a,0);
    printf("%d\n",max);

    return 0;
}