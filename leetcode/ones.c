#include<stdio.h>
int main()
{
    int ans=0,cnt=0;
    int n;
    for(int i=0;i<n;i++)
    {
        int num[n];
        if(num[i]==1)
        {
            cnt=1;
            for(int j=i+1;j<n;j++)
            {
                if(num[j]==1)
                {
                    cnt++;
                }
                else{
                    i=j;
                }
            }
            ans=max(cnt,ans);
        }
    }
    return ans;
}