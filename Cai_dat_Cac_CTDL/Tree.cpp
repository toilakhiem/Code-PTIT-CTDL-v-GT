#include<bits/stdc++.h>
using namespace std;
typedef Tree *tree;
class Tree{
    int data;
    Tree *left;
    Tree *right;
};
tree makeNode(tree &a, int x){
    tree tmp = new Tree();
    tmp->data = x;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}
tree makeRoot(){

}
int main(){
    
}