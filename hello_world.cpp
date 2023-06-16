#include <string>

int main() {
 	std::string name; //переменная для имени
 	std::getline(std::cin, name); // читаем строку
 	std::cout << "Hello World from " << name << std::endl; //выводим результат 
 	return 0;
}
