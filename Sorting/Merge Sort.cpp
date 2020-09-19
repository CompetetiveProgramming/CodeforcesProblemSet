#include <iostream>
#include <bits/stdc++.h>

void merge(item_type s[], int low, int middle, int high){
    int i;
    queue buffer1, buffer2;
    init_queue(&buffer1);
    init_queue(&buffer2);

    for(i = low; i <= high; ++i)
    enqueue(&buffer1, s[i]);
    for(i = middle + 1; i <= high; ++i)
    enqueue(&buffer1, s[i]);

    i = low;
    while(!(empty_queue(&bufer1)) || empty_queue(&buffer2)){
        if(headq(&buffer1) <=  headq(&buffer2)){
            s[i++] = dequeue(&buffer1);
        }
        else{
            s[i++] = dequeue(&buffer2);
        }
    }
    while(!(empty(&buffer1))) s[i++] = dequeue(&buffer1);
    while(!(empty(&buffer2))) s[i++] = dequeue(&buffer2);
}

int mergesort(item_type s[], int low, int high){
    int i;
    int middle;

    if(low < high){
        middle = (low + high) / 2;
        mergesort(s, low, middle);
        mergesort(s, middle + 1, high);
        merge(s, low, middle, high);
    }
}