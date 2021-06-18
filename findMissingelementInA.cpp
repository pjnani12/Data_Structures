#include<bits/stdc++.h>
using namespace std;
/*
A[] = {1, 2, 3, 9, 5}
B[] = {2, 3, 1, 0, 5, 4}
Output: 9
*/
/*
A = 1 2 3 5 9
B = 0 1 2 3 4 5
*/
int main(){
    
    int A[]={1, 2, 3, 9, 5};
    int B[]={2, 3, 1, 0, 5, 4};//6
    
    int sizeA=sizeof(A)/sizeof(A[0]);
    int sizeB=sizeof(B)/sizeof(B[0]);
    
    /*for(int i=0;i<sizeA;i++){
        int count=0;
        for(int j=0;j<sizeB;j++){
            if(A[i]!=B[j]){
                count++;
            }
        }
        if(count==6){
            cout<<A[i]<<" ";
        }
    }*/
    //sorting A
    for(int i=0;i<sizeA-1;i++){
        for(int j=0;j<sizeA-1-i;j++){
            if(A[j]>A[j+1]){
                int tmp;
                tmp=A[j];
                A[j]=A[j+1];
                A[j+1]=tmp;
            }
        }
    }
    //Sorting B
    for(int i=0;i<sizeB-1;i++){
        for(int j=0;j<sizeB-1-i;j++){
            if(B[j]>B[j+1]){
                int tmp;
                tmp=B[j];
                B[j]=B[j+1];
                B[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<sizeA;i++){
        int j=0;
        for(j=0;j<sizeB;j++){
            if(A[i]==B[j]){
                break;
            }
        }
        if(j==sizeB){
            cout<<A[i]<<" ";
        }
    }
    
	return 0;
}
