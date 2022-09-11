#include<iostream>
using namespace std;

int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int comb(int n,int r)
{
    return (fact(n)/(fact(r)*fact(n-r)));
}
/*
int perm(int n,int r)
{
    return (fact(n)/fact(n-r));
}*/
void pasc(int line)
{
    int i,j,r,k;
    for(i=1;i<=line;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*line-1;j++)
        {
            if(j>=line+1-i && j<=line-1+i&&k){
                cout<<comb(i-1,r);
                k=0;
                r++;
            }
            else{
                cout<<" ";
                k=1;
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    pasc(n);
}
