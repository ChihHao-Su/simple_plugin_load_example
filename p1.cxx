#include "core.h"
#include <iostream>
using std::cout;
using std::endl;



extern "C" void init(){
	cout<<"PLUGIN STARTED"<<endl;
	core_i->beep();
	core_i->setVer("1.0.0");
	cout<<"PLUGIN ENDED"<<endl;
}