/*
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
Sample Input 2 :
111
Sample Output 2 :
7
*/

#include <iostream>
using namespace std;
int main() {

  int n;
  cin >> n;
  int pl = 1;
  int ans = 0;
  for (int i = 1; 0 < n; i++) {

    int rem = n % 10;

    ans = ans + pl * rem;
    pl = 2 * pl;
    n = n / 10;
  }
  cout << ans;
}