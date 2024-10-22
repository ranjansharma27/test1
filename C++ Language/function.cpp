#include<iostream>
using namespace std;

int Sum(int m, int n)  //function declare
{
    int ans= m+n;   //fuction declare
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter 2 Number: ";
    cin>>a>>b;

    // function call
    cout<<Sum(a,b);
    cout<<endl;
}