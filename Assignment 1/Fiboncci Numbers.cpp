
#include <iostream>
using namespace std;
int main()
 {
  int  n;
int t1 = 0, t2 = 1;

int t3 = t1 + t2;

cout << "Enter the number of terms: ";
cin >> n;
cout << "enter fibonacci series: ";

cout<< t1 << t2;

for (int i = 3; i <= n; i++) {
    cout << t3;
    t1 = t2;
    t2 = t3;
    t3 = t1 + t2;
  }

  return 0;
}
