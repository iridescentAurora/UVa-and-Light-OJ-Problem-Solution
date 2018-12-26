#include<stdio.h>
int main()
{
    int i,sum[100],n,m,j,k,count2=1,count1=0;
    scanf("%d",&n);
    while(n!=0){
        count2=1;
    while(count2!=0){

    k=1;
    for(i=1;i<=n;i++)
    {
        sum[i]=1;
    }sum[1]=0;
    j=1;
    while(k<=n-2)
    {m=1;
        while(m<=count2){
                 if(j>n)
        {
            j=j-n;
        }

        if(sum[j]==1)
        {


            m++;

        }


j++;
        }j--;
        sum[j]=0;
        if(sum[13]==0)
        {

            break;
        }

k++;

    }

count2++;

        if(sum[13]==1){
        printf("%d\n",count2-1);
        count2=0;

        break;
        }


    }
scanf("%d",&n);
}
return 0;
}
