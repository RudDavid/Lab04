/****************************
 * Автор:       Руднев Д.А. *
 * Дата:        02.10.2025  *
 * Название:    Вариант 11  *
 * **************************/

#include <iostream>
#include <cmath>

using namespace std;

const int indexM = 100, indexN = 100;

int main() {
  double t[indexM][indexN];
  // Столбец
  double column;
  // Строка
  double line;
  int indexLine;
  int indexColumn;

  cout << "Enter number of lines: ";
  cin >> column;
  cout << "Enter number of column: ";
  cin >> line;
  cout << "Enter elements = " << endl;
  for (indexLine = 0; indexLine < line; ++indexLine) {
    for (indexColumn = 0; indexColumn < column; ++indexColumn) {
      cin >> t[indexLine][indexColumn];
    }
  }
  for (indexLine = 0; indexLine < line; ++indexLine) {
    for (indexColumn = 0; indexColumn < column; ++indexColumn) {
      if (t[indexLine][indexColumn] < 0) {
        t[indexLine][indexColumn] = 0;
      }
    }
  }
  
  cout << "Original matrix" << endl;
  for (indexLine = 0; indexLine < line; ++indexLine) {
    for (indexColumn = 0; indexColumn < column; ++indexColumn) {
      cout << t[indexLine][indexColumn] << " ";
    }
    cout << endl;
  }

  return 0;

}
