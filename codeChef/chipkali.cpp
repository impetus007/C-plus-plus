#include<bits/stdc++.h>
using namespace std;
int main(){



string s,t="";
cin>>s;
int n=s.length();

int k=3 ;cin>>k;
for(int i=0;i<k;i++)
{
    s+=s;

}

for(int i=0;i<n;i++)
{
    int x=s[i]-'0';
    if(x%2==0)
    {
        s[i]=s[i+k];
       // t+=s[i];
    }
}

for(int i=0;i<n;i++)
{
  cout<<s[i];
}


}