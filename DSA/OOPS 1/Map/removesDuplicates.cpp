#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

vector<int> removeDuplicates(int *a, int size)
{
    vector<int> output;
    unordered_map<int, bool> map;
    for (int i = 0; i < size; i++)
    {
        if (map.count(a[i]) > 0)
        {
            continue;
        }
        map[a[i]] = true;
        output.push_back(a[i]);
    }
    return output;
}
int main()
{
    int a[] = {1, 2, 3, 2, 1, 3, 5, 6, 4, 3, 32, 1, 11};
    vector<int> output = removeDuplicates(a, 13);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << endl;
    }
}