
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


const double PI = acos(-1);


#define PB push_back
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (abs(a*b)/gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx_size = 1e5+123;

vector<int>adj[mx_size];



int main()
{
    /*


    */

    int numOfVertex,numOfEdge;
    cout<< " enter Num of node and edge"<<endl;

    cin>>numOfVertex>>numOfEdge;
    cout<<"enter all edge"<<endl;

    for (int i=1; i<=numOfEdge;i++ )
    {
        int u,v;
        cin>>v>>u;
        adj[v].push_back(u);
        adj[u].push_back(v);

    }


    for (int i=1; i<=numOfVertex;i++ )
    {
        cout<< "The adjecency list of "<< i<<endl;
        for(auto m: adj[i]) cout<< m<< " -->";
            cout<<endl;
    }







return 0;
}
