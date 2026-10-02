#include <iostream>
using namespace std;
int main()
{
    int num;
    int largest= 0;
    bool elepres= false;// elepres=elementpresent
    
    cout<<"Enter an integer(-1 to stop): ";
    cin>>num;//reading the first
    
    while(num !=-1){ //-1 becomes the loops off button
        if(!elepres){
            largest=num;//first number entered becomes the largest number
            elepres=true;
        }else if(num> largest){
            largest= num;//updated value if condition is met
        }
        cout<<"\nEnter another number(enter -1 to stop): ";
        cin>> num;
    }
    //results if inputs are valid
    if(elepres){
        cout<<"\nThe largest number entered is: "<< largest;
    }else{
        cout<<"\nNo number was entered";
    }
    return 0;
}
