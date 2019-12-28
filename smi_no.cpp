#include<iostream>
using namespace std;


int main()
{
    int n,flag,f=0,sum=0,sum1=0;
    int k=0;
    cin>>n;
    int s[230]={0};
    int m=n;
    while(m>=1)
    {
        sum1+=m%10;
        m/=10;
    }
    for(int i=2;i<=n;i++)
    {
        if(n%i==0 &&  n!=i)
            f=1;
    }
    if(!f)
    {
        cout<<"not a smith number"<<endl;
    }
    if(f)
    {
    for(int i=2;i<=n;i++)                                  //finding the prime numbers
    {
        for(int j=2;j<10;j++)
        {
            if(i%j==0 && i!=j)
            {
               flag=1;
                break;
            }
        }
        if(!flag)
        {
           s[k]= i;
           k++;
        }
        flag=0;
    }
         int i=0;
         while(n>1)
         {
           if(n%s[i]==0 )
           {
            if(s[i]<10)
            {
              sum=sum+s[i];
              n=n/s[i];
            }
            else
            {
             m=n;
             n=s[i];
             while (n>=1)
             {
              sum+=n%10;
              n=n/10;
             }
             n=m/s[i];
            }
            } 
            else
            {
                i++;
            }
         }

  }
    if(sum1==sum)
        cout<<"smith number";
    else
        cout<<"not a smith number";
}

