#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    int inch;
};

int main()
{
    struct Distance *ptr, d;
    ptr = &d;
    
    cout << "Enter feet: "<< endl;
    cin >> (*ptr).feet;
    cout << "Enter inch: "<< endl;
    cin >> (*ptr).inch;
 
    cout << "Displaying information." << endl;
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches" <<endl;
return 0;
  }

