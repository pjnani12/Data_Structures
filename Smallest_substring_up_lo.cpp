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
    int smallSize=INT_MAX;
    int maxNoElements=INT_MIN;
    string ans;
	for (int i = 0; i < n; i++){
		for (int len = 1; len <= n - i; len++){
		    int small[26]={0};
            int caps[26]={0};
			string str=s.substr(i, len);
			for (int i = 0; i < str.length(); i++) {
                 if (str[i] >= 65 && str[i] <= 90)
                    caps[str[i] - 'A']++;
                else
                    small[str[i] - 'a']++;
            }
            //balanced(small,caps)?cout<<str<<" ":cout<<"";
            bool balanceCheck=true;
            int count=0;
            for (int i = 0; i < 26; i++) {
                if (small[i] != 0 && (caps[i] == 0)){
                    balanceCheck=false;
                }
                else if ((small[i] == 0) && (caps[i] != 0)){
                    balanceCheck=false;
                }
                if((small[i] != 0) && (caps[i] != 0)){
                    count++;
                }
            }
            //balanceCheck?cout<<str<<" "<<count<<" ":cout<<"";
            unordered_map<string, int> mp;
            if(balanceCheck){
                mp[str]=count;
                if(count>maxNoElements){
                    maxNoElements=count;
                }
            }
            for (auto x : mp){
                if(x.second == maxNoElements){
                    if(x.first.length() < smallSize){
                        smallSize=x.first.length();
                        ans=x.first;
                    }
                }
            }
        }
	}
	if(ans.empty()){
	    cout<<"-1"<<ans<<endl;
	}else{
	    cout<<"answer is:: "<<ans<<" length is : "<<ans.length()<<endl;
	}
}
int main(){
	string s = "azABaabbaA";
	subString(s,s.length());
	return 0;
}
