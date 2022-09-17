#include<iostream>
using namespace std;
// Length of String...
int getLength(char name[])
{
    int count=0;
    for(int i=0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

// Reverse a String...

void Reverse(char name[],int n)
{
    int start=0;
    int end=n-1;
    while(start<end){
        swap(name[start++],name[end--]);
    }

}
//lower case...
char toLoverCase(char ch)
{
    if(ch>>'a' && ch<<'z')
        return 0;
    else{
        //U to L
        char temp= ch - 'A' + 'a';
        //L to U = ch-'a'+'A';
        return temp;
    }
}

// Check Palindrom No...

bool checkpalindrome(char a[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        if(toLoverCase(a[start]) != toLoverCase(a[end]))
        //if(a[start]!=a[end])
        {
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}
char getMaxOccChar(string s)
{
    int arr[26]={0};
    //creat an array
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        //Lower Case
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number= ch - 'a';
        }
        else{//upper case
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalans='a'+ans;
    return finalans;
}


int main()
{
    char name[20];
    cout<<"Enter Your Name "<<endl;
    cin>>name;
    // name[2] = '\0';

    cout<<"Your name is ";
    cout<<name<<endl;
    int len=getLength(name);
    
    cout<<" Length: "<< len << endl;

    Reverse(name,len);
    cout<<"Your name is ";
    cout<<name<<endl;

    cout<<"palindrome or not: "<<checkpalindrome(name,len)<<endl;

    string s;
    cin>>s;
    cout<<getMaxOccChar(s)<<endl;
    return 0;
}