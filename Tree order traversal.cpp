#include<iostream>
#include<conio.h>

using namespace std;


class Treenode
{
    public:
    
    int data;
    Treenode* left;
    Treenode* right;
    
};

class binarysearchtree
{
    public:
    
    Treenode* root ;
    
    binarysearchtree()
    {
        root=NULL;
    }
    
    Treenode* create (int value)
    {
       
        Treenode* newnode =new Treenode();
        
        newnode->data=value;
        newnode->left=NULL;
        newnode->right=NULL;
        return newnode;
        
    }
    
    void insert(int value)
    {
         root=insertrt(root,value);
    }
    
    Treenode* insertrt(Treenode* root,int value)
    {
        if(root==NULL)
        {
            return create(value);
            
        }
        
        else if(value< root->data)
        {
            root->left=insertrt(root->left,value);
            
        }
         else if(value> root->data)
        {
            root->right=insertrt(root->right,value);
            
        }
        
        return root;
        }
        
        void inorder(Treenode* node)
        {
            if(node!=NULL)
            {
                inorder(node->left);
                cout<<node->data<<"  ";
                inorder(node->right);
                
                
            }
        }
         void preorder(Treenode* node)
        {
            if(node!=NULL)
            { 
                cout<<node->data<<"  ";
                preorder(node->left);
                preorder(node->right);
                
                
            }
        }
        void postorder(Treenode* node)
        {
            if(node!=NULL)
            { 
                
                postorder(node->left);
                postorder(node->right);
                cout<<node->data<<"  ";
                
                
            }
        }
};

int main()
{
    binarysearchtree obj;
    
    int n;
    
    char choice;
    
    
      do{
          cout<<"\nEnter an integer value to insert into the Binary Search Tree: ";
          cin>>n;
          
          obj.insert(n);
          
          cout<<"\n do you want to continue press (y(Y)/n(N) : ";
          cin>>choice;
      }while(choice=='y' || choice=='Y');
      
      
      cout<<"\n inorder traversal of binary tree is : ";
      
      obj.inorder(obj.root);
      cout<<"\n\n preorder traversal of binary tree is : ";
      
      obj.preorder(obj.root);
      
      
      cout<<"\n\n postorder traversal of binary tree is : ";
      
      obj.postorder(obj.root);
      
}
