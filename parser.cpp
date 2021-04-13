#include <fstream>
#include "iostream"
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;
// string of separators
 int parser (){
  cout<< "FUUCK" <<endl;
  string path="H:\\Загрузки\\javatest1-master\\src\\com\\company\\Graph11\\Graph\\src\\com\\company\\Others\\data\\01";
ifstream fin;
fin.open(path);

if (!fin.is_open()){
  cout<< "FUUCK" <<endl;

} else{
  cout<< "YEAAH" <<endl;
 char  ch;
 while (!fin.eof()){
  string spliter=",";
  getline(fin,spliter);

 }
}
fin.close();


return 0;
}



















//static const string valid = ",";
//

//static bool isValid(char c) {
//  return (find(valid.begin(), valid.end(), c) != valid.end());
//}
//
//int main() {
//  // open your input/output files
//  ifstream inputf("./in.txt");
//  ofstream outf("./out.txt");
//  // save your input in a string
//  string file((istreambuf_iterator<char>(inputf)), (istreambuf_iterator<char>()));
//  int beg; // start of a number (index)
//  std::string nb;
//  // iterate over your string
//  for (int i = 0; i < file.size() ;) {
//    // while your char is an alpha char, do nothing
//    while (isdigit(file[i]) == false) ++i;
//    nb = "";
//    beg = i;
//    // search for a number
//    while (isdigit(file[i]) == true)
//      nb += file[i++];
//    // check if the current number can be saved in the output file
//    if (nb != "" && isValid(file[i]) && (beg == 0 || isValid(file[beg - 1])))
//      outf << nb << "\n";
//  }
//  inputf.close(); outf.close();
//}