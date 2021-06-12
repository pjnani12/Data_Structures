#include<iostream>
using namespace std;

class complex{
  public:
  int real;
  int img;
  complex(int a=0,int b=0){
      real=a;
      img=b;
  }
  void operator =(complex &obj){
      complex sum;
      sum.real=real+obj.real;
      sum.img=img+obj.img;
      cout<<sum.real<<"+ "<<sum.img<<"i"<<endl;
      //return sum;
  }
  void print(){
      cout<<real<<"+ "<<img<<"i"<<endl;
  }
};
int main(){
    cout<<"jag"<<endl;
    complex c1(5,2),c2(3,3);
    c1.print();
    c2.print();
    //complex c3;
    c1=c2;
    //c3=c1+c2;
    //c3.print();
    return 0;
}
