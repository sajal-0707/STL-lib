#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec={12,34,56,78,90};
    vec.erase(vec.begin()+2);//begin stays at 0th index so if you want to erase 2nd index do vec.begin()+2
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
}