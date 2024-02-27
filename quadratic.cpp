#include <iostream>
#include <cmath>
 using namespace std;
int main() {
  float a = 0;
  float b = 0;
  float c = 0;
  cout << "Teacher´s Name: Agustin Rogelio Gonzalez\n";
  cout << "Hello, hero you will find the solution of quadratic equations\n";
  cout << "The structure of a quadratic function is:\n";
  cout << "ax^2 + bx + c\n";
  cout << "Give me the value of a: ";
  cin >> a;
  cout << "Give me the value of b: ";
  cin >> b;
  cout << "Give me the value of c: ";
  cin >> c;
  cout << "The quadratic equation that will be solved is:\n";
  cout << a <<"x^2" << " + " << b << "x" << " + " << c << "\n";
  cout << "The solutions of the quadratic equation are:\n";
  float discriminant= (b*b) - 4*a*c;
  float denominator = 2*a;
  float left=-1*b;
  if(discriminant<0){
discriminant = sqrt(fabs(discriminant));
cout << "x1:"<<left/denominator << " + " << discriminant/denominator<<"i\n";
cout << "x2:"<<left/denominator << " - " << discriminant/denominator<<"i\n";

  }
  else if (discriminant==0){
    discriminant = sqrt(fabs(discriminant));
cout << "x1:"<<left/denominator<<"\n";
  }
  else{
    discriminant = sqrt(discriminant);
    cout<< "x1:"<< (left+discriminant)/denominator<<"\n";
    cout<< "x2:"<< (left-discriminant)/denominator<<"\n";
  }
  cout<<"Endo";
}