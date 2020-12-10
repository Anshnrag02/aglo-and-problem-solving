#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q,a,b;
    set<int>s={2,3,4,5,6,9};
    cin>>q;
    for (int i=0;i<q; i++)
     {
        cin>>a>>b;
          if(a==1)
             s.insert(b);
           else if (a==2) 
             {
                set<int>::iterator itr=s.find(b);
                 if(itr!=s.end())
                 s.erase(b)  ;     
              } 
           else if (a==3)
           {
               set<int>::iterator itr=s.find(b);
                 if(itr!=s.end())
                   cout<<"yes"<<endl;
                 else
                   cout<<"no"<<endl;  
              
           }

      }
    return 0;
}



