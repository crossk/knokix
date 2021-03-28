#include <iostream>

#include "core/Application.hpp"

int main(int argc, char* argv[])
{
	std::cout << "Hello there" << std::endl;

    Application app;
    app.init(argc, argv);

    return 0;
}
