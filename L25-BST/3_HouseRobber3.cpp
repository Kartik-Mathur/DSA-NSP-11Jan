/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Pair{
public:
	int rootChori, rootNoChori;
};

class Solution {
public:
	Pair solve(TreeNode* root){
		if(root == NULL){
			Pair p;
			p.rootChori = p.rootNoChori = 0;
			return p;
		}

		Pair left = solve(root->left);
		Pair right = solve(root->right);

		Pair p;
		p.rootChori = root->val + left.rootNoChori + right.rootNoChori;
		p.rootNoChori = max(left.rootNoChori, left.rootChori)+
						max(right.rootNoChori, right.rootChori);

		return p;
	}

    int rob(TreeNode* root) {
        Pair ans = solve(root);


        return max(ans.rootNoChori, ans.rootChori);
    }
};












