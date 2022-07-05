/**
 * @file mostFrequentElement.cpp
 * most frequent elements in a array
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
int frequent(int *a, int n);
using namespace std;
int main(){
    //int a[] = {5, 9, 10, 3, 5, 9, 19, 12, 18, 9, 3, 12, 11};
    int n;
    cin >> n;
    int a[n];
    for(auto i = 0; i<n; i++){
        cin>> a[i];
    }
    int sizeOfArray = sizeof(a)/sizeof(a[0]);
    cout << frequent(a, sizeOfArray) << endl;

    return 0;
}

int frequent(int *a, int n){
    int i, j, max=0, count=0, highestElement;
    for(i=0; i<n; i++){
        count = 0;
        for(j=0; j<n; j++){
            if(a[i]==a[j]){
                count++;
                
            }
            if(count > max){
                
                    max = count;
                    highestElement = a[i];
                }
        }
    }
    return highestElement;
}