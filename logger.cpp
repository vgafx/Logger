#include "logger.h"

Logger::Logger()
{
    m_out_dst = STD_OUT;
    m_log_level = L_BASE;
    std::cout << "Logger created!\n";
}

OutputDestination Logger::getOutputDestinationImpl() const
{
    return m_out_dst;
}

void Logger::setOutputDestinationImpl(OutputDestination od)
{
    m_out_dst = od;
}

LogLevel Logger::getLogLevelImpl() const
{
    return m_log_level;
}

void Logger::setLogLevelImpl(LogLevel ll)
{
    m_log_level = ll;
}

/*Called by public methods. Creates the instance on 1st call*/
Logger &Logger::GetInstance()
{
    static Logger instance;
    return instance;
}

OutputDestination Logger::getOutputDestination()
{
    return GetInstance().getOutputDestinationImpl();
}

void Logger::setOutputDestination(OutputDestination od)
{
    GetInstance().setOutputDestinationImpl(od);
}

LogLevel Logger::getLogLevel()
{
    return GetInstance().getLogLevelImpl();
}

void Logger::setLogLevel(LogLevel ll)
{
    GetInstance().setLogLevelImpl(ll);
}
