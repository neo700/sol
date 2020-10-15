#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int profit(int prices[], int n)
{
    int pro = 0;

    for(int i=1; i<n; i++)
    {
        if(prices[i] > prices[i-1])
        {
            pro += (prices[i]-prices[i-1]);
        }
    }
    return pro;
}

//yeahhhh
int main()
{

    int n;
    cin>>n;
    int price[n];
    for(int i=0; i<n; i++)
    {
        cin>>price[i];
    }

    cout<< profit(price,n) <<endl;

    return 0;

}
