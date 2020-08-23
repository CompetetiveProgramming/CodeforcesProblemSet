#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  long long i;
  cin >> i;
  int arr[i];
  long long sum = (i*(i+1))/2;
  long long arrsum = 0;
  //for(long long j = 1; j <= i; j++){
	//  sum += j;
  //}
  arr[0] = 0;
  for(long long k = 1; k < i; k++){
	  cin >> arr[k];
	  arrsum += arr[k];
  }
  cout << sum - arrsum;

}
