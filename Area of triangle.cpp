#include<iostream>
using namespace std;
int main()
{
    system("cls");
    cout<<"WELCOME TO THE PAGE THAT FINDS THE AREA OF TRIANGLE";
    int B;
    int HEIGHT;
    float AREA;
    cout<<"\nENTER THE VALUE OF BASE \n";
    cin >>B;
    cout<<"ENTER THE VALUE OF HEIGHT \n";
    cin >> HEIGHT;
    AREA = 0.5*B*HEIGHT;
    cout<<"AREA OF TRIANGLE IS:"<<AREA;

    return 0;
}