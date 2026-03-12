#include <stddef.h>

struct node {
  int value;
  struct node* left;
  struct node* right;
};


int sumTheTreeValues(struct node* root) {
  if(root == NULL) return 0;
  int left = sumTheTreeValues(root->left);
  int right = sumTheTreeValues(root->right);
  return left + right + root->value;
}
