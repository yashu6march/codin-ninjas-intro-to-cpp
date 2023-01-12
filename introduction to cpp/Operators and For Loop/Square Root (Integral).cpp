/*
Given a number N, find its square root. You need to find and print only the integral part of square root of N.
For eg. if number given is 18, answer is 4.
Input format :
Integer N
Output Format :
Square root of N (integer part only)
Constraints :
0 <= N <= 10^8
Sample Input 1 :
10
Sample Output 1 :
3
Sample Input 2 :
4
Sample Output 2 :
2
*/

#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int ans=1;
    if(n==0){
        cout<<0;
    }
    for(int i=1; i<=n; i++){
        ans = i*i;
        
        if (ans==n){
            cout<<i;
            break;
        }else if(ans>n){
            cout<<i-1;
            break;
        }
    }
}