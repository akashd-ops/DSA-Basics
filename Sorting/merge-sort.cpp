#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
int counter = 0;
vector<int> mergesort( vector<int> a)
{ 
    int n = a.size();
    if(n==1)
    return a;
    else
    {
       vector<int> firsthalf, secondhalf;
       for(int i=0; i<n/2; i++)
       {
        firsthalf.push_back(a[i]);
       }
       for(int i=n/2; i<n; i++)
       {
        secondhalf.push_back(a[i]);
       }
       vector<int> h1,h2;
       h1 = mergesort(firsthalf);
       h2 = mergesort(secondhalf);
       vector<int> answer;
       int n1 = firsthalf.size();
       int n2 = secondhalf.size();
       int a=0,b=0;
       while( a<n1 && b<n2)
       {
        if(a==n1 || b==n2)
        break;
       if(h1[a] > h2[b])
       {
           answer.push_back(h2[b]);
           b++;
       }
       else
       {
        answer.push_back(h1[a]);
        a++;
       }
    }
    if (a==n1 && b<n2)
    {
        for(int i = b; i<n2;i++)
        {
            answer.push_back(h2[i]);
        }
    }
    else if(b==n2 && a<n1)
    {
        for(int i = a; i<n1;i++)
        {
            answer.push_back(h1[i]);
        }
    }
    return answer;
    }
}
int main()
{
      int n;
      cin>>n;
      vector<int> a;
      for(int i=0; i<n;i++)
      {
        int x;
        cin>>x;
        a.push_back(x);
      }
    ans = mergesort(a);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
 return 0;
}
