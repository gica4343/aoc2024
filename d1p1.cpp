#include <algorithm>
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

  sort(list1.begin(), list1.end());
  sort(list2.begin(), list2.end());

  long long sum = 0;
  for (size_t i = 0; i < list1.size(); i++) {
    sum += abs(list1[i] - list2[i]);
  }
  
  cout << sum;
}
