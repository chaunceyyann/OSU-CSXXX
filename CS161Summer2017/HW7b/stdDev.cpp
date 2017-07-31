#include<iostream>
#include<algorithm>
using namespace std;
int findMedian(int *a, int n){
    sort(a, a+n);
    cout << endl;
    for (int i=0;i<n;i++) cout << a[i] << " ";
    if (n%2==0){    // even number
        return (a[n/2]+a[n/2-1])/2;
    }
    else{
        return a[n/2];
    }
}


