#include <iostream>
#include "data_structure.hpp"
#include <ctime>
#include <chrono>
using namespace std;

int main() {

  //Проверка декартового дерева...
  const auto time_point_before = chrono::high_resolution_clock::now();



//  int k=0;
//  for (int i=0; i<1;i++){
//    k=k+1;
//  }
//  cout<<k<<endl;
//


  auto *node10 = new itis::Node(10,56, nullptr,nullptr);
  auto *node9 = new itis::Node(9,44, nullptr,nullptr);
  auto *node8 = new itis::Node(8,28, nullptr,nullptr);
  auto *node7 = new itis::Node(7,38, nullptr,nullptr);
  auto *node6 = new itis::Node(4,25, nullptr,nullptr);
  auto *node5 = new itis::Node(5,45, nullptr,nullptr);
  auto *node4 = new itis::Node(6,54, nullptr,nullptr);
  auto *node3 = new itis::Node(1,14, nullptr,nullptr);
  auto *node2 = new itis::Node(2,31, nullptr,nullptr);
  auto *node1 = new itis::Node(3,72, nullptr, nullptr);

  auto *cartesianTree = new itis::CartesianTree;
  auto *cartesianTreeA= new itis::CartesianTree;
  auto *cartesianTreeB= new itis::CartesianTree;


//  cout<<cartesianTreeA->root_<<" "<<cartesianTreeB->root_<<endl;



  cartesianTree->Insert(node1->key,node1->prior);
  cartesianTree->Insert(node2->key,node2->prior);
  cartesianTree->Insert(node3->key,node3->prior);
  cartesianTree->Insert(node4->key,node4->prior);
  cartesianTree->Insert(node5->key,node5->prior);
  cartesianTree->Insert(node6->key,node6->prior);
  cartesianTree->Insert(node7->key,node7->prior);

//  cartesianTree->Search(5);
//  cartesianTree->erase(node1,5);

  const auto time_point_after = chrono::high_resolution_clock::now();

  // переводим время в наносекунды
  const auto time_diff = time_point_after - time_point_before;
  const long time_elapsed_ns = chrono::duration_cast<chrono::nanoseconds>(time_diff).count();

  cout << "Time elapsed (ns): " << time_elapsed_ns << '\n';
  //Проверка прошла успешна на 2-ух методах "Insert" и "Search".

  return 0;

 // cartesianTree->split(cartesianTree->root_,5,cartesianTreeA->root_,cartesianTreeB->root_);
         //проверка split прошла успешно

//cartesianTree->merge(cartesianTreeA->root_,cartesianTreeB->root_);
         //проверка merge прошла успешно


//  cartesianTree->set_size(cartesianTree->root_);
         //проверка set_size прошла успешно

  cartesianTree->erase(node1,1);

 //return cartesianTree->get_size(cartesianTree);
}