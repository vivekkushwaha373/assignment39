#include<bits/stdc++.h>
using namespace std;
int main()
{
list<int>forwardlist1;
list<int>forwardlist2={8,1,2};
forwardlist1.assign(forwardlist2.begin(),forwardlist2.end());

 for(auto i=forwardlist1.begin();i!=forwardlist1.end();i++)
    cout<<*i<<" ";
    cout<<endl;
    return 0;
}