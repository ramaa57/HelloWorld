#include<iostream>

using namespace std;

void fibo(int n) {
   int f = 0, s = 1, t, i;
   for (i = 0; i < n; i++) {
      if (i == 0) {
        cout<<f;
        continue;
      }
      if (i == 1) {
        cout<<s;
        continue;
      }
      t = f + s;
      f = s;
      s = t;
      cout<<t;
   }
}

int main() {
  int n;
  cin>>n;
  cout<<fibo(n);
}
