#include <iostream>
#include <cstdio>

int main() {
    
  int ll, cc;
  std::cout << "Enter the number of rows: ";
  std::cin >> ll;
  std::cout << "Enter the number of columns: ";
  std::cin >> cc;

  int** matEnd = new int*[ll];
  for (int i = 0; i < ll; i++) {
    matEnd[i] = new int[cc];
  }

  for (int i = 0; i < ll; i++) {
    for (int j = 0; j < cc; j++) {
      std::cout << "Enter value at position [" << i << ", " << j << "]: ";
      std::cin >> matEnd[i][j];
    }
  }

  if (ll == cc) {
    std::cout << "The matrix is square." << std::endl;
  }
  else {
    std::cout << "The matrix is not square." << std::endl;
  }

  for (int i = 0; i < ll; i++) {
    for (int j = 0; j < cc; j++) {
      std::cout << matEnd[i][j] << " ";
    }
    std::cout << std::endl;
  }

  for (int i = 0; i < ll; i++) {
    delete[] matEnd[i];
  }
  delete[] matEnd;

  return 0;
}
