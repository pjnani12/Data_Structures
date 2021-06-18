#include<bits/stdc++.h>
using namespace std;

void findTriplerts(int arr[],int n){
    bool check=false;
    if(n<3){
        cout<<"not found"<<endl;
        return;
    }
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    check=true;
                }
            }
        }
    }
    if(!check){
        cout<<"not found"<<endl;
    }
    return;
}

int main(){
	int arr[] = {0, -1, 2, -3, 1};
	int size = sizeof(arr) / sizeof(arr[0]);
	findTriplerts(arr,size);
	return 0;
}
