/*

Print the following pattern
Pattern for N = 4


The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input :
5
Sample Output :


The dots represent spaces.


*/

#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= n - i) {
      cout << " ";
      j++;
    }
    int c = i;
    int l = 1;
    while (l <= i) {
      cout << c;
      l++;
      c++;
    }
    cout << endl;
    i++;
  }
}