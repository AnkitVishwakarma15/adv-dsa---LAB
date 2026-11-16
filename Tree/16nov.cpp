// Program for preorder,postorder traversal of a binary tree 

#include<iostream>
using namespace std;
template <typename type>

class Tree {
    struct Node {
        type data;
        Node* left;
        Node* right;

        Node(type d){
            this->data = d;
            this->left = this->right = nullptr;
        }
    };
    public: 
    Node* Root = nullptr;
    Tree(){
        Node* f = new Node('F');
        Node* b = new Node('B');
        Node* g = new Node('G');
        Node* a = new Node('A');
        Node* d = new Node('D');
        Node* i = new Node('I');
        Node* c = new Node('C');
        Node* e = new Node('E');
        Node* h = new Node('H');

        f->left = b;
        f->right = g;
        b->left = a;
        b->right = d;
        d->left = c;
        d->right = e;
        g->right = i;
        i->left = h;
        Root = f;
    }
    void preorder(Node* ptr){
        if(ptr == nullptr) return;
        cout<<ptr->data<<" ";
        preorder(ptr->left);
        preorder(ptr->right);
    }
    void postorder(Node* ptr){
        if(ptr == nullptr) return;
         postorder(ptr->left);
        postorder(ptr->right);
        cout<<ptr->data<<" ";
    }
    void inorder(Node* ptr){
        if(ptr == nullptr) return;
        inorder(ptr->left);
        cout<<ptr->data<<" ";
        inorder(ptr->right);
    }
};

int main(){
    Tree<char> obj;
    cout<<"Preorder Traversal: ";
    obj.preorder(obj.Root);
    cout<<"\nPostorder Traversal: ";
    obj.postorder(obj.Root);
    cout<<"\nInorder Traversal: ";
    obj.inorder(obj.Root);
}


