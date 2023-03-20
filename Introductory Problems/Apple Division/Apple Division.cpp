#include<iostream>
#include<set>
#include<vector>
#include<iterator>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    int n;
    set<int> S;
    cin >> n;
    for(int i = 0;i<n;i++){
        int tmp;
        cin >> tmp;
        set<int>::iterator it = S.find(tmp);
        if(it!=S.end()) S.erase(it);
        else S.insert(tmp);
    }
    if(S.empty()){cout << 0 << endl;return 0;}
    if(S.size()==1) {cout << *(S.begin()) << endl;return 0;}
    set<long long> S1{*(S.begin())};
    set<long long> S2;
    long long ans = INT_MAX;
    bool update = false;
    set<int>::iterator i = S.begin();
    i++;
    for(;i!=S.end();i++){
        if(next(i)==S.end()) update = true;
        set<long long>& to_add = S1.empty()?S1:S2;
        set<long long>& from = S1.empty()?S2:S1;
        for(set<long long>::iterator x = from.begin();x!=from.end();x++){
            long long AD = abs(*(x)+*(i));
            to_add.insert(AD);
            if(update) ans = min(ans,AD);
            AD = abs(*(x)-*(i));
            to_add.insert(AD);
            if(update) ans = min(ans,AD);
        }
        from.clear();
    }
    cout << ans << endl;
    return 0;
}
