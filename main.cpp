#include <iostream>

#include "logger.h"

using namespace std;

int main()
{

    LogLevel l = Logger::getLogLevel();

    cout << "Hello World!" << endl;
    return 0;
}
