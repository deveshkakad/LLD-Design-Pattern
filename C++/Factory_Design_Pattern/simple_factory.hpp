#include<iostream>
using namespace std;
class ILogger{
    public:
    virtual void log(const string &msg) = 0;
    virtual ~ILogger(){}
};

class InfoLogger:public ILogger{
    public:
    void log(const string &msg){
        cout<<"INFO:"<<msg<<endl;
    }
};
class DebugLogger:public ILogger{
    public:
    void log(const string &msg){
        cout<<"DEBUG:"<<msg<<endl;
    }
};
class ErrorLogger:public ILogger{
    public:
    void log(const string &msg){
        cout<<"Error:"<<msg<<endl;
    }
};


class ILoggerFactory{
    public:
       static ILogger* createLogger(string logger){
            if(logger == "DEBUG"){
                return new DebugLogger();
            }else if(logger == "ERROR"){
                return new ErrorLogger();
            }else if(logger == "INFO"){
                return new InfoLogger();
            }
            return nullptr;
        }
};