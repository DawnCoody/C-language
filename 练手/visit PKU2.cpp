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
    int n=7,m=3,q=3;//n��ʾ����n�죬m��ʾm���ڱ���
    int p[7]={6,9,10,1,0,8,35};
    int a[3]={5,6,2};//p[i]��ʾ��i�챱����ÿ�������a[i]��ʾ��a[i]�콻ͨ����
    int d[100]={0};//d[i]=1��ʾi��ʵ�н�ͨ����
    int i2,j2;
    int min1=10000;


    for(int i=0;i<q;i++)
    {
        d[a[i]-1]=1;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",d[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)//��0��ʼ
    {
        for(int j=1;j<=m&&i+j<n;j++)//��i��ʼ������m��
        {
            if(!d[i+j])
            {
                printf("i=%d,i+j=%dִ�й�\n",i,i+j);
                int t=p[i]+p[i+j];
                printf("t=%d\n",t);
                printf("p[i]=%d,p[i+j]=%d\n",p[i],p[i+j]);
                if(t<min1)
                {
                    min1=t;
                    i2=i;
                    j2=i+j;
                }
            }
        }
    }

/*    for(int i=0;i<n;i++)
    {
        cout<<d[i];
    }
/*
    for(int i=0;i<q;i++)
    {
        cout<<a[i];
    }
*/
    printf("%d %d",i2,j2);

}
