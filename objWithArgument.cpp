/**
 * @file objWithArgument.cpp
 * object with argument passing
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
class Calculation{
    int a;
    public:
    void input(){
        cin >> a;
    }
    void output(Calculation add){
        add.a += add.a;
        cout << add.a << endl;
    }
};
int main(){
    Calculation add;
    add.input();
    add.output(add);
    return 0;
}