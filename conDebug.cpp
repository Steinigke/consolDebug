#include "conDebug.h"


	
	conDebug::conDebug(std::string n, std::string sfx, std::string pfx) : 
													sufix(sfx), name(n), prefix(pfx) {
		if(name.empty())
			return;

		std::cout << '\n';
		std::cout << "-----------"<<name<<"-----------"; 
		std::cout << '\n';
		
	}
	
	conDebug::~conDebug(){
		if(name.empty())
			return;
		
		std::cout << "-----------"<<name<<"-----------";
		std::cout << '\n';
		std::cout << '\n';
	}