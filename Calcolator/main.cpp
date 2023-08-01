#include <iostream>
#include <cmath>
#define pi 3.14
#include<string>
//#include<time.h>
using namespace std;
class rectangle          //the area and the Perimeter of rectangle
{
    public:
    float width;                  //clASS 1
    float legth;
    rectangle(){
        width=0;
        legth=0;

    }
    float area(){
        return width*legth;
    }
    float parmetar(){
        return (width+legth)*2;
    }
};
class circle       //the area and the Perimeter of circle
{
    public:                 //class 2
    float radius;

    public:
    float area_of_circle()
    {
        return pi*radius*radius;
    }
    float circumference(){
        return 2*pi*radius;
    }
};

class triangle    //the area and the Perimeter of triangle
{
    public:
    float rib1,rib2,rib3;
    float Base_length ,Height;                //class 3

    public:
    int Perimeter_of_a_triangle(){
        return rib1+rib2+rib3;
    }
    public:
    float Area_of_the_triangle(){
        return 0.5*Base_length*Height;
    }
};

int main() {
    rectangle rec;     //object 1
    circle cir;            //object 2
    triangle tri;               //object 3
    int brithday;

    int num,sigh,num1,num2;
    int kind;
    float w,l,radius,sum,muns,tiem,devid;
    char eqal;
    char si;
    float rib1,rib2,rib3,Base_length,Height;

    string user="osamamahmoud";
    string pass="25595568";
    string inpt;
    string inp;
while (pass != inpt){
    string sighin;
    cout<<"user name :  ";
    cin>>inp;

    cout<<"password : ";
    cin>>inpt;
    system("cls");
    if(pass != inpt || user!=inp){
        cout<<"the user or the password is wrong , please try again ."<<endl;

    }
    else

        cout <<"the password is correct :). "<<endl;

}

    cout<<endl;
    cout<<endl;
    cout<<"lets start ^_^" <<endl;
    cout<<endl;
    cout<<endl;


    while(true){

    cout<<"What kind of operation do you want?"<<endl;
    cout<<"1- Simple calculation? "<<endl<<"2- Trigonometric countries? "<<endl<<"3- geometric shapes? "<<endl<<"4- calc your age in years ?"<<endl<<"5- exit? "<<endl;
    cin>>kind;
    system ("cls");
    if (kind==5){
    cout<<"thank you for useing my calcletor <3"<<endl;
    break;

    }
    else if (kind== 5){
       cout<<"16- to continue: "<<endl;
       cin>>sigh;
       break;
       system ("cls");
    }
    switch(kind){
        case(1):
        cout<<"1- *"<<endl<<"2- +"<<endl<<"3- /"<<endl<<"4- -"<<endl<<"5- ^"<<endl<<"00- back "<<endl<<"                               The choice is: ";
        cin>>sigh;
        system ("cls");

        break;
        system ("cls");
        case(2):

        cout<<"6- log("<<endl<<"7- sin("<<endl<<"8- cos("<<endl<<"9- tan("<<endl<<"00- back "<<endl<<"                               The choice is: ";;
        cin>>sigh;
        system ("cls");

        break;
        system ("cls");
        case(3):
        cout<<"10- area of rectangle ▮:"<<endl<<"11- parmetar of rectangle ▮:"<<endl<<"12- area of circle ⚫: "<<endl<<"13- circumference of the circle ⚫:"<<endl<<"14- Perimeter of a triangle ◄: "<<endl<<"15- Area of the triangle ◄: "<<endl<<"00- back "<<endl<<"                               The choice is: ";
       cin>>sigh;
       system ("cls");

       break;
       system ("cls");
       case (4):
       cout<<"16- to continue: "<<endl<<"00- back "<<endl;
       cin>>sigh;
       system ("cls");

       break;
       system ("cls");
    }

    if (sigh==2){
        while(true){
            cout << "Enter a number (or 0 to stop): ";              //sumation more than one number
            cin >> num;
            sum+=num;


        if (num == 0) {
            break;
            system ("cls");
        }
        }
    }
    else if((sigh==1)||(sigh==3)||(sigh==4)){
        cout<<"enter number 1: "<<endl;
        cin>>num1;
        cout<<"enter number 2: "<<endl;
        cin>>num2;
    }
    else if(sigh==5){
        cout<<"enter number : "<<endl;
        cin>>num1;
        cout<<"enter the power: "<<endl;
        cin>>num2;

    }
    else if(sigh>=6&&sigh<=9)
    {
    cout<<"enter the degree\n";
    cin>>num2;
    }
    else if ((sigh==10)||(sigh==11))
    {
        cout<<"enter the width: "<<endl;
        cin>>w;
        cout<<"enter the legth: "<<endl;
        cin>>l;

    }
    else if((sigh==12)||(sigh ==13))
    {
        cout<<"enter the radius : "<<endl;
        cin>>radius;
    }
    else if(sigh==14)
    {
        cout<<"enter rib 1: "<<endl;
        cin>>rib1;
        cout<<"enter rib 2: "<<endl;
        cin>>rib2;
        cout<<"enter rib 3: "<<endl;
        cin>>rib3;
    }
    else if(sigh==15)
    {
        cout<<"enter Base length: "<<endl;
        cin>>Base_length;
        cout<<"enter the Height: "<<endl;
        std::cin >>Height;
    }
    else if (sigh==16){
        cout<<"enter the year you was born in: "<<endl;
        cin>>brithday;
    }
    else if (sigh== 00)
    {
        continue;

    }



    else
        cout<<"Wrong value , try again but the number of choice"<<endl;
        system ("cls");

    rec.width = (w);
    rec.legth = (l);
    cir.radius=(radius);
    tri.rib1=(rib1);
    tri.rib2=(rib2);
    tri.rib3=(rib3);
    tri.Base_length=(Base_length);
    tri.Height=(Height);



    switch(sigh){
        case 1:

            cout<<"the multiplication is ---------------->"<<num1*num2;
            break;
        case 2:

            cout<<"the addition is ---------------->"<<sum;
            break;
        case 3:

            cout<<"the division is ----------------> "<<num1/num2;
            break;
        case 4:

            cout<<"the subtraction is ----------------> "<<num1-num2;
            break;
        case 5:

            cout<<"the result is ----------------> "<<pow(num1,num2);
            break;
        case 6:

            cout<<"the result is ---------------->  "<<log(num1);
            break;
        case 7:

          cout<<"the result is ----------------> "<<sin(num1);
            break;
        case 8:

            cout<<"the result is ----------------> "<<cos(num1);
            break;
        case 9:

            cout<<"the result is ----------------> "<<tan(num1);
            break;
        case 10:

            cout<<"the area of rectangle is : ----------------> "<<rec.area()<<endl;

            cout<<"                                                 "<<w;
            cout<<"                                                                                                                  - - - - - - - >"<<endl;
            cout<<"                                            ----------------  "<<endl;
            cout<<"                                          | |              |  "<<endl;
            cout<<"                                          | |              |     "<<endl;
            cout<<"                                        "<<l<<" | |              |  "<<endl;
            cout<<"                                          | |              |   "<<endl;
            cout<<"                                          v  ---------------  "<<endl;
            break;
        case 11:

            cout<<"the parameter of rectangle is : ----------------> "<<rec.parmetar()<<endl;

            cout<<"                                                 "<<w;
            cout<<"                                                                                                           - - - - - - - >"<<endl;
            cout<<"                                            ----------------  "<<endl;
            cout<<"                                          | |              |  "<<endl;
            cout<<"                                          | |              |     "<<endl;
            cout<<"                                       "<<l<<" | |              |  "<<endl;
            cout<<"                                          | |              |   "<<endl;
            cout<<"                                          v  ---------------  "<<endl;
            break;
        case 12:

            cout<<"the area of circle is : ----------------> "<<cir.area_of_circle()<<endl;
            break;
        case 13:

            cout<<"the circumference of the circle is: ----------------> "<<cir.circumference()<<endl;
            break;
        case 14:

            cout<<"the Perimeter of a triangle is: ----------------> "<<tri.Perimeter_of_a_triangle()<<endl;
            break;
        case 15:

            cout<<"the Area of the triangle: ----------------> "<<tri.Area_of_the_triangle()<<endl;
            break;
        case 16:

            cout<<"your age in yeas is: ----------------> "<<2023-brithday<<endl;
            break;


    }
    cout << endl;
    cout << endl;



    }

    return 0;
}
