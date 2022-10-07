#include<bits/stdc++.h>
using namespace std;
int shiva()
{
    
    int a[]={1,2,3,4};
    int size=sizeof(a)/sizeof(int)-1;
    return size;
}
int main()
{
    cout<<shiva();
}
//    or   
int simpleArraySum(vector<int> ar) {
    int n=ar.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+ar[i];
    }
    return sum;
}

