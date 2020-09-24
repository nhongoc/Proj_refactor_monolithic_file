//============================================================================
// Name        : proj_refactor_file
// Author      :
// Version     :
// Copyright   : Steal this code!
// Description : learn how to refactor files into a sensible directory structure
//============================================================================
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "../includes/constants.h"

//default files to read and write data
const std::string SOURCE_FILE 	= "source_file.txt";
const std::string RESULTS_FILE 	= "results_file.txt";

//some data structures
enum SORT_ORDER { PROCESS_NUMBER, CPU_TIME, START_TIME };
struct process{	int process_number=UNINITIALIZED;
				int cpu_time=UNINITIALIZED;
				int start_time=UNINITIALIZED;};

//attempt to open file 'filename' and read in all data
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int loadData(const std::string filename, vector<process> &myProcesses){
	return UNIMPLEMENTED;
}

//attempt to create or open file 'filename' to write all data to
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int saveData(const std::string filename, vector<process> &myProcesses){
	return UNIMPLEMENTED;
}

//sorts vector inplace based on mySortOrder (inplace means the vector is modified)
//returns nothing
void sortData(const SORT_ORDER &mySortOrder,vector<process> &myProcesses){

}

//gets the next process from the vector, then removes it from the vector
//returns removed process
process getNext(vector<process> &myProcesses){
	process p;
	return p;
}

//returns the number of entries in the vector
int getSize(vector<process> &myProcesses){
	return UNIMPLEMENTED;
}

//attempt to correct missing data
//if cannot correct, then drop row
//return number of rows in myProcesses
int handleMissingData(vector<process> &myProcesses){
	return NO_DATA_TO_WORK_ON;
}

int main() {
	vector<process> myProcesses;

	//assumme failure
	int iRet = FAIL;

	//get raw data
	iRet = loadData(SOURCE_FILE, myProcesses);
	if (iRet != SUCCESS)
		return iRet;

	iRet = handleMissingData(myProcesses);
	if (iRet != SUCCESS)
		return iRet;

	//sort the data
	sortData(SORT_ORDER::START_TIME,myProcesses);

	//how many entries in vector
	iRet = getSize(myProcesses);
	if (iRet < EMPTY)
		return iRet;

	process p = getNext(myProcesses);
	if (p.cpu_time == UNINITIALIZED)
		return

	//save processed data
	iRet = saveData(RESULTS_FILE, myProcesses);
	return iRet;
}
