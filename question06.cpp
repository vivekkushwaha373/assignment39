#include<bits/stdc++.h>
using namespace std;
int main()
{
list<int>l1={1,2,3};
list<int>l2={4,5,6};
l1.merge(l2);

 for(auto i=l1.begin();i!=l1.end();i++)
    cout<<*i<<" ";
    cout<<endl;
    return 0;
}