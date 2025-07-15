#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
void Quarterr (int Quarter) {
    if (Quarter>=1 && Quarter<=3 ) {
    switch (Quarter)
    {
    case 1:
        cout << "January is in the first Quarter in the year." << endl;
        break;
    case 2:
        cout << "February is in the first Quarter in the year."<< endl;
        break;
    case 3:
        cout << "March is in the first Quarter in the year."<< endl;
        break;
    default:
        break;
    }
  }else if(Quarter>=4 && Quarter<=6) {
    switch (Quarter)
    {
    case 4:
        cout << "April is in the Second Quarter in the year."<< endl;
        break;
    case 5:
        cout << "Mai is in the Second Quarter in the year."<< endl;
        break;
    case 6:
        cout << "June is in the Second Quarter in the year."<< endl;
        break;
    default:
        break;
    }
  }else if(Quarter>=7 && Quarter<=9) {
    switch (Quarter)
    {
    case 7:
        cout << "July is in the Third Quarter in the year."<< endl;
        break;
    case 8:
        cout << "Augost is in the Third Quarter in the year."<< endl;
        break;
    case 9:
        cout << "September is in the Third Quarter in the year."<< endl;
        break;
    default:
        break;
    }
  }else if(Quarter>=10 && Quarter<=12) {
    switch (Quarter)
    {
    case 10:
        cout << "October is in the Fouth Quarter in the year."<< endl;
        break;
    case 11:
        cout << "November is in the Fouth Quarter in the year."<< endl;
        break;
    case 12:
        cout << "December is in the Fouth Quarter in the year."<< endl;
        break;
    default:
        break;
    }
  }else {
    cout << "Please enter a number between 1 and 12"<<endl;
  }
}
int main () {
  //int Quarter;
  //cout << "Please enter The number of the month : " << endl;
  //cin >> Quarter;
  Quarterr(0);
  Quarterr(1);
  Quarterr(2);
  Quarterr(3);
  Quarterr(4);
  Quarterr(5);
  Quarterr(6);
  Quarterr(7);
  Quarterr(8);
  Quarterr(9);
  Quarterr(10);
  Quarterr(11);
  Quarterr(12);
  Quarterr(13);
}