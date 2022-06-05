#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<int, int> map;
    map[1] = 5;
    cout << map.find(1) << "\n";
}