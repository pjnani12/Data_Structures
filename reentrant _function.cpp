#include<bits/stdc++.h>
using namespace std;
//A function is said to be reentrant if there is a provision to interrupt 
//the function in the course of execution
int fun1(int i){ // re-entrant
    return i * 5;
}
int fun2(int i){ //re-entrant
   return fun1(i) * 5;
}
int main()  {  
 int val=fun2(5);  
 cout << "val is :" <<val<<endl;  
  return 0;  
}  
