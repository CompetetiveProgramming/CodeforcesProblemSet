#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  int i;
  cin >> i;
  int arr[i];
  int sum = 0;
  int arrsum = 0;
  for(int j = 1; j <= i; j++){
	  sum += j;
  }
  arr[0] = 0;
  for(int k = 1; k < i; k++){
	  cin >> arr[k];
	  arrsum += arr[k];
  }
  cout << sum - arrsum;

}
