#include<iostream> 
using namespace std; 
void num(int n)
{
    if(n==0) return; 
    
    num(n-1); 

    cout<<n;
  
}

void num2(int n)
{
    if(n==1) return; 

    cout<<n-1; 
    
    num2(n-1);
}

int main()
{
    int n = 5; 
    num(n); 
    num2(n); 
  
}
