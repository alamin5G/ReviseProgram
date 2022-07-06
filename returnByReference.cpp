/**
 * @file returnByReference.cpp
 * return by reference
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
int a;
int & retByRef(){
    return a;
}

int main(){
    cout << a << endl; // before set returning value;
    retByRef() = 10; 
    cout << a << endl;
    a = 20;
    cout << a << endl;
    retByRef() = 15;
    cout << a << endl;

    return 0; 

}