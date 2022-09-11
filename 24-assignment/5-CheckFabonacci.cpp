#include<iostream>
using namespace std;
void fab(int);
int main()
{
    int n;
    cin>>n;
    fab(n);
}
void fab(int n)
{
    int i,prev=0,cur=1,next=1;
    cout<<prev<<" "<<cur<<" ";
    for(i=3;i<=n;+i++){
        next=prev+cur;
        cout<<next<<" ";
        prev=cur;
        cur=next;   
    }
}