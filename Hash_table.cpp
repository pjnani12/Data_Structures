#include<bits/stdc++.h>
using namespace std;

class Hash{
  int Bucket;
  list<int> *table;
public:
    Hash(int b){
        this->Bucket=b;
        table=new list<int>[b];
    }
    int hashFunction(int key){
        return (key%Bucket);
    }
    void insertion(int key){
        int index=hashFunction(key);
        table[index].push_back(key);
    }
    void deletion(int key){
        int index=hashFunction(key);
        list<int>::iterator i;
        for(i=table[index].begin();i!=table[index].end();++i){
            if(*i == key)
                break;
        }
        if(i!=table[index].end())
            table[index].erase(i);
    }
    void display(){
        for(int i=0;i<Bucket;i++){
            cout<<i;
            for(auto x:table[i]){
                cout<<"-->"<<x;
            }
            cout<<endl;
        }
    }
};
int main(){
    int a[] = {15, 11, 27, 8, 12,22,32,42,82,92,22};
    int n = sizeof(a)/sizeof(a[0]);
    Hash h(10);
    for (int i = 0; i < n; i++) 
        h.insertion(a[i]);
    
    h.deletion(12);
    h.display();
    return 0;
}
