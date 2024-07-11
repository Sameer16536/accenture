// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int calculate(int r, int unit , int arr[],int n){
    //check if array is empty:
    if(n==0){
        return -1;
    }
    int totalFood = r * unit;
    int food = 0;
    int house = 0;
    
    //iterate through each house and increment the food value
    for(int i  = 0 ; i< n ; ++i){
        food = food + arr[i];
        if(food >= totalFood  ){
            break;
        }
        ++house;
    }
    
    //Even after going through each house there is not enough food 
    if(totalFood > food){
        return 0;
    }
    return house+1;
}

int main ()
{
  int r;
  cin >> r;
  int unit;
  cin >> unit;
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i)
    {
      cin >> arr[i];
    }
  cout << calculate (r, unit, arr, n);
  return 0;
}