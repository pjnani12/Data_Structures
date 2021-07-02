#include<bits/stdc++.h>
#include<thread>
using namespace std;

void thread_function(string &s){
    cout << "thread function ";
    cout << "message is = " << s <<endl;
    s = "Justin Beaver";
}

int main(){
    string s = "Kathy Perry";
    thread t(&thread_function, ref(s));
    std::thread t2 = move(t);
    t2.join();
    cout << "main thread message = " << s <<endl;
    
    return 0;
}
