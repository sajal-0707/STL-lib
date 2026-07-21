#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={12,34,56,78,90};
    vec.erase(vec.begin()+1,vec.begin()+3);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
}