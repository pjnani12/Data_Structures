#include<bits/stdc++.h>
using namespace std;

class A{
    vector<int> arr;
public:
    A(initializer_list<int> list){
        for(auto a:list){
            arr.push_back(a);
        }
    }
    void display(){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    A obj{1,2,3,4,5};
    obj.display();
    A obj2{1,2,3,4,5,999,888,777,555};
    obj2.display();
    return 0;
}
