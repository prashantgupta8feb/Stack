#include<bits/stdc++.h>
using namespace std;

void showstack(stack<int> i)
{
    while(!i.empty())
    {
        cout<<" "<<i.top()<<" ";
        i.pop();
    }
    cout<<endl;
}

int main()
{
    stack<int>s1,s2;
    s1.push(1);s1.push(1);s1.push(1);s1.push(1);s1.push(1);
    s2.push(2);s2.push(2);s2.push(2);s2.push(2);s2.push(2);
    showstack(s1);showstack(s2);
    s1.swap(s2);
    showstack(s1);showstack(s2);
    return 0;
}