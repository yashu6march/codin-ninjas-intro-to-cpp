/*

Sum of Even Numbers till N
Send Feedback
Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum 
Sample Input 1 :
 6
Sample Output 1 :
12
*/

#include<iostream> 
using namespace std;
int main(){
	int n;
	cin>>n;

	int i=0;
	int sum=0;
	while(i<=n){
		sum=sum+i;
		i=i+2;
	}
	cout<<sum;
	return 0;
}