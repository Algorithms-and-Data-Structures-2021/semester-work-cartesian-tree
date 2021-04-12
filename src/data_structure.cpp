#include "data_structure.hpp"
#include "iostream"
// файл с определениями

namespace itis {

  // здесь должны быть определения методов вашей структуры

  void CartesianTree::Insert(int new_key, int new_prior) {

    if(size_==0){
      auto *node = new Node(new_key,new_prior, nullptr, nullptr);
      root_ = node;
      size_++;
    }

    Node *current_node = root_;

    while (current_node->key != new_key){
      if (current_node->key > new_key && current_node->left == nullptr){
        current_node->left = new Node(new_key,new_prior, nullptr, nullptr);
        size_++;
      }
      if(current_node->key < new_key && current_node->right == nullptr){
        current_node->right = new Node(new_key,new_prior, nullptr, nullptr);
        size_++;
      }
      if (current_node->key > new_key){
        current_node = current_node->left;
      } else{
        current_node = current_node->right;
      }
    }
  }

  Node *CartesianTree::Search(int new_key) {

    Node *current_node = root_;

    while (current_node->key != new_key) {
      if (new_key < current_node->key) {
        current_node = current_node->left;
      }else{
        current_node = current_node->right;
      }
    }

    return current_node;
  }

  //  void CartesianTree::update(Node *t) {
  //    Node *node;
  //    t->size()=1+get_size()
  //  }

  int CartesianTree::get_size(CartesianTree *tree) {
    if (tree == nullptr) {
      return 0;
    }
    return tree->size();
    }




  void *CartesianTree::split(Node *tt, int key, Node *&tt1, Node *&t2) {
    if (tt == nullptr) {
      tt1 = t2 = nullptr;

      return tt1, t2;
    }
    if (tt->key < key) {
      split(tt->right, key, tt->right, t2);
      tt1 = tt;
    } else {
      split(tt->left, key, tt1, tt->left);
      t2 = tt;
    }

  }
  int CartesianTree::set_size(Node *node) {

    if (node== nullptr){
      return 0;
    } else{
      return (set_size(node->left)+1+set_size(node->right));
    }
//    int size=0;
//    if (node->left!= nullptr){
//      set_size(node->left);
//      size=size+1;
//    }
//    if (node->right!= nullptr){
//      set_size(node->right);
//      size=size+1;
//    }
//
//    return size;
  }


  Node *CartesianTree::merge(Node *t1, Node *t2) {
    if (t1 == nullptr) {
      return t2;
    }
    if (t2 == nullptr) {
      return t1;
    }
    if (t1->prior > t2->prior) {
      t1->right = merge(t1->right, t2);

      return t1;
    } else {
      t2->left = merge(t1, t2->left);
      return t2;
    }
  }



  void *CartesianTree::erase(Node *t, int key) {
   Node *less, *equal, *greater;
   split(root_,key,less,greater);
   split(greater,key+1,equal,greater);
   merge(less,greater);
  }



//  void *CartesianTree::erase(Node *t, int key) {
//    if (t->key == key)
//      merge (t->left, t->right);
//    else
//      erase (key < t->key ? t->left : t->right, key);
//  }

}  // namespace itis