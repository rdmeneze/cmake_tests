#pragma once

#include <string>

class CMain
{
	private:
		int argv; 
		char** argc;

		void init();

	public:
		CMain();
		CMain(int argv, char** argc) {
			this->argv = argv; 
			this->argc = argc;

			init();
		};
		
		int execute(void);
		int execute(int argv, char** argc);
		const std::string version();
};

