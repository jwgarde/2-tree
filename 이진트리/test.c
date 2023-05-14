#include <stdio.h>
#include "tree.h"

int main_2() {
   
    Node* root = makeTree();

    
    printf("���� ��ȸ: ");
    printPreorder(root);
    printf("\n");


    printf("���� ��ȸ: ");
    printInorder(root);
    printf("\n");

   
    printf("���� ��ȸ: ");
    printPostorder(root);
    printf("\n");


    int value = 200;
    Node* node = findNode(root, value);
    if (node != NULL) {
        printf("%d�� ������ ��带 ã�ҽ��ϴ�.\n", value);
    }
    else {
        printf("%d�� ������ ��带 ã�� ���߽��ϴ�.\n", value);
    }

  
    Node* newNode = createNode(600);
    Node* where = findNode(root, 200);
    if (where != NULL) {
        printf("200�� ������ ����� ���ʿ� ���ο� ��带 �����մϴ�.\n");
        insertLeftNode(where, newNode);
        printf("���� ��ȸ: ");
        printInorder(root);
        printf("\n");
    }
    else {
        printf("200�� ������ ��带 ã�� �� �����ϴ�.\n");
    }

    deleteTree(root);

    return 0;
}
