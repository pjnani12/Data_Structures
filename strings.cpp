#include<bits/stdc++.h>
using namespace std;

string removeStr(char *s,char rmv){
    string rtn="";
    int n=strlen(s);
    for(int i=0;i<n;i++){
        if(s[i]!=rmv){
            rtn=rtn+s[i];
        }
    }
    return rtn;
}
string reverse(char *s){
    string rev="";
    int n=strlen(s);
    for(int i=n-1;i>=0;i--){
        rev=rev+s[i];
    }
    return rev;
}
void word_reverse(char *s){
    string str=s;
    string rev="";
    int n=strlen(s);
    for(int i=0;i<=n;i++){
        if(str[i]==' '|| str[i]=='\0'){
            int size=rev.length();
            for(int i=size-1;i>=0;i--){
                cout<<rev[i];
            }
            cout<<" ";
            rev="";
        }else{
            rev=rev+str[i];
        }
    }
}
void reverse_words(char *s){
    string str=s;
    string rev="";
    vector<string> str_array;
    int n=strlen(s);
    for(int i=0;i<=n;i++){
        if(str[i]==' '|| str[i]=='\0'){
            str_array.push_back(rev);
            rev="";
        }else{
            rev=rev+str[i];
        }
    }
    for(auto it=str_array.rbegin();it!=str_array.rend();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"unique words"<<endl;
    for(int i = 0;i < str_array.size();i++){
        int cnt = 0;
        for(int j = 0;j < str_array.size() && cnt < 2;j++){
            if(str_array[i] == str_array[j])
                cnt++;
        }
        if(cnt == 1) 
            cout << str_array[i] <<" ";
    }
    cout<<endl;
    cout<<"Distinct words"<<endl;
    for(int i = 0;i < str_array.size();i++){
        int j;
        for(j = 0;j < i;j++){
            if(str_array[i] == str_array[j])
                break;
        }
            if(i == j) 
            cout << str_array[i] <<" ";
    }
}
int main() {
    char str[]="world car free day car day";
    //string rtn=removeStr(str,'e');
    //string rtn=reverse(str);
    //cout<<rtn;
    //word_reverse(str);
    reverse_words(str);
	return 0;
}
