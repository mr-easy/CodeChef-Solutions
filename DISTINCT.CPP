#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        set<string> st;
        while(n--) {
            string s;
            cin>>s;
            st.insert(s);
        }
        cout<<st.size()<<"\n";
        for(set<string>::iterator it = st.begin(); it != st.end(); ++it) {
            cout<<*(it)<<"\n";
        }
    }
    return 0;
}
