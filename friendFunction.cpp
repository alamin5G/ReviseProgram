/**
 * @file friendFunction.cpp
 * friend function with returning an object;
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
class Sum{
    int a, b, sum;
    void get(){
        cin >> a >> b;
    }
    public:
    friend int add(Sum x);
};

int add(Sum x){
    x.get();
    x.sum = x.a + x.b;
    return x.sum;
    
}



int main(){
    Sum add1;
    cout << add(add1) << endl;
    return 0;
}