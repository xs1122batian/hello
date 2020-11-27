#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,s1,s2,t1,n,a;
    t1=0;
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        scanf("%d:%d:%d",&h1,&m1,&s1);
        t1=t1+h1*3600+m1*60+s1;
    }
    h2=t1/3600;
    m2=(t1-(h2*3600))/60;
    s2=t1-h2*3600-m2*60;
    printf("%02d:%02d:%02d",h2,m2,s2);
    return 0;
}
