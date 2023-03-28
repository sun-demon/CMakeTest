#include "main.h"
#include <string>
#include <iostream>

int main() {
	sayHello();
	return 0;
}

std::string hello() {
	return "Hello, CmakeTest!";
}

void sayHello() {
	std::cout << hello() << std::endl;
}