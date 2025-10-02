/****************************
 * Автор:       Руднев Д.А. *
 * Дата:        02.10.2025  *
 * Название:    Вариант 11  *
 * **************************/

#include <iostream>
#include <cmath>

using namespace std;

const int m = 100, n = 100;

int main() {
  double t[m][n];
  // Столбец
  double column;
  // Строка
  double line;
  int indexI;
  int indexJ;

  cout << "Enter number of lines: ";
  cin >> column;
  cout << "Enter number of column: ";
  cin >> line;
  cout << "Enter elements = " << endl;
  for (indexI = 0; indexI < line; ++indexI) {
    for (indexJ = 0; indexJ < column; ++indexJ) {
      cin >> t[indexI][indexJ];
    }
  }
  for (indexI = 0; indexI < line; ++indexI) {
    for (indexJ = 0; indexJ < column; ++indexJ) {
      if (t[indexI][indexJ] < 0) {
        t[indexI][indexJ] = 0;
      }
    }
  }
  
  cout << "Original matrix" << endl;
  for (indexI = 0; indexI < line; ++indexI) {
    for (indexJ = 0; indexJ < column; ++indexJ) {
      cout << t[indexI][indexJ] << " ";
    }
    cout << endl;
  }

  return 0;
}