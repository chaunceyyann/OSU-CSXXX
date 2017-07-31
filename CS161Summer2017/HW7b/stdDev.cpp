#include<cmath>
#include<iostream>
#include<string>
#include"Person.hpp"
using namespace std;

double stdDev(Person g[],int sz)
{
    int sum=0;
    double mean, standardDeviation = 0.0;
    cout<<"\nPerson details:";
    for(int i=0;i<sz;i++)
    {
        g[i].getName();
        sum+=g[i].getAge();
    }
    mean=sum/sz;
    for(int k=0; k<sz; ++k)
        standardDeviation += pow(g[k].getAge() - mean, 2);
    return sqrt(standardDeviation / sz);
}
int main()
{
    int n;
    string x;
    double y;
    cout<<"\nEnter number of person: ";
    cin>>n;
    Person g[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter person name:";
        cin>>x;
        cout<"\nEnter Person age: ";
        cin>>y;
        g[i]=Person(x,y);
    }
    cout<<"\nStandard deviation: "<<stdDev(g,n)<<endl;

    return 0;
}
