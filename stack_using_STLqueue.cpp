#include<bits/stdc++.h>
#include<queue>
using namespace std;
void showqueue(queue<int>q)
{
    cout<<"Stack Elements :";
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main()
{
    queue<int>q1;
    q1.push(1);q1.push(2);q1.push(3);
    showqueue(q1);
    cout<<q1.front()<<endl;
    cout<<q1.back()<<endl;
    q1.pop();
    showqueue(q1);
    return 0;
}
