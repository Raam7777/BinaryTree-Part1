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
  // insert(i,root);
}

void ariel::Tree::insert(int i, node* ptr){
  // if(root == NULL){
  //   root = createLeaf(i);
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
  // print(root);
}

void ariel::Tree::print(const struct node *root){
//   if(root != NULL){
//     if(root->left != NULL)
//       print(root->left);
//     cout << root->data << " ";
//     if(root->right != NULL)
//       print(root->right);
//   }
//   else{
//     cout << "The tree is empty\n";
//   }
 }

 int ariel::Tree::findSmallest(){
//     return findSmallest(root);
 }

int ariel::Tree::findSmallest(node* ptr){
//   if(root == NULL){
//     cout << "The tree is empty\n";
//     return -1000;
//   }
//   else{
//     if(ptr->left != NULL){
//       return findSmallest(ptr->left);
//     }
//     else{
//       return  ptr->data;
//     }
//   }

}


void ariel::Tree::removeData(int i){
  // remove(i,root);
}

void ariel::Tree::remove(int i, struct node *ptr){
  // if(root != NULL){
  //   if(root->data = i){
  //     removeRootMatch();
  //   }
  //   else{
  //     if(i < ptr->data && ptr->left != NULL){
  //       ptr->left->data == i ? removeMatch(ptr, ptr->left, true) : remove(i, ptr->left);
  //     }
  //     else if(i > ptr->data && ptr->right != NULL){
  //       ptr->right->data == i ? removeMatch(ptr, ptr->right, true) : remove(i, ptr->right);
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
  // if(root != NULL){
  //   node* delPtr = root;
  //   int rootData = root->data;
  //   int smallestData;
  //
  //   if(root->left == NULL && root->right == NULL){
  //     root = NULL;
  //     delete delPtr;
  //   }
  //   else if(root->left == NULL && root->right != NULL){
  //     root = root->right;
  //     delPtr->right = NULL;
  //     delete delPtr;
  //     cout << "The root node with data " << rootData << " wad deleted " <<
  //             "The new root contains data " << root->data << endl;
  //   }
  //   else if(root->left != NULL && root->right == NULL){
  //     root = root->left;
  //     delPtr->left = NULL;
  //     delete delPtr;
  //     cout << "The root node with data " << rootData << " wad deleted " <<
  //             "The new root contains data " << root->data << endl;
  //   }
  //   else{
  //     smallestData = findSmallest(root->right);
  //     remove(smallestData, root);
  //     root->data = smallestData;
  //     cout << "The root data containing key " << rootData <<
  //             " was overwritten with key " << root->data << endl;
  //   }
  // }
  // else{
  //   cout << "can not remove root, The tree is empty\n";
  // }
}


void ariel::Tree::removeMatch(node* parent, node* match, bool left){
  // if(root != NULL){
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
  //     remove(smallestData, match);
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
