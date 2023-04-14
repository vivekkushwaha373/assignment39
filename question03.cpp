#include<bits/stdc++.h>
using namespace std;
int main()
{
list<int>s;
for(int i=0;i<10;i++)
s.push_front(i+1);
// s.reverse();
 for(auto i=s.begin();i!=s.end();i++)
    cout<<*i<<" ";
    cout<<endl;
    return 0;
}