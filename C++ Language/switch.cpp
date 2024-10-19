#include<iostream>
using namespace std;
int mainn(){

    int i;
    cout<<"Enter the number: ";
    cin>>i;

    switch (i)
    {
    case 1:
        cout<<"Rohit";
        
    case 2:
        cout<<"Mohit";
        break;
    
    default:
    cout<<"Sohit";
        break;
    }
}