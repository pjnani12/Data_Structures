#include<bits/stdc++.h>
using namespace std;

void RemoveUnderscore(char *str){
    int size=strlen(str);
    int j=0;
    for(int i=0;i<=size;i++){
        if(str[i] != '_'){
            str[j]=str[i];
            j++;
        }
    }
}
int main(){
    char str[]="__ABC_D_E_FGH_____I__";
    cout<<"before ::"<<str<<endl;
    RemoveUnderscore(str);
    cout<<"After ::"<<str<<endl;
    cout<<"Jagadeesh"<<endl;
    return 0;
}
