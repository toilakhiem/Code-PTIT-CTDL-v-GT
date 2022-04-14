#include <bits/stdc++.h>
using namespace std;
typedef class Node *node;
class Node{
    public:
        int data;
        Node *next;
};
void InRaCacNode(node a)
{
    while (a != NULL)
    {
        cout << a->data << " ";
        a = a->next;
    }
    cout << endl;
}
node makeNode(int x)
{
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
void ThemVaoDau(node &a, int x)
{
    node tmp = makeNode(x);
    if (a == NULL)
    {
        a = tmp;
    }
    else
    {
        tmp->next = a;
        a = tmp;
    }
}
void ThemVaoCuoi(node &a, int x){
    node tmp = makeNode(x);
    if(a==NULL){
        a = tmp;
    }
    else{
        node p = a;
        while(p->next!=NULL){
            p = p->next;
        }
        p->next = tmp;
    }
}
void XoaOdau(node &a){
    if (a == NULL)
        return;
        a = a->next;
}
void XoaOCuoi(node &a){
    if(a == NULL)
        return;
    node truoc = NULL, sau = a;
    while(sau->next != NULL){
        truoc = sau;
        sau = sau->next;
    }
    if(truoc == NULL)
        a = NULL;
    else
        truoc->next = NULL;
}
int main(){
    node khiem = NULL;
    ThemVaoCuoi(khiem, 1);
    ThemVaoCuoi(khiem, 2);
    InRaCacNode(khiem);
}