#include<bits/stdc++.h>
using namespace std;

class BST{
  int data;
  BST *left, *right;
public:
    BST(){
        data=0;
        left=right=NULL;
    }
    BST(int val){
        data=val;
        left=right=NULL;
    }
    BST* insert(BST* root,int val){
        if(!root){
            return new BST(val);
        }
        if(val > root->data){
            root->right=insert(root->right,val);
        }else{
            root->left=insert(root->left,val);
        }
    }
    void InOrder(BST* root){
        if(!root){
            return ;
        }
        InOrder(root->left);
        cout<<root->data<<" ";
        InOrder(root->right);
    }
    void PreOrder(BST* root){
        if(!root){
            return ;
        }
        cout<<root->data<<" ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
    void PostOrder(BST* root){
        if(!root){
            return ;
        }
        PostOrder(root->left);
        PostOrder(root->right);
        cout<<root->data<<" ";
    }
};
int main(){
    BST b,*root=NULL;
    root=b.insert(root,50);
    b.insert(root,30);
    b.insert(root,20);
    b.insert(root,40);
    b.insert(root,70);
    b.insert(root,60);
    b.insert(root,80);
    cout<<"InOrder : ";
    b.InOrder(root);
    cout<<endl;
    cout<<"PreOrder : ";
    b.PreOrder(root);
    cout<<endl;
    cout<<"PostOrder : ";
    b.PostOrder(root);
    cout<<endl;
    return 0;
}
