#include <iostream>
using namespace std;
struct data{
    int a;
    int b;
    char c;
    bool d;
};
int main(){
    data s;
    s.a=5;
    s.b=10;
    s.c='c';
    s.d=true;
    cout<<s.a<<s.b<<s.c<<s.d<<endl;
    int *p=reinterpret_cast<int*>(&s);
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p++;
    cout<<"error case ::"<<*p<<endl;
    char *ch=reinterpret_cast<char*>(p);
    cout<<*ch<<endl;
    ch++;
    cout<<"error 2::"<<*ch<<endl;
    bool *bp=reinterpret_cast<bool*>(ch);
    cout<<*bp<<endl;
    s.d=false;
    cout<<*bp<<endl;
	return 0;
}
