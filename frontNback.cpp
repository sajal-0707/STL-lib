#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(54);
    vec.push_back(23);
    vec.push_back(6);
    vec.push_back(89);
    vec.push_back(25);
    cout<<"vector at front = "<<vec.front()<<endl;//gives forst element
    cout<<"vector at back = "<<vec.back(); //gives last element
}