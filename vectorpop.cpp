#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
     vec.push_back(1);
     vec.push_back(2);
     vec.push_back(3);
     vec.push_back(4);
     vec.push_back(5);
     cout<<"size before using pop_back = "<<vec.size()<<endl;
     cout<<"capacity before using pop_back = "<<vec.capacity()<<endl;
     vec.pop_back();
     cout<<"size after using pop_back = "<<vec.size()<<endl;
     cout<<"capacity after using pop_back = "<<vec.capacity()<<endl;//after popping size decreses but capacity remains same
}