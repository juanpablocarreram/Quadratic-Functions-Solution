#include <iostream>
#include <cmath>
 using namespace std;
int main() {
  bool question = false;
  do
  {
  float a = 0;
  float b = 0;
  float c = 0;
  cout << "Juan Pablo Carrera Martínez\n";
  cout << "Hello, hero you will find the solution of quadratic equations\n";
  cout << "The structure of a quadratic function is:\n";
  cout << "ax^2 + bx + c\n";
  cout << "Give me the value of a: ";
  cin >> a;
  cout << "Give me the value of b: ";
  cin >> b;
  cout << "Give me the value of c:";
  cin >> c;
  cout << "The quadratic equation that will be solved is:\n";
  cout << a <<"x^2" << " + " << b << "x" << " + " << c << "\n";
  float discriminant= (b*b) - 4*a*c;
  float denominator = 2*a;
  float left=-1*b;
  if(discriminant<0){
discriminant = sqrt(fabs(discriminant));
cout << "The quadratic equation has 2 complex solutions\n" << "The solutions of the quadratic equation are:\n" << "x1 = "<<left/denominator << " + " << discriminant/denominator<<" i" << " and " << "x2 = "<<left/denominator << " - " << discriminant/denominator<<" i\n";
  }
  else if (discriminant==0){
    discriminant = sqrt(fabs(discriminant));
cout << "The equation has 1 real solution\n"<<"The solution of the quadratic equation is: x = "<<left/denominator<<"\n";
  }
  else{ 
    discriminant = sqrt(discriminant);
    cout<< "The quadratic equation has 2 real solutions\n"<< "The solutions of the quadratic equation are:\n" << "x1 = "<< (left+discriminant)/denominator<<" and " << "x2 = "<< (left-discriminant)/denominator<<"\n";
  }
bool loop=false;
char repeatprompt;
do{
  cout<<"Do you want to continue using the program? Y/N:";
  cin>>repeatprompt;
  switch(repeatprompt){
    
    case 'y':
    case 'Y':
question = true;
loop=true;
    break;

    case 'n':
    case 'N':
question = false;
loop =true;
    break;

default: 
cout<< "Invalid Operator\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
break;

  }
} while(loop ==false);

  } while (question == true);
  cout<<"End of the program\n";
}
  
