#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,sum=0;
    for(i=0;i<=9;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
}