#include<iostream>
using namespace std;
main()
{
int rupee = 200;
int inputvalue = 10;
int convertedvalue;
cout << "$1=" << rupee << "rupees" << endl;
cin >> inputvalue;
convertedvalue = rupee * inputvalue;
cout << convertedvalue;
}