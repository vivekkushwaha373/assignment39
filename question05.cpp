#include<bits/stdc++.h>
using namespace std;
int main()
{
list<int>s={1,1,2,3,2,4,4,5,8,1};

s.unique();
 for(auto i=s.begin();i!=s.end();i++)
    cout<<*i<<" ";
    cout<<endl;
    return 0;
}