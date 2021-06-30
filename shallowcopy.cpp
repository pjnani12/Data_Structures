#include <iostream>
using namespace std;
class marks{
    int *total;
    public:
    marks(){
        total=new int;
    }
    void set_val(int a){
        *total=a;
    }
    ~marks(){
        delete total;
    }
    void print(){
        cout<<*total<<endl;
    } 
};
int main() { 
     marks m;
     m.set_val(10);
     m.print();
     marks j=m;//both the objects are pointing to same address
     cout<<"j value";j.print();
     cout<<"m value";m.print();
     cout<<"changing only j value to 99"<<endl;
     j.set_val(99);
     cout<<"j value";j.print();
     cout<<"m value";m.print(); //both j & m values are changed
     return 0;
}
