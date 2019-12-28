#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

bool sameTree(struct Node *&tree1,struct Node *&tree2){
    if(tree1==NULL && tree2==NULL){
        return true;
    }
    else if(tree1==NULL || tree2==NULL){
        return false;
    }
    else if(tree1->data==tree2->data){
        sameTree(tree1->left,tree2->left);
        sameTree(tree1->right,tree2->right);
    }
    else{
        return false;
    }
}

void printTree(struct Node *Root){
    if(Root==NULL){
        return;
    }
    else{
        cout<<Root->data<<"\t";
        printTree(Root->left);
        printTree(Root->right);
    }
}
int insert(struct Node *&Root,int key){
    if(Root==NULL){
        Root=new struct Node;
        Root->data=key;
        Root->left=Root->right=NULL;
        return 1;
    }
    else{
        if(Root->data>key){
           return insert(Root->left,key);
        }
        else if(Root->data<key){
            return insert(Root->right,key);
        }
        else{
            return 1;
        }
    }
}
int main(){
    struct Node *root1=NULL;
    struct Node *root2=NULL;

    insert(root1,10);
    insert(root1,15);
    insert(root1,20);
    insert(root1,5);
    insert(root1,0);
    insert(root1,30);

    insert(root2,10);
    insert(root2,15);
    insert(root2,20);
    insert(root2,5);
    insert(root2,0);
    insert(root2,30);
    cout<<"printing root1\n";
    printTree(root1);
    cout<<"\n";
    cout<<"printing root2\n";
    printTree(root2);
    cout<<"\n";
    if(sameTree(root1,root2)){
        cout<<"both are same trees";
    }
    else{
        cout<<"both are different trees";
    }
    return 0;
}