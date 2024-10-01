#include<stdio.h>
int fun(char s[],int i)
{
if(s[i]=='\0')
{
    return 0;
}
int ans=fun(s,i+1);
if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I'
|| s[i]=='i' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u')
{
   return ans+1;
}
else{
    return ans;
}
}
int main()
{
    char s[210];
    fgets(s,210,stdin);
    int count=fun(s,0);
    printf("%d\n",count);
    return 0;
}