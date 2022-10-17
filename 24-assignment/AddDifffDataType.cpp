#include<iostream>
using namespace std;
int add(int ,int );
int add(int, int);
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    float p,q;
    cin>>p,q;
    cout<<add(p,q)<<endl;
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int add(int p,int q)
{
    return p+q;
}