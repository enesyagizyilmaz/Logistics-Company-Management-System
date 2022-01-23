/*
 * FindDistance.h
 *
 *  Created on: 4 Oca 2022
 *      Author: ADMİN
 */

#ifndef FINDDISTANCE_H_
#define FINDDISTANCE_H_
#include<iostream>
#include<fstream>
using namespace std;
class FindDistance
{
	public:
		int km;
		int findDistance(string city1,string city2);
		int len[12];
		int * mPath;
		int * functionFindMin(int *array, int row, int cols, int source, int destination);
		~FindDistance();
};

#endif /* FINDDISTANCE_H_ */
