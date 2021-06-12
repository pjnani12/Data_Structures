#include <iostream>
using namespace std;
class marks{
    int *total;
    public:
    marks(){
        total=new int;
    }
    marks(marks &obj){//copy constructor for implementing deep copy
        total=new int;
        *total=*(obj.total);
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
     marks j=m;//deep copy , 2 addresses are allocated separatly
     cout<<"j value";j.print();
     cout<<"m value";m.print();
     cout<<"changing only j value to 99"<<endl;
     j.set_val(99);
     cout<<"j value";j.print();
     cout<<"m value";m.print();
     return 0;
}
