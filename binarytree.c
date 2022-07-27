// Tree traversal in C

#include <stdio.h>
#include <stdlib.h>

struct node 
{
	  int item;
	  struct node* left;
	  struct node* right;
};

// Inorder traversal
void inorder(struct node* root) 
{
	  if (root == NULL) return;
	  inorder(root->left);
	  printf("%d \t", root->item);
	  inorder(root->right);
}

// preorderTraversal traversal
void preorder(struct node* root) 
{
	  if (root == NULL) return;
	  printf("%d \t", root->item);
	  preorder(root->left);
	  preorder(root->right);
}

// postorderTraversal traversal
void postorder(struct node* root) 
{
	  if (root == NULL) return;
	  postorder(root->left);
	  postorder(root->right);
	  printf("%d \t", root->item);
}

// Create a new Node
struct node* createNode(value) 
{
	  struct node* newNode = malloc(sizeof(struct node));
	  newNode->item = value;
	  newNode->left = NULL;
	  newNode->right = NULL;

	  return newNode;
}

// Insert on the left of the node
struct node* insertLeft(struct node* root, int value)
 {
	  root->left = createNode(value);
	  return root->left;
}

// Insert on the right of the node
struct node* insertRight(struct node* root, int value) 
{
	  root->right = createNode(value);
	  return root->right;
}

int main() 
{
	  struct node* root = createNode(1);
	  insertLeft(root, 12);
	  insertRight(root, 9);

	  insertLeft(root->left, 5);
	  insertRight(root->right, 6);

	  printf("Inorder traversal \n");
	  inorder(root);

	  printf("\nPreorder traversal \n");
	  preorder(root);

	  printf("\nPostorder traversal \n");
	  postorder(root);
	  
	  printf("\n");
}