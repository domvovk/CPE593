#include <iostream>
#include <string>

int main() { 
  
  std::cout << "Enter a string within double quotations: ";

  std::string input;
  std:getline(std::cin, input);

  if(input.length() >=2 && input.front() == '"' && input.back() == '"'){
    
    input = input.substr(1, input.length() - 2);
    std::string reversed = "";

    for (int i = input.length() - 1; i >= 0; i--) {
      reversed += input[i];
    }

    std::cout << "The reversed output is: \"" << reversed << "\"" << std::endl;
  }

  else{
    std::cout
        << "Invalid format, please enter your string within double quotations." << std::endl;
  }

  return 0;
}
