#include<iostream>
using namespace std;
int highestDigit(int x){
	int max = -1;
	while(x)
	{
		if(max < x%10){
			max=x%10;
		}
		x = x/10;
	}
	return max;
}
int main(){
	int n;
	cin>>n;
	cout<<highestDigit(n);
	return 0;
}     