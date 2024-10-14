#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number: ";
    cin>>n;

    for(int count=1; count<=n; count=count+1){
        cout<<count<<"Square is: "<<count*count<<endl;
    }
}