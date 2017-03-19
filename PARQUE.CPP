#include <iostream>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int l = s.size();
        int mx = 0, cmx = 0;
        for(int i = 0; i < l; i++) {
            switch(s[i]){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                cmx++;
                mx = max(cmx, mx);
                break;
                default:
                cmx = 0;
            }
        }
        cout<<mx<<"\n";
    }
    return 0;
}
