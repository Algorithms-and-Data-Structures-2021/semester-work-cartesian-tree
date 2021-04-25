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
    Node *root_{nullptr};


    // Tip 2: На начальном этапе разработки структуры данных можете определения методов задавать в
    // заголовочном файле, как только работа будет завершена, можно будет оставить здесь только объявления.

   //метод "split" - разделение дерева на два по вершине
    void  *split(Node *tt, int key, Node *&t1, Node *&t2);

   // метод "set_size" - установление нового размера дерева
    int  set_size(Node *node);

    // метод "get_size" - получение размера дерева
    int get_size(CartesianTree *tree);

    // метод "merge" - отвечает за слияние двух деревьев.
    Node *merge(Node *t1, Node *t2);

    // метод "Insert" - отвечает за добавление элемента к дереву.
    void Insert(int new_key,int new_prior);

    // метод "Search" - отвечает за поиска элемента по ключу.
    Node *Search(int new_key);

    int size() const {
      return size_;
    }

    // метод "erase" - операция удаление вершины из дерева
    void *erase(Node *t, int key);

  };

}