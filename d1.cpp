#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<long long> list1, list2;

  ifstream file("input.txt");

  long long n1, n2;
  while (file >> n1 >> n2) {
    list1.push_back(n1);
    list2.push_back(n2);
  }

  long long sum = 0;
  for (size_t i = 0; i < list1.size(); i++) {
    int count = 0;
    for (size_t j = 0; j < list2.size(); j++) {
      if (list1[i] == list2[j]) {
        count++;
      }
    }
    if (count) {
      sum += list1[i] * count;
    }
  }
  
  cout << sum;
}
