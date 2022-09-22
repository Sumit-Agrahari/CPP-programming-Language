#include <bits/stdc++.h>

using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int sum=0,sum2=0;
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            if(i==j){
                sum=sum+arr[i][j];
            }
            if(i+j==2){
                sum2=sum2+arr[i][j];
            }
        }
    }
    int res=sum-sum2;
    cout<<res;
}
