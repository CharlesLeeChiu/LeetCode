#include <iostream>
#include <algorithm>

using namespace std;

struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x),left(NULL),right(NULL){}
};

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
        {
        	return 0;
        }
	if(root->left==NULL&&root->right==NULL){
	  return 1;//leaf
	}
	int left=-1;
	int right=-1;
	if(root->left!=NULL) left=minDepth(root->left);
        if(root->right!=NULL) right = minDepth(root->right);
	if(left==-1) return right+1;
	else if(right==-1) return left+1;
	else return min(left,right)+1;
    }
};
int main()
{
  Solution so;
  TreeNode* root=NULL;
  std::cout << so.minDepth(root) << std::endl;

  return 0;
}

