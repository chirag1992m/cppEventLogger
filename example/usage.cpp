#include <iostream>
#include <cstdio>
#include "../eventLogger.hpp"

using namespace std;

int main(int argc, char *argv[]) {
	EventLogger::logEvent("This is a message!");
	
	EventLogger::logError("This is an error!");
	
	return 0;
}
