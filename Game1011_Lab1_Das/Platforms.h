#include <iostream>
#include "Platform.h"
//array or pointer of platform
class Platforms
{
private:
	
	Platform* platforms;
	int current_no_of_platform;
	int max_no_of_platform;
public:
	
	Platforms();
	int getPlatformNo();
	Platform getPlatformFrom(int index);
	void getAllPlatform();	
	string addPlatform(Platform platform);
	string deletePlatformAt(int index);
	Game* getGamesPlatformFrom(int index);
	~Platforms();
};

