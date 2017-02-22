#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<long int> arr ;
    long int size,r,q;
    cin>>size;
    cin>>r;
    cin>>q;
    for(long int i=0;i<size;i++)
    {
        long int x;
        cin>>x;
        arr.push_back(x);
    }
   //O(n*r)
    /*for(long int j=0;j<r;j++){
        long int l = arr[size-1];
        for(long int i=size-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=l;
    }*/
    
    
   // 2nd Method O(n)
    int rot=r%size;
    for(long int i=0;i<q;i++)
    {
        long int a;
        cin>>a;
        if(a-rot>=0)
            cout<<arr[a-rot]<<endl;
        else
            cout<<arr[a-rot+size]<<endl;
    }
    /*It's just because in the '(rot-1)th' elements of the array you will have negative indexes, 
    causing errors or, even, segmentation error (as in test case 4). So, doing this, you add N to
    negative indexes to retrive the correct values from the former array, without rotating it at all
    
    or
    do
    cin>> arr[(i+r)%n];
    
    */
    /*for(long int i=0;i<q;i++)
    {
        long int a;
        cin>>a;
        cout<<arr[a]<<endl;    
    }*/
    return 0;
}
