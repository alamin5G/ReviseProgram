/**
 * @file arrayOfObj.cpp
 * Array of Object using constructor;
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
class Student{
    int age;
    string name;
    public: 
    void input(){
        cin >> age;
        cin.ignore();
        getline(cin, name);

    }
    void output(Student info){
        age = info.age;
        name = info.name;
        cout << name << " is " << age << " years old." << endl;
    }

};
int main(){
    Student st[2];
    for(int i=0; i<2; i++){
        st[i].input();
    }

    for(int i=0; i<2; i++){
        st[i].output(st[i]);
    }
    return 0;
}