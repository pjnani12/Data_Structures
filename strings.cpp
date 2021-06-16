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

int main() {
    char str[]="jagadeesh";
    string rtn=removeStr(str,'e');
    cout<<rtn;
	return 0;
}
