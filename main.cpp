#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;
typedef unsigned int uint;

template<class T>
bool compare (vector<T>& v1, vector<T>& v2, bool isOrderImportant = true) {
  if(v1.size() != v2.size()) {
    return false;
  }
  if(!isOrderImportant) {
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
  }
  for(uint i = 0; i < v1.size(); ++i) {
    if(v1[i] != v2[i]) {
      return false;
    }
  }
  return true;
}

int main(int argc, char* argv[]) {
  vector<uint> v1 = {1, 2, 3};
  vector<uint> v2 = {3, 2, 1};
  vector<string> v3 = {"2", "1", "lo"};
  vector<string> v4 = {"1", "2", "lo"};
  cout << (compare(v1, v2)?"Vector contents are the same.":"Vector contents are not the same.") << endl;
  cout << (compare(v1, v2, false)?"Vector contents are the same.":"Vector contents are not the same.") << endl;
  cout << (compare(v3, v4)?"Vector contents are the same.":"Vector contents are not the same.") << endl;
  cout << (compare(v3, v4, false)?"Vector contents are the same.":"Vector contents are not the same.") << endl;
  return 0;
}
