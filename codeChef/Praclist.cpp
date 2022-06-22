// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int n;
//     cin >> n;
//     if ((n & 1) != 1)
//     {
//         cout << "n is even'\n";
//     }
//     else
//     {
//         cout << "n is odd\n";
//     }
//     return 0;
// }


if(arr[i]>arr[j]){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}