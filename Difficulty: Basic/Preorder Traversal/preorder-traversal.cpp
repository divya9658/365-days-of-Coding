/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  void pre(Node* root, vector<int>&res){
      if(root==NULL){
          return;
      }
      res.push_back(root->data);
      pre(root->left,res);
      pre(root->right,res);
  }
    vector<int> preorder(Node* root) {
        // code here
        
        vector<int> res;
        pre(root,res);
        return res;
    }
};