//Sakshi Sonawane
//PRN:24070123505
#include <iostream>
using namespace std;
int count=0;
class student{
    public:
    student()
    {
        count++;
        cout<<"No of objects created: "<<count<<endl;
    }
    ~student()
    {
        cout<<"No of objects destroyed: "<<count<<endl;
               count--;
    }
};
int main(){
    student s1;
    student s2,s3;
};
