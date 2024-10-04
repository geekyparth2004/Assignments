#include<iostream>
using namespace std; 
void odd(int a , int b)
{
    if(a>b) return; 

    cout<<a<<" "; 
    
    odd(a+2,b); 
}

int main()
{
    int a; 
    cin>>a;

    int b;
    cin>>b;

    odd(a,b); 
}
