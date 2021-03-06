#ifndef PROCESS_H
#define PROCESS_H

#include <string>
/*
Basic class for Process representation
It contains relevant attributes as shown below
*/
class Process {
 public:
  int Pid();                               // TODO: See src/process.cpp
  std::string User();                      // DONE: See src/process.cpp
  std::string Command();                   // DONE: See src/process.cpp
  float CpuUtilization() const;            // DONE: See src/process.cpp
  void CpuUtilization(long process_ticks, long system_ticks);
  std::string Ram();                       // DONE: See src/process.cpp
  long int UpTime();                       // DONE: See src/process.cpp
  bool operator<(Process const& a) const;  // DONE: See src/process.cpp
  bool operator>(Process const& a) const;
  Process(int pid);

  // DONE: Declare any necessary private members
 private:
 int pid_;
 float cpu_ = 0;
 long cached_process_ticks_ = 0;
 long cached_system_ticks_ = 0;
};

#endif