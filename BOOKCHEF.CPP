#include<iostream>
#include<algorithm>
#include<vector>
#define ll long int
using namespace std;
class post{
    public:
    ll f;
    ll p;
    string s;
    bool operator<(const post &a) const
    {
        return p > a.p;
    }
};
int main()
{
    ll n, m;
    cin>>n>>m;
    bool frnds[100001] = {false};
    ll f, p;
    string s;
    for(ll i = 0; i < n; i++)
    {
        cin>>f;
        frnds[f] = true;
    }
    vector<post> frPosts, posts;
    ll frp = 0, simpP = 0;
    for(ll i = 0; i < m; i++)
    {
        cin>>f>>p>>s;
        if(frnds[f])
        {
            post a;
            a.f = f;
            a.p = p;
            a.s = s;
            frPosts.push_back(a);
            frp++;
        }
        else
        {
            post a;
            a.f = f;
            a.p = p;
            a.s = s;
            posts.push_back(a);
            simpP++;
        }
    }
    sort(frPosts.begin(), frPosts.end());
    sort(posts.begin(), posts.end());
    for(vector<post>::iterator it = frPosts.begin(); it != frPosts.end(); ++it)
    {
        cout<<(*it).s<<"\n";
    }
    for(vector<post>::iterator it = posts.begin(); it != posts.end(); ++it)
    {
        cout<<(*it).s<<"\n";
    }
    return 0;
}
