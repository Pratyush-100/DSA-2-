#include<bits/stdc++.h>
using namespace std;
class TIME{
    int hour,minute,second;
    public:
    TIME(){
        cout << "Enter time in hh : mm : ss format\n";
        scanf("%d : %d : %d",&hour,&minute,&second);
    }
    void add(TIME t1,TIME t2){
        hour = t1.hour + t2.hour + (t1.minute + t2.minute + (t1.second + t2.second) / 60) / 60;
        minute = (t1.minute + t2.minute + (t1.second + t2.second) / 60) % 60;
        second = (t1.second + t2.second) % 60;
    }
    void print(){
        printf("The time is -> %d hours, %d minutes, %d seconds\n",hour,minute,second);
    }
};
int main(){
    TIME t1,t2;
    t2.add(t1,t2);
    t2.print();
    return 0;
}