#include <stdio.h>
//积分赛第一场D
//#define M 5000
int gx (int x)
{
    int result = 0;
    int i;
    for(i=1;i<=x/2;i++)
    {
        if(x%i==0) result++;
    }
    if(x!=1) result++;
    return result;
}

int main()
{
    int n;
    scanf("%d",&n);
    int gn;
   // int flag[M] = {0};
    gn = gx(n);
    int i,j;
    int a,b;

    while(n--)
    {
        scanf("%d %d",&a,&b);
        int result = a;
        int max_gx = 0;
        for(i=a;i<=b;i++)
        {
        if(gx(i)>max_gx)
        {
            max_gx = gx(i);
            result = i;
        }

    }
    printf("%d\n",result);
    }
    return 0;
}
