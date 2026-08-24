#include<iostream>
#include<queue>

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(50);
    q.push(60);
    q.push(70);

    cout << "Front Element: " << q.front() << endl; //10
    cout << "Back Element: " << q.back() << endl;   //70

    q.pop();
}