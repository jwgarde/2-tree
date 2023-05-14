#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "tree.h"


int main(int argc, char* argv[])
{

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
        printInorder(root);
    }
    else {
        printf("200�� ������ ��带 ã�� �� �����ϴ�.\n");
    }

    deleteTree(root);

    return 0;
}
