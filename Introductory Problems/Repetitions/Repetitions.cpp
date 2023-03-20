#include<iostream>
using namespace std;
int main(){
    string in;
    cin >> in;
    int tmp = 0;
    int ans = 0;
    for(int i = 1;i<in.length();i++){
        if(in[i]==in[i-1]) {
            tmp++;
        }
        else{
            ans = max(ans,tmp+1);
            tmp = 0;
        }
    }
    ans = max(ans,tmp+1);
    cout << ans << endl;
    return 0;
}
