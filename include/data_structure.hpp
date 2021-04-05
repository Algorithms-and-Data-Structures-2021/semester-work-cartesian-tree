#pragma once

// Заголовочный файл с объявлением структуры данных

namespace itis {

  // Tip 1: объявите здесь необходимые структуры, функции, константы и прочее

  //Объявление класса "Node" и иницилизация переменных

  struct Node {
    //поля структуры
    int key;
    int prior;

    Node(int _key, int _prior) {
      this->key = _key;
      this->prior = _prior;
    }
  };

  //Объявление класса "CartesianTrees" и иницилизация переменных

  struct CartesianTree {
   public:
    //поля структуры
    int size_{0};
    Node *tree_root{nullptr};
    Node *left{nullptr};
    Node *right{nullptr};

    // Tip 2: На начальном этапе разработки структуры данных можете определения методов задавать в
    // заголовочном файле, как только работа будет завершена, можно будет оставить здесь только объявления.
    /**Добавление элемента в дерево
*
*/

    int size() const {
      return size_;
    }
  }
}