#include<iostream>
using namespace std;
void Hanoi(int height,int from,int to){
    int other = 6-from-to;
    if(height==1){
        cout << from << " " << to << endl;
        return;
    }
    Hanoi(height-1,from,other);
    cout << from << " " << to << endl;
    Hanoi(height-1,other,to);
}
int main(){
    int n;
    cin >> n;
    int steps = 1;
    for(int i = 1;i<n;i++){
        steps = 2*steps+1;
    }
    cout << steps << endl;
    Hanoi(n,1,3);
    return 0;
}
