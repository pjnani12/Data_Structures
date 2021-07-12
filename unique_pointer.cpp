#include<bits/stdc++.h>
using namespace std;

class Rectangle{
public:
    int l;
    int b;
    Rectangle(int a, int c){l=a;b=c;}
    Rectangle(Rectangle &old){l=old.l;b=old.b;}
    ~Rectangle(){cout<<" rectangle disctructor "<<endl;}
};

template<class T>

class my_uni_ptr{
  T* ptr;
 public:
    my_uni_ptr(T* p){ptr=p;}
    my_uni_ptr(const my_uni_ptr &old)=delete;
    my_uni_ptr operator=(my_uni_ptr &old)=delete;
    
    T& operator*(){ return *ptr;}
    T* operator->(){return ptr;}
    ~my_uni_ptr(){delete ptr;}
};

int main(){
    Rectangle* r= new Rectangle(10,20);
    my_uni_ptr<Rectangle> p1(r);
    my_uni_ptr<Rectangle> p3(p1);
    my_uni_ptr<Rectangle> p2=p1;
	return 0;
}
