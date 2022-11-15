#include<iostream>
#include<vector>
using namespace std;

// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>

int main() {
    int a[]={7,8,4,5,1,2};
    int b[]={9,7,5,1,2,3,4};
    int a_size = 6,a1; // a1 =  a_size
    int b_size = 7,b1; // b1 = b_size

    a1 = a_size;
    b1 = b_size;
    int max,i=0,j=0;

    if(a1 > b1) max = b1;
    else max = a1;

    int ab[max];

    sort(a,a + 6);
    sort(b,b + 7);

    //-1,0,1,2,4,5
    //1,2,3,4,5,7,9

    while(1)
    { if(a[i] == b[j]) {ab[i] = a[i];i++; j++;}
      else if(a[i] > b[j]) j++;
      else if(a[i] < b[j]) i++;

      if(i==max || j==max) break; }

     // return ab[];
     for(int i=0;i<max;i++) cout<<ab[i]<<" ";
}
