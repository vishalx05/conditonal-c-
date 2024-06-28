#include<iostream>
using namespace std;

int main(){
//odd even

   int n;
   cout<<"enter the value of n";
   cin>>n;

   if(n%2==0){
        cout<<"even";
   }else{
        cout<<"odd";
   }

//divisible by 5 or not

    int n;
    cout<<"Enter a value of n ";
    cin>>n;

    if(n%5==0){
        cout<<"number is divisible by 5 ";
    }else{
        cout<<"number is not divisible by 5";
    }

//remove the minus sign

    int n;
    cout<<"enter the value of n ";
    cin>>n;

    if(n<0) n=-n;
    cout<<n;

//spcp
    int cp;
    cout<<"enter the cost price ";
    cin>>cp;

    int sp;
    cout<<"enter the sell price ";
    cin>>sp;

    if(sp>cp){
        cout<<"profit"<<sp-cp;
    }
    else if(sp<cp){
        cout<<"loss"<<cp-sp;
    }
    if(sp==cp){
        cout<<"no profit no loss";
    }


//area of rect is greater than perimeter

    int l,b;
    cout<<"enter the length of rectangle "<<endl;
    cin>>l;
    cout<<"enter the breadth of rectangle "<<endl;
    cin>>b;

    int area=l*b;
    int peri=2*(l+b);

    if(area>peri){
        cout<<"area is greater than perimeter"<<endl;

    }
    else{
        cout<<"perimeter is greater than area"<<endl;
    }


//three digit or not

    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    if(n>99 and n<1000){
        cout<<"three digit number"<<endl;
    }else{
        cout<<"not three digit number"<<endl;
    }

//divisible by 5 and 3

    int num;
    cout<<"enter a number ";
    cin>>num;

    if(num%5==0 and num%3==0){
        cout<<"divisible by 5 and 3"<<endl;
    }else{
        cout<<"not divisible by 5 and 3"<<endl;
    }

// 3 side of triangle equal to make traingle


    int a,b,c;
    cout<<"enter the value of a ";
    cin>>a;

    cout<<"enter the value of b ";
    cin>>b;

    cout<<"enter the value of c ";
    cin>>c;


    if((a+b)>c and (b+c)>a and (c+a)>b){
        cout<<"valid traingle";
    }else{
        cout<<"invalid triangle ";
    }


// grater of three number

   int a,b,c;
    cout<<"enter the value of a ";
    cin>>a;

    cout<<"enter the value of b ";
    cin>>b;

    cout<<"enter the value of c ";
    cin>>c;

    if(a>b and b>c){
        cout<<"a is greater";
    }
    else if(b>c and b>a){
        cout<<"b is greater";
    }
    else{
        cout<<"c is greater";
    }


//take input divisible by 5 or 3 but not divisible by 15

    int n,b,c;
    cout<<"enter the value of a ";
    cin>>n;

    if((n%5==0 or n%3==0) and (n%15!=0)){
        cout<<"divisible by 5 or 3 but not 15";
    }else{
        cout<<"divsible by 15 ";
    }

//greater of 3 number using if else if else
    int a,b,c;
    cout<<"enter the value of a ";
    cin>>a;

    cout<<"enter the value of b";
    cin>>b;

    cout<<"enter the value of c";
    cin>>c;


    if(a>b){
        if(a>c){
            cout<<"a is greater  "<<a;
        }else{
            cout<<"c is greater "<<c;
        }

    }else{
        if(b>c){
            cout<<"b is greater "<<b;
        }else{
            cout<<"c is greater "<<c;
        }

    }

//write a program to determine youngest of three in ages

    int ram,shyam,ajay;
    cout<<"enter the value of ram";
    cin>>ram;

    cout<<"enter the value of shyam";
    cin>>shyam;

    cout<<"enter the value of ajay";
    cin>>ajay;

    if(ram<shyam){
        if(ram<ajay){
            cout<<"ram is youngest "<<ram;

        }else{
            cout<<"ajay is youngest "<<ajay;
        }
    }else{
        if(shyam<ajay){
            cout<<"shyam is youngest "<<shyam;
        }else{
            cout<<"ajay is youngest "<<ajay;
        }
    }


//grade according to marks

    int n;
    cout<<"enter the marks of student";
    cin>>n;

    if(n>81 and n<100){
        cout<<"A";
    }else if(n>61 and n<81){
        cout<<"B";
    }else if (n>41 and n<60)
    {
        cout<<"average";
    }
    else if (n<=40)
    {
        /* code */
        cout<<"F";
    }else{
        cout<<"invalid";
    }

// Given a point (x, y), write a program to find out if it lies in the 1st Quadrant, 2nd Quadrant, 3rd Quadrant, 4th Quadrant, on the x-axis, y-axis or at the origin, viz. (0, 0). in c++

    int x,y;

    cout<<"enter x coordinate";
    cin>>x;

    cout<<"enter the y coordinate";
    cin>>y;

    if(x==0 and y==0){
        cout<<"orgin";
    }
    else if(x==0){
        cout<<"y axis";
    }
    else if(y==0){
        cout<<"x axis";
    }
    else if (x>0 and y>0)
    {
        cout<<"1 quadrant";
    }
    else if (x<0 and y>0)
    {
        cout<<"2 quadrant";
    }
    else if(x<0 and y<0){
        cout<<"3 quadrant";
    }
    else if (x>0 and y<0)
    {
        cout<<"4 quandrant";
    }
// Explanation:
// The program first prompts the user to enter the x and y coordinates of the point.
// It then uses a series of if statements to check the location of the point:
// If both x and y are 0, the point is at the origin.
// If x is 0 but y is not, the point is on the y-axis.
// If y is 0 but x is not, the point is on the x-axis.
// If x is positive and y is positive, the point is in the 1st Quadrant.
// If x is negative and y is positive, the point is in the 2nd Quadrant.
// If x is negative and y is negative, the point is in the 3rd Quadrant.
// If x is positive and y is negative, the point is in the 4th Quadrant.


//ternary operator

// adult or not adult
    int age;

    cout<<"\n enter the age ";
    cin>>age;

    int flag;
    (age>=18)? cout<<"adult" : cout<<" not adult";


//calculator using switch

    int n1;
    int n2;
    char ch;

    cin>>n1;
    cin>>ch;
    cin>>n2;



    switch (ch)
    {
    case '+':
        cout<<n1+n2;
        break;

    case '-':
        cout<<n1-n2;
        break;

    case '*':
        cout<<n1*n2;
        break;

    case '/':
        cout<<n1/n2;
        break;

    case '%':
        cout<<n1%n2;
        break;



    default:
        cout<<"invalid";
        break;
    }


// the weekday number to calculate the weekday name

    int day=2;

    switch (day)
    {
    case 1:
        cout<<"monday";
        break;


    case 2:
        cout<<"tuesday";
        break;

    case  3:
        cout<<"wednesday";
        break;

    case 4:
        cout<<"thrusday";
        break;

    case 5:
        cout<<"friday";
        break;

    case 6:
        cout<<"saturday";
        break;

    case 7:
        cout<<"sunday";
        break;

    default:
        cout<<"invalid";
        break;
    }

















}