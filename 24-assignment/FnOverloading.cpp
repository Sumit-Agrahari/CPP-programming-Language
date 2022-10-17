#include<iostream>
using namespace std;
float area(int );
int area(int ,int );
int main(){
    int r;
    cin>>r;
    cout<<"area of circle is " <<area(r)<<endl;
    int l,b;
    cin>>l>>b;
    cout<<"area od ractangle " <<area(l,b)<<endl;
}
float area(int r){
    return 3.14*r*r;
}
int area(int l,int b){
    return l*b;
}