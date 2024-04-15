#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream plik_we("input.txt");
  char a;
  int b;
  int c;
  int wynik;

  while (plik_we >> a >> b >> c) {
    switch (a) {
    case '+':
      wynik = b + c;
      cout << wynik << endl;
      break;
    case '-':
      wynik = b - c;
      cout << wynik << endl;
      break;
    case '*':
      wynik = b * c;
      cout << wynik << endl;
      break;
    case '/':
      wynik = b / c;
      cout << wynik << endl;
      break;
    case '%':
      wynik = b % c;
      cout << wynik << endl;
      break;
    }
  }

  return 0;
}
