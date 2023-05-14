
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tree.h"

void printPreorder(Node* root) {
	if (root == NULL)
		return;
	printf("Node: %d, ", root->value);
	printPreorder(root->left);
	printPreorder(root->right);
}
void printInorder(Node* root) {
	if (root == NULL)
		return;
	printInorder(root->left);
	printf("Node: %d, ", root->value);
	printInorder(root->right);
}
void printPostorder(Node* root) {
	if (root == NULL)
		return;
	printPostorder(root->left);
	printPostorder(root->right);
	printf("Node: %d, ", root->value);
}
Node* findNode(Node* root, int value) {
	if (root == NULL || root->value == value)
		return root;
	Node* left = findNode(root->left, value);
	if (left != NULL)
		return left;

	return findNode(root->right, value);

}
Node* insertLeftNode(Node* where, Node* new_node) {
	if (where == NULL)
		return NULL;
	new_node->left = where->left;
	where->left = new_node;

	return where;
}
Node* insertRightNode(Node* where, Node* new_node) {
	if (where == NULL)
		return NULL;
	new_node->right = where->right;
	where->right = new_node;

	return where;
}
void deleteTree(Node* root) {
	if (root == NULL) {
		return;
	}
	deleteTree(root->left);
	deleteTree(root->right);
	free(root);
}

Node* createNode(int value) {
	
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->value = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}

Node* makeTree() {
	Node* root = createNode(100);
	root->left = createNode(200);
	root->right = createNode(300);
	root->right->left = createNode(400);
	root->right->right = createNode(500);
	return root;
}