/*
Program Name: Chef and Coke
Program Link: https://www.codechef.com/problems/COKE
@Author: Aman Saxena
*/

#include <bits/stdc++.h>
using namespace std;
int main(int argc, const char * argv[]) {
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,m,k,l,r;
        cin>>n>>m>>k>>l>>r;
        int temp=0;
        int kk=0;
        for(int i=0;i<n;i++)
        {
            int c,p;
            cin>>c>>p;
            if((c-m)>=(k+1))
            {
                c=c-m;
            }
            else if((c+m)<=(k-1))
            {
                c=c+m;
            }
            else{
                c=k;
            }
            
            if(kk==0 && c>=l && c<=r)
            {
                    temp=p;
                    kk=1;
                continue;
            }
            if(c>=l && c<=r  && temp>p)
            {
                
                temp=p;
                
            }
        }
        if(temp==0)
        {
            cout<<-1<<"\n";
        }
        else{
            cout<<temp<<"\n";
        }
    }
    return 0;
}
