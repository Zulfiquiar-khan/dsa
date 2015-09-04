#include"LinkedBinaryTree.h"

void testCreateBinaryTree(){
    	node* binaryTree=createBinaryTree(7);
}

void testPreOrderTraversalRecursive(){
    node* root=createBinaryTree(7);
    printf("PreOreder : ");
    preOrderTraversalRecursive(root);
    printf("\n");
}

void testPreOrderTraversalIterative(){
    node* root=createBinaryTree(7);
    printf("PreOreder : ");
    preOrderTraversalIterative(root);
    printf("\n");
}


void testInOrderTraversalRecursive(){
    node* root=createBinaryTree(7);
    printf("PreOreder : ");
    inOrderTraversalRecursive(root);
    printf("\n");
}