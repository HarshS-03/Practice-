#include<iostream>
using namespace std;
class Base{
    private:
        int num1;
        int num2;
        int num3;
        int num4=0;
    public:
        Base(){ 
            cout<<"---------------------------------------"<<endl;
            cout<<"This is Default Constructor"<<endl; 
            cout<<"---------------------------------------"<<endl;
        }
        Base(Base &b,int num4){ 
            cout<<"---------------------------------------"<<endl;
            cout<<"This Is Copy Constructor Of Base Class"<<endl;
            num1 = b.num1;
            num2 = b.num2;
            num3 = b.num3;
            num4 = num4;
            cout<<"The Sum Of Num1,Num2,Num3 & Num4 With Copy Contructor: "<<num1+num2+num3+num4<<endl;
            cout<<"---------------------------------------"<<endl;
        }
        Base(int x,int y){
            cout<<"---------------------------------------"<<endl;
            cout<<"This Is Paramaterized Constructor 1..."<<endl;
            num1 = x;
            num2 = y;
            cout<<"The Sum Of Num1 & Num2 With 1st Arguemented Contructor: "<<num1+num2<<endl;
            cout<<"---------------------------------------"<<endl;
        }
        Base(int h,int r,int s){
             cout<<"---------------------------------------"<<endl;
            cout<<"This Is Paramaterized Constructor 2..."<<endl;
            num1 = h;
            num2 = r;
            num3 = s;
            cout<<"The Sum Of Num1,Num2 & Num3 With 2st Arguemented Contructor: "<<num1+num2+num3<<endl;
            cout<<"---------------------------------------"<<endl;
        }
};
int main(){
    int a,b,c,d;
    cout<<"---------------------------------------"<<endl;
    cout<<"Enter The Value Of A: ";
    cin>>a;
    cout<<"Enter The Value Of B: ";
    cin>>b; 
    cout<<"Enter The Value Of C: ";
    cin>>c;
    cout<<"Enter The Value Of D: ";
    cin>>d;
    cout<<"---------------------------------------"<<endl;
    while(true){
        cout<<"-----------------Menu-------------------"<<endl;
        cout<<"Press 1 For Default Constructor"<<endl;
        cout<<"Press 2 For Paramaterized Constructor 1"<<endl;
        cout<<"Press 3 For Paramaterized Constructor 2"<<endl;
        cout<<"Press 4 For Copy Constructor"<<endl;
        cout<<"Press 5 For Exit"<<endl;
        int choice;
        cout<<"Enter Your Choice: ";
        cin>>choice;
        cout<<"---------------------------------------"<<endl;
        switch(choice){
            case 1:{
                Base obj1;
                break;
                }

            case 2:
                {
                    Base obj2(a,b);
                    break;
                }
            
            case 3:
                {
                    Base obj3(a,b,c);
                    break;
                }

            case 4:
                {
                    Base obj4(a,b,c);
                    Base obj5(obj4,d);
                    break;
                }
            
            case 5:
                exit(0);
                break;

            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    } 
    return 0;
}