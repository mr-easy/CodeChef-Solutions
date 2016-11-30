#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll tree[411113][26], n;
char s[111112];
void build(ll node, ll start, ll end)
{
	if(start == end)
    {
        for(int i = 0; i < 26; i++)
            tree[node][i] = 0;
        tree[node][s[start] - 'a']++;
    }
		/*
	if(start < 1 || end > n)
        return;*/
    else
	{
		ll mid = (start + end) / 2;
		build(2*node+1, start, mid);
		build(2*node+2, mid+1, end);
		for(int i = 0; i < 26; i++)
            tree[node][i] = tree[2*node+1][i] + tree[2*node+2][i];
	}
}
void update(ll node, ll start, ll end, ll idx, char val)
{
	if(start == end)
	{
		s[idx] = val;
		for(int i = 0; i < 26; i++)
            tree[node][i] = 0;
		tree[node][val-'a'] = 1;
		return;
	}/*
	if(start < 1 || end > n)
        return;*/
	ll mid = (start + end) /2;
	if(start <= idx && idx <= mid)
	{
		update(2*node+1, start, mid, idx, val);
	}
	else
	{
		update(2*node+2, mid+1, end, idx, val);
	}
	for(int i = 0; i < 26; i++)
        tree[node][i] = tree[2*node+1][i] + tree[2*node+2][i];
}
vector<ll> query(ll node, ll start, ll end, ll l, ll r)
{
    //cout<<"reached "<<node<<"\n";
	if(r < start || l > end || start < 0 || end >= n)
	{
	    vector<ll> a(26);
	    for(int i = 0; i < 26; i++)
            a[i] = 0;
		return a;
	}
	if(l <= start && r >= end)
	{
	    vector<ll> ans(26);
	    for(int i = 0; i < 26; i++)
            ans[i] = tree[node][i];
		return ans;
	}
	ll mid = (start + end) / 2;
	vector<ll> x(26);
	vector<ll> y(26);
	vector<ll> z(26);
	x = query(2*node+1, start, mid, l, r);
	y = query(2*node+2, mid+1, end, l, r);
	for(int i = 0; i < 26; i++)
    {
        z[i] = x[i] + y[i];
    }
    return z;
}
int main()
{
    ll q;
    scanf("%lld%lld", &n, &q);
    cin>>s;
    build(0, 0, n-1);
    /*
    for(int i = 0; i < 9; i++)
    {
        cout<<i<<" : ";
        for(int j = 0; j < 26; j++)
            cout<<tree[i][j]<<" ";
        cout<<endl;
    }*/
    ll l, r, c;
    char k;
    while(q--)
    {
        scanf("%lld", &c);
        if(c == 1)
        {
            scanf("%lld", &l);
            cin>>k;
            l--;
            update(0, 0, n-1, l, k);
        }
        else
        {
            scanf("%lld%lld", &l, &r);
            l--;r--;
            vector<ll> ans(26);
            ans = query(0, 0, n-1, l, r);
            bool flag = false;
            bool pos = true;
            for(int i = 0; i < 26; i++)
            {
                if(ans[i]%2 != 0)
                {
                    if(!flag)
                        flag = true;
                    else
                    {
                        pos = false;
                        break;
                    }
                }
            }
            if(pos)
                cout<<"yes\n";
            else
                cout<<"no\n";
        }/*
        for(int i = 0; i < 9; i++)
        {
            cout<<i<<" : ";
            for(int j = 0; j < 26; j++)
                cout<<tree[i][j]<<" ";
            cout<<endl;
        }*/
    }
    return 0;
}
