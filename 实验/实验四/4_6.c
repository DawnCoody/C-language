#include<stdio.h>

float avg(int a[4][5],int cmd);
void fail(int a[4][5],int b[4]);
void excellent(int a[4][5],int c[4]);

int main()
{
    int i,j;
    int a[4][5],b[4]={0},c[4]={0};
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("��һ�ſε�ƽ����Ϊ��%.2f\n",avg(a,10));

    printf("�������������ϲ������ѧ������\n");

    fail(a,b);
    for(i=0;i<5;i++)
    {
        if(b[i]==1)
        {
            printf("ѧ�ţ�%d��ƽ���ɼ���%.2f\n",i,avg(a,i));
        }
    }

    printf("������ƽ���ɼ���90���ϻ�ȫ���γ̳ɼ���85�����ϵ�ѧ����\n");
    excellent(a,c);
    for(i=0;i<5;i++)
    {
        if(c[i]==1)
        {
            printf("%d\n",i);
        }
    }
}

float avg(int a[4][5],int cmd)
{
    //cmdΪ10���ſε�ƽ���ɼ���cmdΪ2�󵥸�ѧ����ƽ���ɼ�
    int sum=0;
    float avg;
    int i,j;
    if(cmd==10)
    {
        for(i=0;i<4;i++)
        {
            sum+=a[i][0];
        }
        return sum/4.0;
    }
    else
    {
        for(i=0;i<5;i++)
        {
            sum+=a[cmd][i];
        }
        avg=sum/5.0;
        return avg;
    }


}

void fail(int a[4][5],int b[4])
{
    int i,j;
    int c=0;
    for(i=0;i<4;i++)
    {
        c=0;
        for(j=0;j<5;j++)
        {
            if(a[i][j]<60)
            {
                c++;
            }

            if(c>=2)
            {
                b[i]=1;
            }
        }
    }
}

void excellent(int a[4][5],int c[5])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        c[i]=1;
        for(j=0;j<5;j++)
        {
            if(a[i][j]<85)
            {
                c[i]=0;
                break;
            }
        }
        if(avg(a,i)>90)
        {
            c[i]=1;
        }

    }
}
