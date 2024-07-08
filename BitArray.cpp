#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned int N,S,P,Q;
    cin >> N >> S >> P >> Q;

    const int modulusN = 1<<31;
    vector<int> a(N);
    //a.push_back(S % modulusN);
    a[0] = S & modulusN;
    std::unordered_set<int> distinctNumbers;
    distinctNumbers.insert(a[0]);
    
    for(int i = 1; i < N ; i++)
    {
        a[i] = (1LL * a[i-1] * P + Q) % modulusN;
        distinctNumbers.insert(a[i]);
    }
    
    cout << distinctNumbers.size() << endl;
    
    return 0;
}