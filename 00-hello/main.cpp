#include <iostream>
#include <vector>

using namespace std;

int main() {

  cout << "Hello, World!" << endl;

  int v[] {1,2,3,4,5,6,7,8,9,10};

  for (int x : v) {
    cout << x << " ";
  }
  cout << endl;

  vector<int> vv {1,2,3};

  

  return 0;
}