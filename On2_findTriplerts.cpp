#include<bits/stdc++.h>
using namespace std;

void findTriplerts(int arr[],int n){
    bool check=false;
    if(n<3){
        cout<<"not found"<<endl;
        return;
    }
    //sort
    //sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    
    for(int i=0;i<n-2;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==0){
                cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<endl;
                l++;
                r--;
                check=true;
                break;
            }else if(arr[i]+arr[l]+arr[r]<0){
                l++;
            }else{
                r--;
            }
        }
    }
    if(!check){
        cout<<"not found"<<endl;
    }
    return;
}

int main(){
	int arr[] = {1, -2, 1, 0, 5,-5};
	int size = sizeof(arr) / sizeof(arr[0]);
	findTriplerts(arr,size);
	return 0;
}
