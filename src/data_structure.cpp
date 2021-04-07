#include "data_structure.hpp"

// файл с определениями

namespace itis {

  // здесь должны быть определения методов вашей структуры

  void CartesianTree::Insert(int new_key, int new_prior) {

    Node *current_tree = new Node(new_key, new_prior, nullptr, nullptr);

    Node *left = current_tree->left;
    Node *right = current_tree->right;

    split(current_tree, new_key, right, left);

    merge(merge(left, current_tree), right);

    size_++;
  }

  Node *CartesianTree::Search(int new_key) {

    Node *current_node = root;

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

  int CartesianTree::get_size(CartesianTree *t) {
    if (t == nullptr) {
      return 0;
    }
    return t->size();
  }

  void *CartesianTree::split(Node *t, int key, Node *t1, Node *t2) {
    if (t == nullptr) {
      t1 = t2 = nullptr;
      return t1, t2;
    }
    if (t->key < key) {
      split(t->right, key, t->right, t2);
      t1 = t;
    } else {
      split(t->left, key, t1, t->left);
      t2 = t;
    }
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
    if (t->key == key)
      merge (t->left, t->right);
    else
      erase (key < t->key ? t->left : t->right, key);
  }
}  // namespace itis