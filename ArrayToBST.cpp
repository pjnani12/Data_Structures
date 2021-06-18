#include<bits/stdc++.h>
using namespace std;

class BST{
  int data;
  BST* left;
  BST* right;
public:
    BST* insert(int value){
        BST* newNode= new BST();
        newNode->data=value;
        newNode->left=NULL;
        newNode->right=NULL;
        
        return newNode;
    }
    BST* arrayToBST(int arr[],int start, int end){
        if(start>end)
            return NULL;
        int mid=(start+end)/2;
        BST* newNode=insert(arr[mid]);
        newNode->left=arrayToBST(arr,start,mid-1);
        newNode->right=arrayToBST(arr,mid+1,end);
        
        return newNode;
    }
    void inOrder(BST* root){
        if(root == NULL)
            return;
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
    void preOrder(BST* root){
        if(root == NULL)
            return;
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
    void postOrder(BST* root){
        if(root == NULL)
            return;
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
};

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int size = sizeof(arr) / sizeof(arr[0]);
	BST *root=root->arrayToBST(arr,0,size-1);
	cout<<endl<<"inOrder : ";
	root->inOrder(root);
	cout<<endl<<"preOrder : ";
	root->preOrder(root);
	cout<<endl<<"postOrder : ";
	root->postOrder(root);
	return 0;
}
