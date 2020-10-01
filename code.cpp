#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int limit[500000];
    int N,Q;
    string S;
    cin>>N;
    cin>>S;
    cin>>Q;
    int i;
    map<char,int>count;
    for(i=0;i<N;i++)
    {
        limit[i]=count[S[i]];
        count[s[i]]++;
    }
    for(i=0;i<Q;i++)
    {
        int x;
        cin>>x;
        cout<<limit[x-1]<<"\n";
    }
}

