#include<iostream>
using namespace std;
void CheckPrime(int);
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    CheckPrime(n);
    return 0;
}
void CheckPrime(int N)
{
    int count=0;
    for(int i=1;i<=N;i++)
    {
        if(N%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<N<<" is prime number"<<endl;
    }
    else{
        cout<<N<<" is not prime number"<<endl;
    }
}