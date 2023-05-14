#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "tree.h"


int main(int argc, char* argv[])
{

    Node* root = makeTree();

    printf("전위 순회: ");
    printPreorder(root);
    printf("\n");

    printf("중위 순회: ");
    printInorder(root);
    printf("\n");


    printf("후위 순회: ");
    printPostorder(root);
    printf("\n");


    int value = 200;
    Node* node = findNode(root, value);
    if (node != NULL) {
        printf("%d를 가지는 노드를 찾았습니다.\n", value);
    }
    else {
        printf("%d를 가지는 노드를 찾지 못했습니다.\n", value);
    }


    Node* newNode = createNode(600);
    Node* where = findNode(root, 200);
    if (where != NULL) {
        printf("200을 가지는 노드의 왼쪽에 새로운 노드를 삽입합니다.\n");
        insertLeftNode(where, newNode);
        printInorder(root);
    }
    else {
        printf("200을 가지는 노드를 찾을 수 없습니다.\n");
    }

    deleteTree(root);

    return 0;
}
