#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> li;
    li.push_back(10);//element inserts from last
    li.push_front(5);//element inserts feom front
    for(int val : li)
    {
        cout<< val <<endl;//lis does not support li[i] access
    }
}