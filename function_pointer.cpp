#include<bits/stdc++.h>
using namespace std;

int add(int a , int b) {  
    return a+b;  
}  
int main()  {  
 int (*p)(int,int);  // function pointer declaration  
 p=add; // funcptr is pointing to the add function  
 int sum=p(5,5);  
 cout << "sum is :" <<sum<<endl;  
  return 0;  
}  
