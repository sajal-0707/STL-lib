#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec={1,2,3,4,5};
    cout<<"Size before clearing = "<<vec.size()<<endl;
    cout<<"is empty? = "<<vec.empty()<<endl;
    vec.clear();
    cout<<"Size after clearing = "<<vec.size()<<endl;//clears the vector
    cout<<"is empty ? = "<<vec.empty();// 0 = false ; 1 = true
}