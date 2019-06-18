#include "core.h"
#include <iostream>
#include <string>
#include <complex>
#include <vector>
#include <map>
#include <dlfcn.h>
using std::cout;
using std::endl;
using std::string;
using std::complex;
using std::vector;
using std::map;
using std::basic_string;
using std::cin;


int main(){
	cout<<"MAIN STARTED"<<endl;

	string sdfasdf;
	core_i = new core();
	core_i->setVer("0.0.1");

	cout<<"VER: "<<core_i->getVer()<<endl;

	
	void *h = dlopen("./p1.so", RTLD_NOW | RTLD_GLOBAL);

	if(char *emsg = dlerror(); emsg != nullptr){
		cout<<"Failed to load dll.\t"<<emsg<<endl;
		return -1;
	}

	
	void(*fp)() = (void(*)()) dlsym(h, "init");
	fp();
	dlclose(h);

	cout<<"VER: "<<core_i->getVer()<<endl;
	cout<<"MAIN END"<<endl;
}