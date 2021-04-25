#include <iostream>
#include "data_structure.hpp"
#include <ctime>
#include <chrono>
#include <fstream>
#include "iostream"
#include <string>
#include <algorithm>
#include <sstream>
#include "vector"

using namespace std;


vector<int> split(const string& s, char delimiter) {
  vector<int> tokens;
  string token;
  istringstream tokenStream(s);
  while (getline(tokenStream, token, delimiter)) {
    tokens.push_back(stoi(token));
  }
  return tokens;
}


int benchmark() {
  cout<<"ss"<<endl;
  //
  ////ИЗМЕНИТЬ ПУТЬ К НАБОРАМ ДАННЫХ
  //
  //
  //
  //
  string path = "C:\\Repos\\12.csv";
  //
  ////ИЗМЕНИТЬ ПУТЬ К НАБОРАМ ДАННЫХ
  //
  //
  //
  //

  ifstream fin;
  fin.open(path);

  string line;
  vector<int> intValues;
  if (!fin.is_open()) {
    cout << "Error" << endl;

  } else {
    cout << "Success" << endl;

    ////заполнение массива чисел значениями из .csv файла
    while (getline(fin, line)) {

      intValues = split(line, ',');
    }

      vector<itis::Node> NodeValues;
      cout << intValues.size() << endl;

      ////создание вершин декартового дерева из массива чисел

      ////ДЛЯ КАЖДОГО НАБОРА ЧИСЕЛ МЕНЯТЬ РАНДОМАЙЗЕР
      //// для 100 элементов  -- rand() % 99 + 1)
      //// для 500 элементов  -- rand() % 499 + 1)
      //// для 1000 элементов  -- rand() % 999 + 1)
      //// ............................................
      //// для 5 000 000 элементов -- rand() % 4 999 999 + 1
      for (unsigned long i = 0; i < intValues.size() - 2; ++i) {

        NodeValues.push_back(*new itis::Node(intValues[static_cast<unsigned long>(rand() % 99 + 1)],
                                             intValues[static_cast<unsigned long>(rand() % 99 + 1)], nullptr,
                                             nullptr));
      }

      ////создание деревьев
      auto *cartesianTree = new itis::CartesianTree;


    auto *cartesianTreeA = new itis::CartesianTree;
    auto *cartesianTreeB = new itis::CartesianTree;

   //// cartesianTree->split(cartesianTree->root_, rand() % (смотреть строку 63)+ 1, cartesianTreeA->root_, cartesianTreeB->root_);
   /// Разделение дерева на два для операции merge



      ////ЗАПОЛНЕНИЕ ДЕРЕВА ВЕРШИНАМИ
      for (itis::Node node : NodeValues) {
        cartesianTree->Insert(node.key, node.prior);
      }



        /// НАЧАЛО ЗАМЕРА ВРЕМЕНИ
        const auto time_point_before = std::chrono::steady_clock::now();



     ////Замерять  операцию здесь

            ////cartesianTree->erase(cartesianTree->root_,intValues[static_cast<unsigned long>(rand() % (смотреть строку 63) + 1)]);
            /// Операция удаления



            //// cartesianTree->merge(cartesianTreeA->root_,cartesianTreeB->root_);
            /// Операция слияния(ПЕРЕД ЭТИМ РАЗДЕЛИТЬ ДЕРЕВО НА ДВА С ПОМОЩЬЮ SPLIT(Строка 83)



            ////cartesianTree->split(cartesianTree->root_, rand() % (смотреть строку 63)+ 1, cartesianTreeA->root_, cartesianTreeB->root_);
            ////Операция разделения



           //// cartesianTree->Search((rand() % (смотреть строку 63) + 1));
           ////Операция поиска вершины





        const auto time_point_after = std::chrono::steady_clock::now();
        ////КОНЕЦ ЗАМЕРА ВРЕМЕНИ


        const auto time_diff = time_point_after - time_point_before;


        const long time_elapsed_ns = chrono::duration_cast<chrono::nanoseconds>(time_diff).count();


        cout << "Time elapsed (ns): " << time_elapsed_ns << '\n';

    }

    fin.close();
    return 0;
  }
