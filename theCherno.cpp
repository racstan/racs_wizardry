#include <iostream>
class Log
{
    public:
    enum Level
    {
        Levelwarning=0, Levelerror, Levelinfo
    };
    const int logLevelWarn = 0;
    const int logLevelError =1;
    const int logLevelInfo = 2;
    private:
    Level m_logLevel = Levelwarning;
    public:
    void setLevel(Level level){
        m_logLevel = level;
    }
    void warn(const char* message){
        if(m_logLevel>=Levelwarning)
            std::cout<<" ::::Warning:::: "<<message<<std::endl;
    }
    void error(const char* message){
        if(m_logLevel>=Levelerror)
            std::cout<<" ::::Error:::: "<<message<<std::endl;

    }
    void info(const char* message){
        if(m_logLevel>=Levelinfo)
            std::cout<<" ::::Information:::: "<<message<<std::endl;

    }
};

int main(){
    Log log;
    log.setLevel(Log::Levelinfo); // here log.logLevelInfo is used becuz logLevelInfo is inside the log object which is inside the Log class
    log.warn("warning shall be dispalyed");
    log.error("error shall be displayed here");
    log.info("info will be displayed"); //static makes a variable private
}