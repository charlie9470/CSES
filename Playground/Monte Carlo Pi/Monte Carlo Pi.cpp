#include<iostream>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<omp.h>
#include<vector>
using namespace std;
int main(){
    srand(time(NULL));
    int samples;
    float pi;
    vector<int> pos(4,0);
    int P = 0;
    cin >> samples;
    float x,y,d;
    #pragma omp parallel
    {
        int threadid = omp_get_thread_num();
        #pragma omp for num_threads(4)
        {
        for(int i = 0;i<samples;i++){
            x = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
            y = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
            d = sqrt(x*x+y*y);
            if(d<1) pos[threadid]++;
        }
        }
    }
    for(int i =0;i<4;i++){
        P+=pos[i];
    }
    pi = 4*float(P)/float(samples);
    cout << pi << endl;
    return 0;
}
