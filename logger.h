#pragma once

#include <iostream>
#include <string>

enum OutputDestination : unsigned char {
    STD_OUT = 0, STD_ERR, OUT_FILE
};

enum LogLevel : unsigned char {
    L_BASE = 0, L_WARNING, L_DEBUG
};

class Logger
{
    Logger();

    OutputDestination m_out_dst;
    LogLevel m_log_level;

    OutputDestination getOutputDestinationImpl() const;
    void setOutputDestinationImpl(OutputDestination od);

    LogLevel getLogLevelImpl() const;
    void setLogLevelImpl(LogLevel ll);

public:
    /*Singleton class, so no copying*/
    Logger(const Logger&) = delete;
    Logger& operator= (const Logger&) = delete;

    static Logger& GetInstance();

    static OutputDestination getOutputDestination();
    static void setOutputDestination(OutputDestination od);

    static LogLevel getLogLevel();
    static void setLogLevel(LogLevel ll);

};
