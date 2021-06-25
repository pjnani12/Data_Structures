#include<bits/stdc++.h>
using namespace std;
bool balanced(int small[], int caps[]){
    for (int i = 0; i < 26; i++) {
        if (small[i] != 0 && (caps[i] == 0)){
            return 0;
        }
        else if ((small[i] == 0) && (caps[i] != 0)){
            return 0;
        }
    }
    return 1;
}
void subString(string s, int n){
    int smallSize=999999999;
    string ans;
	for (int i = 0; i < n; i++){
	    int small[26]={0};
        int caps[26]={0};
		for (int len = 1; len <= n - i; len++){
			string str=s.substr(i, len);
			for (int i = 0; i < str.length(); i++) {
                 if (str[i] >= 65 && str[i] <= 90)
                    caps[str[i] - 'A']++;
                else
                    small[str[i] - 'a']++;
            }
            //balanced(small,caps)?cout<<str<<" ":cout<<"";
            if(balanced(small,caps)){
                if(smallSize>(str.length())){
                    smallSize=str.length();
                    ans=str;
                }
            }
		}
	}
	
	if(ans.empty()){
	    cout<<"-1"<<ans<<endl;
	}else{
	    cout<<"answer is:: "<<ans<<endl;
	}
	
}
int main(){
	string s = "azABaabba";
	subString(s,s.length());
	return 0;
}
