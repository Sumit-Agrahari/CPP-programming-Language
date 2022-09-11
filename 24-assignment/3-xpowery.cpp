#include<iostream>
#include<math.h>
using namespace std;
int power(double,int);
int main()
{
    double a;
    int b;
    cin>>a>>b;
    cout<<power(a,b);
}
int power(double x,int y)
{
    return pow(x,y);
}