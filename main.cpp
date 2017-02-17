#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
typedef unsigned int uint;

bool compare (vector<float>& v1, vector<float>& v2, bool isOrderImportant = true) {
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
  vector<float> v1 = {2, 1, 3};
  vector<float> v2 = {1, 2, 3};
  cout << (compare(v1, v2)?"Vector contents are the same.":"Vector contents are not the same.") << endl;
  cout << (compare(v1, v2, false)?"Vector contents are the same.":"Vector contents are not the same.") << endl;
  return 0;
}
