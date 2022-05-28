#include<iostream>
using namespace std;
int main() {
  char st[] = "ABCD";
  for(int i = 0; i<4; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  }
  cout << "it is so intresting";
  return 0;
}

