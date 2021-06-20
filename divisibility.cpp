#include <bits/stdc++.h>
using namespace std;

bool isdivisibleby9(int n){
    if(n==0||n==9){
        return true;
    }
    if(n<9){
        return false;
    }
    return isdivisibleby9((n>>3)-(n&7));
}
bool isdivisibleby17(int n){
    if(n==0||n==17){
        return true;
    }
    if(n<17){
        return false;
    }
    return isdivisibleby17((n>>4)-(n&15));
}
int main() {
	int n=408;
	int check=n>>2;
	check=check<<2;
	(n==check)?cout<<"divisible by 4 : ":cout<<"NOT divisible by 4 : "<<endl;
	
    check=n>>3;
    check=check<<3;
	(n==check)?cout<<"divisible by 8 : ":cout<<"NOT divisible by 8 : "<<endl;
    
	((n&1)==0)?cout<<"divisible by 2 : ":cout<<"NOT divisible by 2 : "<<endl;
	((n&3)==0)?cout<<"divisible by 4 : ":cout<<"NOT divisible by 4 : "<<endl;
	((n&7)==0)?cout<<"divisible by 8 : ":cout<<"NOT divisible by 8 : "<<endl;
	((n&15)==0)?cout<<"divisible by 16 : ":cout<<"NOT divisible by 16 : "<<endl;
    isdivisibleby9(n)? cout<<"divisible by 9":cout<<"not divisble by 9"<<endl;
    isdivisibleby17(n)? cout<<"divisible by 17":cout<<"not divisble by 17"<<endl;
    
	return 0;
}
