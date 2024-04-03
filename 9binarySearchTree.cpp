#include<iostream>
using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int data){
//         this->data=data;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// class tree{
//     public:
//     node* createNode(int data){
//         return new node(data);
//     }
//     node* insertNode(node* &node,int data){
//         if(node==NULL){
//             return createNode(data);
//         }else{
//             if(data>node->data){
//                 node->right=insertNode(node->right,data);
//             }
//             else if(data<node->data){
//                 node->left=insertNode(node->left,data);
//             }else{
//                 cout<<"please try another value it's alreday there";
//             }
//         }
//         return node;
//     }
//     void print(node* &node){
//         if(node==NULL){
//             return ;
//         }
//         print(node->left);
//         cout<<node->data<<" ";
//         print(node->right);
//     }
//     //find the hight of tree
//     int hight(node* &root){
//         if(root==NULL){
//             return 0;
//         }
//         int l=hight(root->left);
//         int r=hight(root->right);
//         return max(l,r)+1;
//     }
//     pair<bool,int> balanceAndHight(node* &root){
//         //time complexity O(n)/
//         if(root==NULL){
//             pair<bool,int>p=make_pair(true,0);
//             return p;
//         }
//         pair<bool,int> lB=balanceAndHight(root->left);//checking left tree
//         pair<bool,int> rB=balanceAndHight(root->right);//checking right tree
//         bool dif=(lB.second-rB.second)<=1;
//         pair<bool,int> ans;
//         if(lB.first && rB.first && dif){
//             ans.first=true;
//         }else{
//             ans.first=false;
//         }
//         ans.second=max(lB.second,lB.second)+1;
//         return ans;

//     }
//     //find whether tree is blananced or not
//     bool isBalance(node* &root){
//         return balanceAndHight(root).first;
//         //more time complexity o(n^2)

//         // if(root==NULL){
//         //     return true;
//         // }
//         // bool left=isBalance(root->left);
//         // bool right=isBalance(root->right);
//         // bool ans= abs(hight(root->left)-hight(root->right))<=1;
//         // if(left && right && ans){
//         //     return true;
//         // }
//         // else{
//         //     return false;
//         // }
    

//     }
//     //check if trees are identical or not 
//     bool checkidentical(node* &root1,node* &root2){
//         if(root1==NULL&&root2==NULL){
//             return true;
//         }
//         if(root1==NULL&&root2!=NULL){
//             return false;
//         }
//         if(root1!=NULL&&root2==NULL){
//             return false;
//         }
//         bool l=checkidentical(root1->left,root2->left);
//         bool r=checkidentical(root1->right,root2->right);
//         bool data=root1->data==root2->data;
//         if(l&&r&&data){
//             return true;
//         }
//         else{
//             return false;
//         }

//     }
//     //check if the sum of every node in left tree and
//     //every node in right tree is equal to data root node
//    pair<bool,int> isSum(node* &root){
      
//       if(root==NULL){
//         pair<bool,int> p=make_pair(true,0);
//         return p;
//      }
//      pair<bool,int> l=isSum(root->left);
//       pair<bool,int> r=isSum(root->right);

//       bool leftAns=l.first;
//       bool rightAns=r.first;
//       int sum=l.second+r.second==root->data;

//       pair<bool,int> ans;
//       if(leftAns && rightAns && sum){
//           ans.first=true;
//           ans.second=2*(root->data);
//         }else{
//           ans.first=false;
//         }
//        return ans;
      
//     }
//     bool isSumTree(node* &root){
//         return isSum(root).first;
//     }
    
   
// };
class node{
    public:
    int data;
    node* right;
    node* left;
    node(int data){
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }
    
};
class tree{
   public:
   node* root;
   tree(){
    root=NULL;
   }
   void print(node* root){
    if(root==NULL){
        return ;
    }
    print(root->left);
    cout<<root->data;
    print(root->left);

   }
   void insertNode(node* root,int data){
        node* newNode=new node(data);
        if(root==NULL){
            root=newNode;
        }else if(data<root->data){
            root->left=newNode;
        }else if(data>root->data){
            root->right=newNode;
        }else{
            cout<<"data already present in tree."<<endl;
        }
        return ;
   }


    
   

};

int main()
{
    tree t1;
    t1.insertNode(t1.root,2);
    t1.print(t1.root);
 

// root=t1.insertNode(root,2);
// root=t1.insertNode(root,6);
// root=t1.insertNode(root,1);
// root=t1.insertNode(root,3);
// root=t1.insertNode(root,5);
// root=t1.insertNode(root,7);
    // cout<<t1.hight(root)<<endl;
    // cout<<t1.isBalance(root)<<endl;
    // t1.print(root);
return 0;


}


#include<iostream>
// using namespace std;
// class node{
    
//     public:
//     int data;
//     node* right;
//     node* left;
//     node(int data){
//         this->data=data;
//         this->right=NULL;
//         this->left=NULL;
//     }
// };
// class tree{
    
//     public:
//     node* root;
//     void distroy(node* &root){
//        if(root){
//         distroy(root->left);
//         distroy(root->right);
//         delete root;
//        }
//     }
//     tree(){
//         root=NULL;
//     }
//     ~tree(){
//         distroy(root);
//         cout<<"distrucot is called";
//     }

//     node* insert(node* &root,int d){
//         node* newNode=new node(d);
//         if(root==NULL){
//            root=newNode;
//         }else if(d>root->data){
//             root->right=insert(root->right,d);

//         }else if(d<root->data){
//             root->left=insert(root->left,d);
        
//         }else{
//             cout<<"data alredy predent in tree."<<endl;
//             delete newNode;
//         }
//         return root;
//     }
//     void print(node* &root){
//         if(root==NULL){
//             return ;
//         }
//         print(root->left);
//         cout<<root->data<<" ";
//         print(root->right);
//     }
  
   
// };
// int main(){
//     tree t1;
//     t1.insert(t1.root,2);
//     t1.insert(t1.root,5);
//     t1.insert(t1.root,1);
//     t1.insert(t1.root,14);
//     t1.insert(t1.root,7);
//     t1.print(t1.root);
    
//     return 0;
// }
    