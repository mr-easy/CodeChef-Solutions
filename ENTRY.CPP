#include<bits/stdc++.h>
#define ll long int
using namespace std;
ll n, q, lazy[2000001];
ll digits[2000001][10];
void build(ll node, ll start, ll end)
{
    //node is the node we are building. node's segment lies between [start, end]
    if(start == end)
    {
        //Leaf nodes will have a single element
        digits[node][0] = 1;
        for(int k = 1; k < 10; k++)
            digits[node][k] = 0;
    }
    else
    {
        ll mid = (start + end) / 2;
        //Recurse on the left child
        build(2*node, start, mid);
        //Recurse on the right child
        build(2*node+1, mid+1, end);
        digits[node][0] = digits[2*node][0] + digits[2*node+1][0];
    }
}
void updateRange(ll node, ll start, ll end, ll l, ll r)
{
    if(lazy[node] != 0)
    {
        //This node needs to be updated
        //update this node
        ll t[10];//temp variable
        for(int i = 0; i < 10; i++)
            t[i] = digits[node][i];
        ll z = lazy[node]%10;
        for(int i = 0; i < 10; i++)
            digits[node][(i+z)%10] = t[i];
        if(start != end)
        {
            //Mark both children as lazy
            lazy[2*node] += lazy[node];
            lazy[2*node+1] += lazy[node];
        }
        //reset lazy[node], since it has been updated
        lazy[node] = 0;
    }
    if(start > end || start > r || end < l || l > r)
        return;

    if(start >= l && end <= r)
    {
        //segment is fully within range

        ll t = digits[node][9];
        for(int i = 9; i > 0; i--)
            digits[node][i] = digits[node][i - 1];
        digits[node][0] = t;
        if(start != end)
        {
            //Not leaf node
            lazy[2*node]++;
            lazy[2*node+1]++;
        }

        return;
    }

    //If not a leaf node, recur for children
    ll mid = (start + end) / 2;
    updateRange(2*node, start, mid, l, r);
    updateRange(2*node+1, mid+1, end, l, r);
    //Use the result of children call to update this node
    for(int i = 0; i < 10; i++)
    {
        digits[node][i] = digits[2*node][i] + digits[2*node+1][i];
    }
    return;
}
ll query(ll node, ll start, ll end, ll l, ll r)//complexity -> O(logN)
{
    if(start > end || l > r)
        return 0;
    if(r < start || end < l)
    {
        //range represented by a node is completely outside the given range
        return 0;
    }
    if(lazy[node] != 0)
    {
        //This node needs to be updated
        //update this node
        ll t[10];//temp variable
        for(int i = 0; i < 10; i++)
            t[i] = digits[node][i];
        ll z = lazy[node]%10;
        for(int i = 0; i < 10; i++)
            digits[node][(i+z)%10] = t[i];
        if(start != end)
        {
            //Mark both children as lazy
            lazy[2*node] += lazy[node];
            lazy[2*node+1] += lazy[node];
        }
        //reset lazy[node], since it has been updated
        lazy[node] = 0;
    }
    if(l <= start && end <= r)
    {
        //range represented by a node is completely inside the given range
        ll sum = 0;
        for(int i = 1; i < 10; i++)
            sum += (digits[node][i] * i);
        return sum;
    }
    //range represented by a node is partially inside and partially outside the given range
    ll mid = (start + end) / 2;
    ll p1 = query(2*node, start, mid, l, r);
    ll p2 = query(2*node+1, mid+1, end, l, r);
    return (p1 + p2);
}
int main()
{
    scanf("%ld%ld", &n, &q);
    for(ll i = 0; i < 2000001; i++)
        lazy[i] = 0;
    build(1, 1, n);
    /*
    for(ll i = 1; i < pow(2, n) + 1;i++)
    {
        int k = 0;
        for(int j = 0; j < 10; j++)
            k += digits[i][j]*j;

        cout<<k<<" ";
    }
        cout<<endl;
        */
    ll i, l, r;
    while(q--)
    {
        scanf("%ld%ld%ld", &i, &l,&r);
        if(i == 1)
        {
            updateRange(1, 1, n, l, r);
        }
        else
        {
            printf("%ld\n", query(1, 1, n, l, r));
        }
        /*
        //showPattern(1, 1, n);
        for(ll i = 1; i < pow(2, n) + 1;i++)
        {
            int k = 0;
            for(int j = 0; j < 10; j++)
                k += digits[i][j]*j;

            cout<<k<<" ";
        }
        cout<<endl;*/
    }
    return 0;
}
