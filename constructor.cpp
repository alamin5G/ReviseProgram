/**
 * @file constructor.cpp
 * constructor example
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
class Student{
    string name;
    int age;
    public:
    Student(){
        cin >> name >> age ;
        cout << name << " " << age  <<  endl;
    }
    void getData(){
        cout << name << " " << age << endl;
    }
};

int main(){
    Student st[3];

    return 0;
}