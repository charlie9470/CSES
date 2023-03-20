#include<iostream>
using namespace std;
int main(){
    int n;
    long long ans = 6;
    cin >> n;
    if(n==1){
        cout << 0 << endl;
        return 0;
    }
    else if(n==2){
        cout << 0 << endl << 6 << endl;
        return 0;
    }
    else{
        cout << 0 << endl << 6 << endl;
        for(long long i = 3;i<=n;i++){
            ans+=(2*i*i-3*i-1);
            ans+=((i-1)*(i-1)*(2*i-1)-(8*i-18));
            cout << ans << endl;
        }
        return 0;
    }
}
