#include "CMain.h"
#include <iostream>
#include "HelloConfig.h"
#include <sstream>

void CMain::init() 
{
	return;
}

CMain::CMain()
{
	init();
}

int CMain::execute(void) {
	std::cout << "CMain::main\n";

	return 0;
}


int CMain::execute(int argv, char** argc)
{
	this->argv = argv;
	this->argc = argc;

	std::cout << "CMain::main2\n";

	std::cout << "Version " << Hello_VERSION_MAJOR << "." << Hello_VERSION_MINOR << "\n";

	return 0;
}

const std::string CMain::version()
{
	std::ostringstream v; 
	v	<< Hello_VERSION_MAJOR 
		<< "." 
		<< Hello_VERSION_MINOR 
		<< "." 
		<< Hello_VERSION_PATCH 
		<< "." 
		<< Hello_VERSION_BUILD;

	return v.str();
}	


