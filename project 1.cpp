# include <iostream>
using namespace std;

int main() {

  char choice ;
  float x , y, Result;
  
  cout<< "MENU DRIVEN CALCULATOR" ;

  cout << "\n\nselect operation: +, -, *, / :  ";
  cin >> choice;

  cout << "Enter two numbers :  ";
  cin >> x >> y;

  switch(choice) {

    case '+':
      cout << "Result" " = " << x + y ;
      break;

    case '-':
      cout << "Result" " = " << x - y ;
      break;

    case '*':
      cout << "Result" " = " << x * y ;
      break;

    case '/':
      cout << "Result" " = " << x / y ;
      break;

    default:
      
      cout << "Unexpected Error!!!";
      break;
  }

  return 0;
}