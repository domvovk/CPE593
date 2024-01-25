#include <cctype>
#include <iostream>
#include <string>

bool isAlpha(char ch) {
  return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

char toLower(char ch) {
  return (ch >= 'A' && ch <= 'Z') ? ch + ('a' - 'A') : ch;
}

std::string reverseString(const std::string& str) {
  std::string reversed;
  for (int i = str.length() - 1; i >= 0; --i) {
    reversed += str[i];
  }
  return reversed;
}

bool isPalindrome(const std::string& str) {
  
  int i = 0;
  int j = str.length() - 1;

  while (i < j) {
    while (i < j && !isAlpha(str[i])) {
      ++i;
    }

    while (i < j && !isAlpha(str[j])) {
      --j;
    }

    if (toLower(str[i]) != toLower(str[j])) {
      return false;
    }

    ++i;
    --j;
  }

  return true;
}

int main() {

  std::cout << "Enter a string within double quotations: ";

  std::string input;
  std::getline(std::cin, input);

  if (input.length() >= 2 && input.front() == '"' && input.back() == '"') {

    input = input.substr(1, input.length() - 2);

    std::string reversed = reverseString(input);
    std::cout << "Reversed output: \"" << reversed << "\"" << std::endl;

    if (isPalindrome(input)) {

      std::cout << "The input is a palindrome." << std::endl;

    } 
    else {

      std::cout << "The input is not a palindrome." << std::endl;

    }

  } 
  
  else {
    std::cout << "Invalid input format. Please enter a string within double quotations." << std::endl;
  }

  return 0;
}
