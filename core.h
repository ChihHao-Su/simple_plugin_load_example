#include <string>
using std::string;

class core
{
public:
	core();
	string getVer();
	void setVer(string v);
	void beep();

private:
	
	string ver;

};

extern core *core_i;