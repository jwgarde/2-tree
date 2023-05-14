#pragma once

typedef struct Node {
	int value;
	struct Node* left;
	struct Node* right;
} Node;

Node* makeTree();
void printPreorder(Node* root);
void printInorder(Node* root);
void printPostorder(Node* root);
Node* findNode(Node* root, int value);
Node* insertLeftNode(Node* where, Node* new_node);
Node* insertRightNode(Node* where, Node* new_node);
Node* createNode(int value);
