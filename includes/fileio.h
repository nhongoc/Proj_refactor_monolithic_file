#ifndef FILEIO_H
#define FILEIO_H
#include <string>

//default files to read and write
const std::string SOURCE_FILE 	= "source_file.txt";
const std::string RESULTS_FILE 	= "results_file.txt";
int loadData(const std::string filename, vector<process> &myProcesses);
int saveData(const std::string filename, vector<process> &myProcesses);

#endif
