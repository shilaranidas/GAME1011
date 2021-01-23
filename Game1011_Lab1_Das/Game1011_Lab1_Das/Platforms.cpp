#include "Platforms.h"
Platforms::Platforms()
{
	platforms = new Platform[5];
	max_no_of_platform = 5;
	current_no_of_platform = 0;
}

int Platforms::getPlatformNo()
{
	return current_no_of_platform;
}

Platform Platforms::getPlatformFrom(int index)
{
	if (index < current_no_of_platform)
		return platforms[index];	
	
}
Game* Platforms::getGamesPlatformFrom(int index)
{
	if (index < current_no_of_platform)
		return platforms[index].games;
}

void Platforms::getAllPlatform()
{
	for (int i = 0; i < current_no_of_platform; i++)
	{
		cout << "*****Platform " << (i + 1) << "Information*****" << endl;
		platforms[i].platformInfo();
	}
}



string Platforms::addPlatform(Platform platform)
{
	if (max_no_of_platform >current_no_of_platform)
	{		
		platforms[current_no_of_platform] = platform;
		current_no_of_platform++;
		return "Added platform";
	}
	return "add platform failed";
}

string Platforms::deletePlatformAt(int index)
{
	if (current_no_of_platform >= index)
		for (int i = index; i < current_no_of_platform; i++)
		{
			platforms[current_no_of_platform] = platforms[current_no_of_platform + 1];
		}
	current_no_of_platform--;
	return "deleted platform";
}



Platforms::~Platforms()
{
	if (current_no_of_platform > 0)
	{
		delete[] platforms;
	}
}
