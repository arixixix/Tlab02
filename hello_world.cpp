#include <string>

int
main()
{
  std::string name;             // var for name
  std::getline(std::cin, name); // read line
  std::cout << "Hello World from " << name << std::endl; // print the resault
  return 0;
}
