#include<cstdio>
#include<iostream>
using namespace std;
/*
    ��Ҫ����n�죬m�������ڱ�����
    i�챱����ο�����p[i]
    q���н�ͨ���ƣ���Ҳ����ȥ�����ŵ��ǹ��Ƶ����ڡ�

*/
int main()
{
    int n,m,q;//n��ʾ����n�죬m��ʾm���ڱ���
    while(cin>>n>>m){
    int p[1000],a[1000];//p[i]��ʾ��i�챱����ÿ�������a[i]��ʾ��a[i]�콻ͨ����
    int d[1000]={0};//d[i]=1��ʾi��ʵ�н�ͨ����
    int i2,j2;
    int min1=100000000;

    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<q;i++)
    {
        d[a[i]]=1;
    }
    for(int i=0;i<n;i++)//��0��ʼ
    {
        if(d[i])
        {
            continue;
            q--;
        }
        for(int j=1;j<=m&&i+j<n;j++)//��i��ʼ������m��
        {

            if(!d[i+j]&&(n-i-q)>=m)
            {
 //               printf("i=%d,i+j=%dִ�й�\n",i,i+j);
                int t=p[i]+p[i+j];
 //               printf("t=%d\n",t);
 //               printf("p[i]=%d,p[i+j]=%d\n",p[i],p[i+j]);
                if(t<min1)
                {
                    min1=t;
                    i2=i;
                    j2=i+j;
                }
            }
        }
    }
    printf("%d %d",i2,j2);
    }
    return 0;
}
