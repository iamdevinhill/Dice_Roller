#include <iostream>
#include <random>
#include <cstdlib>

// prototypes
void GetDice(int &side1, int &side2);
void RollDice(int side1, int side2);

int main() {
  // variables
  int side1;
  int side2;
  srand(100);  

  std::cout << "++++ Super Awesome Dice Roller ++++" << std::endl;

  
  GetDice(side1,side2);
}

// functions

void GetDice(int &side1, int &side2){
  // prompts user
  std::cout << "Enter amount and number of sides: ";
  std::cin >> side1 >> side2;
  if(side1 < 0 || side2 < 0){
    std::cout << std::endl;
    std::cout << "Illegal value entered...";
  } else if (side1 == 0 || side2 == 0) {
    std::cout << std::endl;
    std::cout << "Rolling " << side1 << "d" << side2 << "..." << std::endl;
    std::cout << "Total: 0";
  } else {
    std::cout << std::endl;
  RollDice(side1, side2);
  }
}

// generates random dice number and sum
void RollDice(int side1, int side2){ 
  int total = 0; 
  std::cout << "Rolling " << side1 << "d" << side2 << "..." << std::endl;
  for(int i = 0; i < side1; i++){
    int random = (rand() % side2);
    total = random + total;
    std::cout << random << std::endl;  
  }
  std::cout << "Total: " << total;
}
