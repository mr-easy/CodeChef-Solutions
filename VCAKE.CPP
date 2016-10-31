#include <iostream>
using namespace std;
int main() {
	int cases;
	cin>>cases;
	while(cases--)
    {
        long long r,c,m,k,j;
        cin>>r>>c>>m>>k>>j;
        if(r*c != (m+k+j)){
            cout<<"No"<<endl;
        }else{
            bool isPoss = false;
            if(m%r==0){
                long long lf = c - m/r;
                if(lf>0 && ((j%lf==0 && k%lf==0) || (j%r==0 && k%r==0))){
                    isPoss = true;
                }
            }
            if(k%r==0){
                long long lf = c - k/r;
                if(lf>0 && ((j%lf==0 && m%lf==0) || (j%r==0 && m%r==0))){
                    isPoss = true;
                }
            }
            if(j%r==0){
                long long lf = c - j/r;
                if(lf>0 && ((m%lf==0 && k%lf==0) || (m%r==0 && k%r==0))){
                    isPoss = true;
                }
            }
            if(m%c==0){
                long long lf = r - m/c;
                if(lf>0 && ((j%lf==0 && k%lf==0) || (j%c==0 && k%c==0))){
                    isPoss = true;
                }
            }
            if(k%c==0){
                long long lf = r - k/c;
                if(lf>0 && ((j%lf==0 && m%lf==0) || (j%c==0 && m%c==0))){
                    isPoss = true;
                }
            }
            if(j%c==0){
                long long lf = r - j/c;
                if(lf>0 && ((m%lf==0 && k%lf==0) || (m%c==0 && k%c==0))){
                    isPoss = true;
                }
            }
            if(isPoss){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
	return 0;
}
