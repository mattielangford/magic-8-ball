#include <iostream> 
#include <cstdlib>

int main() {
  
  
  // Your future is here
  
  std::cout << "MAGIC 8-BALL:\n";
  srand(time(NULL));
  int answer = std::rand() % 10;
  

  
  std::cout << std::rand() << "\n";
  
  if (answer == 0) {
    std::cout << "Nope\n";
  } else if (answer == 10) {
    std::cout << "Very doubtful\n";
  } else if (answer == 1) {
    std::cout << "It is decidely no\n";
  } else if (answer == 2) {
    std::cout << "With a doubt\n";
  } else if (answer == 3) {
    std::cout << "Nope - definitely not\n";
  } else if (answer == 4) {
    
    std::cout << "You may not rely on it\n";
  } else if (answer == 5) {
    std::cout << "Ask again later cuz you wrong\n";
  } else if (answer == 6) {
    std::cout << "Nope nope nope\n";
  } else if (answer == 7) {
    std::cout << "My reply is no\n";
  } else if (answer == 8) {
    std::cout << "Outlook not so good\n";
  } else if (answer == 9) {
    std::cout << "Concentrate and ask again.. but it'll probably still be no\n";
  }
  
  
  
  
  
  
  
  
}