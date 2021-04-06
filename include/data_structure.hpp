#pragma once

// Заголовочный файл с объявлением структуры данных

namespace itis {

  // Tip 1: объявите здесь необходимые структуры, функции, константы и прочее

  //Объявление класса "Node" и иницилизация переменных

  struct Node {
    //поля структуры
   public:
    int key;
    int prior;
    Node *left;
    Node *right;

    //конструктор класса "вершина"
      Node(int _key, int _prior, Node *_left, Node *_right) {
      this->key = _key;
      this->prior = _prior;
      this->left = _left;
      this->right = _right;
    }
  };

  //Объявление класса "CartesianTrees" и иницилизация переменных

  struct CartesianTree {
   public:
    //поля структуры
    int size_{0};

    CartesianTree *t{nullptr};
    CartesianTree *t1{nullptr};
    CartesianTree *t2{nullptr};
    Node *root{nullptr};


    // Tip 2: На начальном этапе разработки структуры данных можете определения методов задавать в
    // заголовочном файле, как только работа будет завершена, можно будет оставить здесь только объявления.

    void  *split(Node *t, int key, Node *t1, Node *t2);
    //  void update(Node *t);
    int get_size(CartesianTree *t);

    Node *merge(Node *t1, Node *t2);

    // метод "Insert" - отвечает за добавление элемента к дереву.
    void Insert(int new_key,int new_prior);

    // метод "Search" - отвечает за поиска элемента по ключу.
    Node *Search(int new_key);

    int size() const {
      return size_;
    }

  };

}