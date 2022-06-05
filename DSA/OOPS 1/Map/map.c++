#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> map;
    // insert
    pair<string, int> p("abc", 5);
    map.insert(p);
    map["def"] = 3;

    // find or access
    cout << map["abc"] << "\n";
    cout << map.at("def") << "\n";
    cout << map.at("abc") << "\n";
    cout << map["def"] << "\n";

    cout << "size :" << map.size() << endl;
    cout << map["ghi"] << endl;
    // cout << "value of ghi" << map["ghi"] << "\n";
    cout << "size:" << map.size() << endl;

    // check presence
    if (map.count("ghi") > 0)
    {
        cout << "ghi is present"
             << "\n";
    }

    // erase
    map.erase("ghi");
    
    cout << "size :" << map.size() << endl;
    if (map.count("ghi") > 0)
    {
        cout << "ghi is present"
             << "\n";
    }
    else
    {
        cout << "ghi is absent";
    }
}