/*
#include <iostream>

int main()
{
        std::cout << "Hello, world!";
        return 0;
}
*/
/*
#include <iostream>
#include <limits>

int main() {
  std::cout << "Hello, world!";
  // reset any error flags
  std::cin.clear();
  // ignore any characters in the input buffer until we find a newline
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  // get one more char from the user (waits for user to press enter)
  std::cin.get();
  return 0;
}
*/
/*
// This program prints the C++ language standard your compiler is currently
// using Freely redistributable, courtesy of learncpp.com
//
(https://www.learncpp.com/cpp-tutorial/what-language-standard-is-my-compiler-using/)

#include <iostream>

const int numStandards = 7;
// The C++26 stdCode is a placeholder since the exact code won't be determined
// until the standard is finalized
const long stdCode[numStandards] = {199711L, 201103L, 201402L, 201703L,
                                    202002L, 202302L, 202612L};
const char *stdName[numStandards] = {"Pre-C++11", "C++11", "C++14", "C++17",
                                     "C++20",     "C++23", "C++26"};

long getCPPStandard() {
  // Visual Studio is non-conforming in support for __cplusplus (unless you set
  // a specific compiler flag, which you probably haven't) In Visual Studio 2015
  // or newer we can use _MSVC_LANG instead See
  //
https://devblogs.microsoft.com/cppblog/msvc-now-correctly-reports-__cplusplus/
#if defined(_MSVC_LANG)
  return _MSVC_LANG;
#elif defined(_MSC_VER)
  // If we're using an older version of Visual Studio, bail out
  return -1;
#else
  // __cplusplus is the intended way to query the language standard code (as
  // defined by the language standards)
  return __cplusplus;
#endif
}

int main() {
  long standard = getCPPStandard();

  if (standard == -1) {
    std::cout << "Error: Unable to determine your language standard.  Sorry.\n";
    return 0;
  }

  for (int i = 0; i < numStandards; ++i) {
    // If the reported version is one of the finalized standard codes
    // then we know exactly what version the compiler is running
    if (standard == stdCode[i]) {
      std::cout << "Your compiler is using " << stdName[i]
                << " (language standard code " << standard << "L)\n";
      break;
    }

    // If the reported version is between two finalized standard codes,
    // this must be a preview / experimental support for the next upcoming
    // version.
    if (standard < stdCode[i]) {
      std::cout << "Your compiler is using a preview/pre-release of "
                << stdName[i] << " (language standard code " << standard
                << "L)\n";
      break;
    }
  }

  return 0;
}
*/
/*
#include <iostream>

int main() {
  int width; // define a variable named width
  width = 5; // copy assignment of value 5 into variable width

  std::cout << width; // prints 5

  width = 7; // change value stored in variable width to 7

  std::cout << width; // prints 7

  return 0;
}
*/
/*
// xcrun clang++ main.cpp -std=c++17 -Werror && ./a.out
#include <iostream>

int main() {
  [[maybe_unused]] double pi{3.14159};  // Don't complain if pi is unused
  [[maybe_unused]] double gravity{9.8}; // Don't complain if gravity is unused
  [[maybe_unused]] double phi{1.61803}; // Don't complain if phi is unused

  std::cout << pi << '\n';
  std::cout << phi << '\n';

  // The compiler will no longer warn about gravity not being used

  return 0;
}
*/
/*
#include <iostream> // for std::cout

int main() {
  int x{5};
  std::cout << "x is equal to: " << x
            << '\n'; // single quoted (by itself) (conventional)
  std::cout << "Yep."
            << "\n"; // double quoted (by itself) (unconventional but okay)
  std::cout << "NEWLINE" << std::endl;
  std::cout << "And that's all, folks!\n"; // between double quotes in existing
                                           // text (conventional)
  return 0;
}
*/
/*
// xcrun clang++ main.cpp -std=c++17 -Werror && ./a.out
#include <iostream> // for std::cout and std::cin

int main() {
  std::cout << "Enter a number: "; // ask user for a number

  int x{}; // define variable x to hold user input (and value-initialize it)
  std::cin >> x; // get number from keyboard and store it in variable x

  std::cout << "x * 2 is " << x * 2 << '\n';
  return 0;
}
*/
/*
// two numbers separated by a space
#include <iostream> // for std::cout and std::cin

int main() {
  std::cout << "Enter two numbers separated by a space: ";

  int x{}; // define variable x to hold user input (and value-initialize it)
  int y{}; // define variable y to hold user input (and value-initialize it)
  std::cin >> x >>
      y; // get two numbers and store in variable x and y respectively

  std::cout << x << " * " << y << " = " << (x * y) << "\n";

  return 0;
}
*/
/*
// two numbers separated by newline
#include <iostream> // for std::cout and std::cin

int main() {
  std::cout << "Enter two numbers: ";

  int x{};
  std::cin >> x;

  int y{};
  std::cin >> y;

  std::cout << "( " << x << " * " << y << " ) = " << x * y << "\n";

  return 0;
}
*/
#include <iostream>

// fuck yeah functions
int mult(int a, int b) { return a * b; }

int getUserInput(std::string msg) {
  std::cout << msg;
  int input{};
  std::cin >> input;

  return input;
}

int main() {
  int a = getUserInput("a? ");
  int b = getUserInput("b? ");
  std::cout << "Output: " << mult(a, b);
  return 0;
}
