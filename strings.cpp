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

int main() {
    char str[]="jagadeesh";
    //string rtn=removeStr(str,'e');
    string rtn=reverse(str);
    cout<<rtn;
	return 0;
}
