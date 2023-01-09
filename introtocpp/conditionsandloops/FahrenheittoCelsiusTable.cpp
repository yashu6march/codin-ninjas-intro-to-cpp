/*

Fahrenheit to Celsius Table
Send Feedback
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
Input Format :
3 integers - S, E and W respectively 
Output Format :
Fahrenheit to Celsius conversion table. One line for every Fahrenheit and corresponding Celsius value in integer form. The Fahrenheit value and its corresponding Celsius value should be separate by single space.
Constraints :
0 <= S <= 90
S <= E <=  900
0 <= W <= 80 
Sample Input 1:
0 
100 
20
*/

#include<iostream> 
using namespace std;
int main(){
    int s;
    int e;
    int w;
    int c;

    cin>>s;
    cin>>e;
    cin>>w;
     
    while (s<=e){
       
        c = ((5*(s-32))/9);

        cout<<s<<" "<<c<<endl;
        s = s+w;
    } 
    return 0;
}

