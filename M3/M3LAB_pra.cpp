// if statement example2
/*  CSC 134
    M3LAB1 - simple Adventure
    De La Torre, Alestacia
    20240219

*/


// compiler directives
// (required for the program to run)
#include <iostream>
using namespace std;

void chooseDoor1();
void chooseDoor2();
int choice;

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice;

  // ask the question
  cout << "Would you like to start indoors or outdoors?" << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	chooseDoor1();
    
  }
  else if (2 == choice) {
  	chooseDoor2();
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method

void chooseDoor1()
{
  cout << "You choose to start indoors!" << endl;
  cout << "You are sitting at the foot of your bed.\nDo you want to stand up or go back to sleep" << endl;
  cout << "Type 1 or 2: ";
  cin >> choice;
  if (1 == choice){
    cout << "You start to stand and begin to walk and eat breakfast. You're ready to start your day!" << endl;
  }
  else if ( 2 == choice){
    cout << "You fall back into your bed and beging to cloose your eyes, slowly dozing off to sleep." << endl;
  }
  else {
    cout << "Oh no, Invalid choices! Please try again"<< endl;
  }
}

void chooseDoor2()
{
  cout << "You are outside of your house!" << endl;
  cout << "Do you want to walk twords the apple tree or to the swing? " << endl;
  cout << "Type 1 or 2: ";
  cin >> choice;
  if (1 == choice){
    cout << "You walk twords the apple tree with a book in hand. Once you get there you sit down and look at the sunset" << endl;
    cout << "Do you want to doze off looking at the sunset or read your book?" << endl;
    cout << "Type 1 or 2: ";
    cin >> choice;
    if (1 == choice){
      cout << "As you sit against the apple tree admiring the sunset you eyes begin to feel heavy.\n You start to feel sleeply slowly dozing off to complete slumber" << endl;
    }
    else if (2 == choice){
      cout << "As you settle in against the apple tree you open the pages to your book. Feeling each page with the tips of your fingers." << endl;
    }
    else {
      cout << "Invalid selection , please try again!" << endl;
    }
  }
  else if (2 == choice){
    cout << "You walk twords the swing and sit down in the seat" << endl;
    cout << "You slowly start to push your self to start. Once you have enough momentum you beging to swing your legs pushing yourself higher and higher!" << endl;  
  }
}