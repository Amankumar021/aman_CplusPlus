#include<iostream>
#include<cmath>
/*
Fitness
Chef wants to become fit for which he decided to walk to the office and return home by walking. It is known that Chef's office is 
X
X km away from his home.

If his office is open on 
5
5 days in a week, find the number of kilometers Chef travels through office trips in a week.

Input Format
First line will contain 
T
T, number of test cases. Then the test cases follow.
Each test case contains of a single line consisting of single integer 
X
X.
Output Format
For each test case, output the number of kilometers Chef travels through office trips in a week.

Constraints

1≤T≤10
1≤X≤10

input = 4,1,3,7,10
output = 10,30,70,100
*/

using namespace std;

int main(){
    int t;
    cin >>t;

    while (t--)
    {
        int x;
        cin >> x;
        int totalDistance = 10*x;
        cout << totalDistance << endl;
    }
    return 0;
}