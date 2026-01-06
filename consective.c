#include<stdio.h>
int main()
{
    int ans=0;
    int cnt=0;
    int n;
    printf("enter the array size:");
    scanf("%d",&n);
    int num[n];
    printf("enter array elemnts(0 or 1):");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);   
    }

    for(int i=0;i<n;i++)
    {
        if(num[i]==1)
        {
            cnt++;
            if(cnt>ans)
            {
                ans=cnt;
            }
        }
        else
        {
            cnt=0;
        }
    }
    printf("Maximum consecutive 1s = %d\n", ans);
    return ans;
}