#include<bits/stdc++.h>
using namespace std;
int main()
{
list<int>forwardlist1={3,2,9};
list<int>forwardlist2={8,1,2};
forwardlist1.sort();
forwardlist2.sort();
forwardlist1.merge(forwardlist2);
 for(auto i=forwardlist1.begin();i!=forwardlist1.end();i++)
    cout<<*i<<" ";
    cout<<endl;
    return 0;
}