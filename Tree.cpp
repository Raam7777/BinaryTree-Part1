#include <iostream>
#include <cstdlib>

#include "Tree.hpp"

using namespace std;


ariel::Tree::Tree(){
     T_root = NULL;
}

ariel::Tree::node* ariel::Tree::createLeaf(int i){

  node* new_node = new node;
  new_node->data = i;
  new_node->left = NULL;
  new_node->right = NULL;

  return new_node;
}

void ariel::Tree::insert(int i){
  // insert(i,T_root);
}

void ariel::Tree::insert(int i, node* ptr){
  // if(T_root == NULL){
  //   T_root = createLeaf(i);
  // }
  // else if(i < ptr->data){
  //   if(ptr->left != NULL){
  //     insert(i,ptr->left);
  //   }
  //   else{
  //     ptr->left = createLeaf(i);
  //   }
  // }
  // else if(i > ptr->data){
  //   if(ptr->right != NULL){
  //     insert(i,ptr->right);
  //   }
  //   else{
  //     ptr->right = createLeaf(i);
  //   }
  // }
  // else{
  //   cout << "The index" << i <<" has already been added to the tree\n";
  // }
}

void ariel::Tree::print(){
   // print(T_root);
}

void ariel::Tree::print(const struct node *ptr){
  // if(T_root != NULL){
  //   if(ptr->left != NULL)
  //     print(ptr->left);
  //   cout << ptr->data << " ";
  //   if(ptr->right != NULL)
  //     print(ptr->right);
  // }
  // else{
  //   cout << "The tree is empty\n";
  // }
 }

 int ariel::Tree::findSmallest(){
    // return findSmallest(T_root);
    return 0;
 }

int ariel::Tree::findSmallest(node* ptr){
  // if(T_root == NULL){
  //   cout << "The tree is empty\n";
  //   return -1000;
  // }
  // else{
  //   if(ptr->left != NULL){
  //     return findSmallest(ptr->left);
  //   }
  //   else{
  //     return  ptr->data;
  //   }
  // }
  return 0;
}


void ariel::Tree::remove(int i){
   // removeNode(i,T_root);
}

void ariel::Tree::removeNode(int i, struct node *ptr){
  // if(T_root != NULL){
  //   if(T_root->data = i){
  //     removeRootMatch();
  //   }
  //   else{
  //     if(i < ptr->data && ptr->left != NULL){
  //       ptr->left->data == i ? removeMatch(ptr, ptr->left, true) : removeNode(i, ptr->left);
  //     }
  //     else if(i > ptr->data && ptr->right != NULL){
  //       ptr->right->data == i ? removeMatch(ptr, ptr->right, true) : removeNode(i, ptr->right);
  //     }
  //     else{
  //       cout << "The data " << i << " was not found in the tree\n";
  //     }
  //   }
  // }
  // else{
  //   cout << "The tree is empty\n";
  // }
}

void ariel::Tree::removeRootMatch(){
  // if(T_root != NULL){
  //   node* delPtr = T_root;
  //   int rootData = T_root->data;
  //   int smallestData;
  //
  //   if(T_root->left == NULL && T_root->right == NULL){
  //     T_root = NULL;
  //     delete delPtr;
  //   }
  //   else if(T_root->left == NULL && T_root->right != NULL){
  //     T_root = T_root->right;
  //     delPtr->right = NULL;
  //     delete delPtr;
  //     cout << "The root node with data " << rootData << " wad deleted " <<
  //             "The new root contains data " << T_root->data << endl;
  //   }
  //   else if(T_root->left != NULL && T_root->right == NULL){
  //     T_root = T_root->left;
  //     delPtr->left = NULL;
  //     delete delPtr;
  //     cout << "The root node with data " << rootData << " wad deleted " <<
  //             "The new root contains data " << T_root->data << endl;
  //   }
  //   else{
  //     smallestData = findSmallest(T_root->right);
  //     removeNode(smallestData, T_root);
  //     T_root->data = smallestData;
  //     cout << "The root data containing key " << rootData <<
  //             " was overwritten with key " << T_root->data << endl;
  //   }
  // }
  // else{
  //   cout << "can not remove root, The tree is empty\n";
  // }
}


void ariel::Tree::removeMatch(node* parent, node* match, bool left){
  // if(T_root != NULL){
  //   node* delPtr;
  //   int matchData = match->data;
  //   int smallestData;
  //
  //   if(match->left == NULL && match->right == NULL){
  //     delPtr = match;
  //     left == true ? parent->left = NULL : parent->right =NULL;
  //     delete delPtr;
  //     cout << "The node containing data " << matchData << " was removed\n";
  //   }
  //   else if(match->left == NULL && match->right != NULL){
  //     left == true ? parent->left = match->right : parent->right = match->right;
  //     match->right = NULL;
  //     delPtr = match;
  //     delete delPtr;
  //     cout << "The node containing data " << matchData << " was removed\n";
  //   }
  //   else if(match->left != NULL && match->right == NULL){
  //     left == true ? parent->left = match->left : parent->right = match->left;
  //     match->left = NULL;
  //     delPtr = match;
  //     delete delPtr;
  //     cout << "The node containing data " << matchData << " was removed\n";
  //   }
  //   else{
  //     smallestData = findSmallest(match->right);
  //     removeNode(smallestData, match);
  //     match->data = smallestData;
  //   }
  // }
  // else{
  //   cout << "can not remove match. The tree is empty\n";
  // }
}
int ariel::Tree::size(){
  return 0;
}

bool ariel::Tree::contains(int i){
  return true;
}

int ariel::Tree::root(){
  return 0;
}

int ariel::Tree::parent(int i){
  return 0;
}

int ariel::Tree::left(int i){
  return 0;
}

int ariel::Tree::right(int i){
  return 0;
}
