#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define fo(i,n) for(int i = 0; i < n; ++i)

using namespace std;

int partition(item_type s[], int l, int h){
    int i;
    int p;
    int firsthigh;

    p = h;
    firsthigh = 1;
    fo(i,h){
        if(s[i] < s[p]){
            swap(&s[i], &s[firsthigh]);
            ++firsthigh;
        }
    }    
    swap(&s[p], &s[firsthigh]);
    return(firsthigh);
}

void quicksort(item_type s[], int l, int h){
    int p;
    if((h - l) > 0){
        p = partition(s, l, h);
        quicksort(s, l, p - 1);
        quicksort(s, p + 1, h);
    }
}