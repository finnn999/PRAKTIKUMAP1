#include <iostream>
using namespace std;
int main() {
    int X ;
    int Y ;
  cout << "masukan nilai x = ";
  cin >> X;
  cout << "masukan nilai y = ";
  cin >> Y;
  cout << "Sebelum ditukar, Nilai X = " << X << " Nilai Y ="<< Y << endl;
    int temp = X;
    X = Y;
    Y = temp;
  cout << "Setelah ditukar, Nilai X = " << X <<" Nilai Y = " << Y <<endl;

    return 0;
}