#include<iostream>
#include"findMedian.h"
using namespace std;
int main() {
    int arr[]={6,46,75,38,3,74,56,8,9,55,73};
    int ar[]={46,75,38,3,74,56,8,9,60,73};
    int len=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<len;i++) cout << arr[i] << " ";
    cout << endl << findMedian(arr,len) << endl;
    return 0;
}
