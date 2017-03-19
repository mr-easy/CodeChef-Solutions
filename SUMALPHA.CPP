#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    while(n--) {
        string s;
        cin>>s;
        int l = s.size();
        int sum = 0;
        for(int i = 0; i < l; i++) {
            sum += (s[i] - 'a') % 5;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
