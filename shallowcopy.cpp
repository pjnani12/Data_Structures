#include <iostream>
using namespace std;
class marks{
    int *total;
    public:
    marks(){
        total=NULL;
    }
    marks(int a){
        total=new int;
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
     marks m(10);
     m.print();
     marks j=m;//both the objects are pointing to same address
     j.print();
     return 0;
}
