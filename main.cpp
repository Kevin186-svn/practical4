#include<iostream>
#include "Reverse.h"
#include "EfficientTruckLoads.h"
#include "TruckLoads.h"

using namespace std;

int main()

{

Reverse rev1;

TruckLoads T_L;

EfficientTruckLoads E_T_L;

//cout << "input:" << endl;

string s1;

int i,num1,num2,sa;

cin >> i>>s1>>num1>>num2;

if(i<0){

   cout<<"ERROR"<<" ";

}else{

   cout<<rev1.reverseDigit(i)<<" ";

}
   cout<<rev1.reverseString(s1)<<" ";

if(num1<0){

   cout << "ERROR"<<" ";

}else{

   cout << T_L.numTrucks(num1,num2)<<" ";

}


if(num2<0){

   cout << "ERROR" <<endl;

}

else{

   cout << E_T_L.E_numTrucks(num1,num2)<< endl;

}


return 0;

}