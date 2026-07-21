#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec(5,10);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
}