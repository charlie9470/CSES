#include<iostream>
using namespace std;
int main(){
    int n;
    int pre,now;
    long long ans = 0;
    cin >> n;
    cin >> pre;
    while(cin >> now){
        if(now<pre){
            ans+=(pre-now);
            now = pre;
        }
        pre = now;
    }
    cout << ans << endl;
    return 0;
}
