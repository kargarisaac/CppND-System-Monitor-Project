#include "processor.h"

Processor::Processor(){
    tAll_ = LinuxParser::Jiffies();
    tIdle_ = LinuxParser::IdleJiffies();
}
// Done: Return the aggregate CPU utilization
float Processor::Utilization() { 
    float tAllOld = tAll_;
    float tIdleOld = tIdle_;
    tAll_ = LinuxParser::Jiffies();
    tIdle_ = LinuxParser::IdleJiffies();
    float rValue = ((tAll_ - tAllOld) - (tIdle_ - tIdleOld)) / (tAllOld - tAllOld);
    return rValue > 0.0 ? rValue : 0.0;
}