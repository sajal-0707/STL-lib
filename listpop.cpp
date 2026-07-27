#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>li;
    li.push_back(10);
    li.push_front(5);
    li.push_back(15);
    li.push_front(3);
    cout<<"Before popping = ";
    for(int val : li)
    {
        cout<<val<<" ";
    }
    li.pop_back();
    li.pop_front();
    cout<<"After popping = ";
    for(int val : li)
    {
        cout<<val<<" ";
    }
}
