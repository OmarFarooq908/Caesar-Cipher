#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    int d,e,f,g;

    cout<<" _______________________________________________________________"<<endl;
    cout<<"|                                                               |"<<endl;
    cout<<"| In the Name of Allah, the Most Gracious and the Most Merciful |"<<endl;
    cout<<"|_______________________________________________________________|"<<endl;
    cout<<"\n _______________________________________________________________"<<endl;
    cout<<"|                                                               |"<<endl;
    cout<<"|                Name    : Muhammad Omar Farooq                 |"<<endl;
    cout<<"|                Roll No :       20-CP-33                       |"<<endl;
    cout<<"|_______________________________________________________________|"<<endl;
    cout<<"\n________________________________________________________________"<<endl;
    cout<<"|                                                               |"<<endl;
    cout<<"|               Department of Computer Engineering              |"<<endl;
    cout<<"|          University of Engineering and Technology, Taxila     |"<<endl;
    cout<<"|_______________________________________________________________|"<<endl;

    cout<<"\n >> Message >> ";
    getline(cin,a);
    cout<<" >> Shift >> ";
    cin>>d;
    f = a.length();
    g = f-1;
    for (int i=0; i<=g;i++){

        e = int(a[i])+d;
        if (e>90&&e<97){
            e = e-26;
        }
        if (e>122){
            e = e-26;
        }
        if (e==35){
            e -= 3;
        }
        cout<<char(e);
    }


    return 0;
}
