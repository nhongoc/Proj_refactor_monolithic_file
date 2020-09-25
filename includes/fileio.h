#ifndef FILEIO_H
#define FILEIO_H
#include <string>

int loadData(const std::string filename, std::vector<process> &myProcesses);
int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif
