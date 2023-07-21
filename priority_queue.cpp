//priority queue
#include  <iostream>
#include <bits/stdc++.h>
using namespace std;
class employee{
    private:
     int id;
     string name;
     float salary;
     public:
     employee(int i, string s, float x): id(i),name(s),salary(x)
     {

     }
     float getsalary(){
        return salary;
     }
     void show(){
        cout<<id<<" "<<salary<<" "<<name<<endl;

     }
};
class comparesalary{

    public:
    bool operator()(employee &e1, employee e2){
        return e1.getsalary()<e2.getsalary();
    }
};
int main(){
    priority_queue <int> p1;  //vector
    priority_queue <string,deque<string>> p2;   //dequeue
    priority_queue <employee, deque<employee>,comparesalary> p3;  
    p1.push(45);
    p1.push(100);
    p1.push(1);
    p1.push(10);
    p1.push(19);
    p1.pop();
    cout<<p1.top()<<endl;
    p2.push("ayushi");
    p2.push("arsh");
    p2.push("riya");
    p2.push("sonakshi");
    p2.pop();
cout<<p2.top()<<endl;
p3.push(*new employee(1,"som",40000));
p3.push(*new employee(2,"ram",50000));
p3.push(*new employee(3,"sita",45000));
employee e=p3.top();
e.show();
    return 0;
}



