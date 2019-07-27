#include <iostream>
using namespace std;


//a program that determines the letter grade associated with the numerical value using switch
int main()
{
  float g;
  cout << "Please enter a grade percentage:" << endl;
  cin >> g;
  if ( g >= 90) {
      cout << "You have an A!";}
  else if (( g >= 80) && ( g < 90)){
      cout << "You have a B!";}
  else if (( g >= 70) && ( g < 80 )){
      cout << "You have a C!";}
  else if (( g >= 60) && ( g < 70 )){
      cout << "You have a D!";}
  else {
      cout << "You have an F!";}
  ;
}
