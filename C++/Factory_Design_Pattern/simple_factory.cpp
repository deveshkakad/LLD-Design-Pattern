#include<iostream>
#include "simple_factory.hpp"
using namespace std;


int main(){
    ILogger* infoLogger = ILoggerFactory::createLogger("INFO");
    ILogger* debugLogger = ILoggerFactory::createLogger("DEBUG");
    ILogger* errorLogger = ILoggerFactory::createLogger("ERROR");

    infoLogger->log("This is a Info log");
    debugLogger->log("This is a Debug log");
    errorLogger->log("This is a error log");

    delete infoLogger;
    delete debugLogger;
    delete errorLogger;
}