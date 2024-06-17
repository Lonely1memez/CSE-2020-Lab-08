// lab08.cpp
//Name: Antonio Mora
//Date: 6/17/2024
//Description of project: To create a binary tree and traverse it
#include "treeTraversal.cpp"

BinaryNode<char>* create_binary_tree()
{
  BinaryNode<char>* node_A = new BinaryNode<char>('A');
  BinaryNode<char>* node_B = new BinaryNode<char>('B');
  BinaryNode<char>* node_C = new BinaryNode<char>('C'); 	
  BinaryNode<char>* node_D = new BinaryNode<char>('D');
  BinaryNode<char>* node_E = new BinaryNode<char>('E');

  node_A->left = node_B;
  node_A->right = node_C;
  node_B->left = node_D;
  node_B->right = node_E;

  return node_A;
}

BinaryNode<int>* create_binary_tree_int()
{
  BinaryNode<int>* node1 = new BinaryNode<int>(1);
  BinaryNode<int>* node2 = new BinaryNode<int>(2);
  BinaryNode<int>* node3 = new BinaryNode<int>(3);
  BinaryNode<int>* node4 = new BinaryNode<int>(4);
  BinaryNode<int>* node5 = new BinaryNode<int>(5);
  BinaryNode<int>* node6 = new BinaryNode<int>(6);
  BinaryNode<int>* node7 = new BinaryNode<int>(7);
  BinaryNode<int>* node9 = new BinaryNode<int>(9);
  BinaryNode<int>* node11 = new BinaryNode<int>(11);

  node1->left = node7;
  node1->right = node3;
  node7->left = node2;
  node7->right = node6;
  node3->right = node9;
  node6->left = node5;
  node6->right = node11;
  node9->left = node4;

  return node1;
}

int main()
{
  BinaryNode<char>* root = create_binary_tree();
  cout <<"preorder: ";
  preorder(root);
  cout << "\ninorder: ";
  inorder(root);
  cout << "\npostorder: ";
  postorder(root);

        BinaryNode<int>* root_int = create_binary_tree_int();
        cout << "\n\npreorder: ";
        preorder(root_int);
        cout << "\ninorder: ";
        inorder(root_int);
        cout << "\npostorder: ";
        postorder(root_int);
  return 0;
}