#include <iostream>
#include <string>
using namespace std;

struct Fraction{
  int numerator;
  int denominator;
};

int main() {
  Fraction my_fraction;
  cin >> my_fraction.numerator; cin >> my_fraction.denominator;
  cout << my_fraction.numerator << " / " << my_fraction.denominator << endl;
}
