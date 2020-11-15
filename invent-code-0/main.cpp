#include <iostream>
#include <string>
using namespace std;

struct Point {
  int x;
  int y;
};

void PointStruct (val) {
  cout << "x-value: ";
  cin >> val.x;
  cout << val.x;
  cout << "y-value: ";
  cin >> val.y;
}

void PointStructPrint (val) {
  cout << "Final Coordinate: (" << val.x << ", " << val.y << ")" << endl;
}

int main() {
  Point my_point;
  PointStruct(my_point);
  PointStructPrint(my_point);
  return 0;
}
