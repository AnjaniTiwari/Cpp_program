#include<iostream>
#include<cstring>
using namespace std;
class student
{
private:
    int id,age;
    char name[20];
public:
    void set_data(int i,char n[],int a)
    {
        id=i;
        strcpy(name,n);
        age=a;
    }
    void show_data()
    {
        cout<<id<<" "<<name<<" "<<age<<endl;
    }
};
int main()
{
    student s1;
    s1.set_data(1,"Anjani",23);
    s1.show_data();
    return 0;
}
