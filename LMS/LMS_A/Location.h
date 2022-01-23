/*
 * Location.h
 *
 *  Created on: 4 Oca 2022
 *      Author: ADMİN
 */

#ifndef LOCATION_H_
#define LOCATION_H_
#include<iostream>
using namespace std;

class Location
{
	protected:
		string country;
		string city;
		string name;
        int ecapacity = 350;
        int hcapacity = 350;
        int ccapacity = 300;
        int capacity = ecapacity + hcapacity + ccapacity;


};




#endif /* LOCATION_H_ */
