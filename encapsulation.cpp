/**
 * @file encapsulation.cpp
 * encapsulation with example
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
class Employee{
    private:
    int salary;
    public:
    void setSal(int salary){
        this->salary = salary;
    }

    int getSal(){
        return salary;
    }
};

int main(){
    Employee manager;
    manager.setSal(50000);
    cout << manager.getSal() << endl;

    return 0;
}