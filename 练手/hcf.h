
void m()
{
    int m,n,t,r;
    scanf("%d%d",&m,&n);
    if(m<n) //���mС��n�ͽ������ǵ�ֵ���Ա�֤m��Զ����n
    {
        t=m;
        m=n;
        n=t;
    }
    do
    {
        r=m%n;
        m=n;
        n=r;
    }while(r!=0);
    printf("%d\n",m);
}


int n()
{
    int n;
    printf("������һ����n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");

        }
        printf("\n");
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*(n-i)-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("end\n");
    return 0;
}


int a_add_b()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",a+b);
    return 0;
}

