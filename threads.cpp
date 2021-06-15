#include<bits/stdc++.h>
#include<thread>
using namespace std;

void table9(int times){
    for(int i=1;i<=times;i++){
        cout<<" "<<9*i<<" ";
    }
}
void table2(int times){
    for(int i=1;i<=times;i++){
        cout<<" "<<2*i<<" ";
    }
}

class Car{
  public:
  void operator()(int times){
      for(int i=1;i<=times;i++){
        cout<<"car"<<" ";
      }
  }
};

int main(){
    
    thread t1(table9,10);
    thread t2(table9,10);
    //thread t2(table2,10);
    
    //thread t3(Car(),5);
    //cout<<"int main"<<endl;
    auto lam=[](int times){
       for(int i=1;i<=times;i++){
            cout<<" lam"<<" ";
        } 
    };
    //thread t4(lam,4);
    //std::cout << "main thread id = " << std::this_thread::get_id() << std::endl;
    //std::cout << "child thread id = " << t1.get_id() << std::endl;
    //std::cout << "child thread id = " << t2.get_id() << std::endl;
    //std::cout << "child thread id = " << t3.get_id() << std::endl;
    //std::cout << "child thread id = " << t4.get_id() << std::endl;
    //std::cout << "Number of threads = "<<  std::thread::hardware_concurrency() << std::endl;
    t1.join();
    t2.join();
    //t2.detach();
    //t3.join();
    //t4.join();
    
    return 0;
}
