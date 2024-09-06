#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"input a character: ";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello"<< endl;
        break;
    case 'b':
        cout<<"Assalamoalikum"<< endl;
        break;
     case 'c':
        cout<<"NiHao"<< endl;
        break;
    case 'd':
        cout<<"Koni Chiwa"<< endl;
        break;
     case 'e':
        cout<<"annyeonghaseyo"<< endl;
        break;
    case 'f':
        cout<<"Kon nichiwa"<< endl;
        break;
        
    default:
        cout<<"Sorry I am still learning"<< endl;
        break;
    }
    return 0;

}