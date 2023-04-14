#include<bits/stdc++.h>
using namespace std;
int  main()
{
    forward_list<int>s;
    for(int i=0;i<10;i++)
    s.push_front(i+1);
    for(auto i=s.begin();i!=s.end();i++)
    cout<<*i<<" ";
    cout<<endl;
    s.reverse();
    for(auto i=s.begin();i!=s.end();i++)
    cout<<*i<<" ";
    cout<<endl;
    s.erase_after(s.begin(),++++s.begin());
     for(auto i=s.begin();i!=s.end();i++)
    cout<<*i<<" ";
    cout<<endl;
    s.remove(1);
     for(auto i=s.begin();i!=s.end();i++)
    cout<<*i<<" ";
    cout<<endl;
    s.insert_after(s.begin(),6);
     for(auto i=s.begin();i!=s.end();i++)
    cout<<*i<<" ";
    cout<<endl;
    return 0;
}