/*
Given an array of length N, you need to find and print the sum of all elements of the array.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Sum
Constraints :
1 <= N <= 10^6
Sample Input :
3
9 8 9
Sample Output :
26
*/

#include<iostream>
using namespace std;
int main(){

  int n;
  cin>>n;
  int b[1000000];
int i=0;
  while(i<n){
    cin>>b[i];
    i++;
  }

  int sum=0;
  int s=0;
  while(s<n){
    sum = sum +b[s];
    s++;
  }
  cout<<sum;
}