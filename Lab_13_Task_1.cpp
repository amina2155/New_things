#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int array[10] = {6 , 8 , 10 , 12 , 14};
    set<int>s({ 1 , 3 , 5 , 7 , 9 });
    vector<int>v;
    merge(array, array + 5, s.begin(), s.end(), back_inserter(v));
    for (auto u : v)
    {
        cout << u << " ";
    }
}
