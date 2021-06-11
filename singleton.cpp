#include <iostream>
using namespace std;
class Singleton{
  static Singleton* instance;
  int value;
  //private constructor
  Singleton(){
      value=0;
  }
  public:
  static Singleton* getinstance(){
      if(instance == NULL){
          instance=new Singleton();
      }
      return instance;
  }
  void setvalue(int val){
      this->value=val;
  }
  int getvalue(){
      return this->value;
  }
};
//Initialize pointer to zero so that it can be initialized in first call to getinstance()
Singleton *Singleton::instance=0;
int main(){
    cout<<"Hello World"<<endl;
    Singleton *s=s->getinstance();
    cout<<s->getvalue()<<endl;
    s->setvalue(100);
    cout<<s->getvalue()<<endl;
    Singleton* j=j->getinstance();
    cout<<j->getvalue()<<endl;
    j->setvalue(99);
    s->setvalue(199);
    cout<<j->getvalue()<<endl;
    cout<<s->getvalue()<<endl;
    return 0;
}
