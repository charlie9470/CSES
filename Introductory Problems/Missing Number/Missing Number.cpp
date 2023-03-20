#include<iostream>
using namespace std;
int main(){
    long x;
    long ans;
    int tmp;
    cin >> x;
    ans = (1+x)*x/2;
    while(cin >> tmp){
        ans-=tmp;
    }
    cout << ans << endl;
    return 0;
}
