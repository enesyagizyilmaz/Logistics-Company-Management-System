/*
 * Domestic.h
 *
 *  Created on: 4 Oca 2022
 *      Author: ADMİN
 */

#ifndef DOMESTIC_H_
#define DOMESTIC_H_
//#include<iostream>
#include"Location.h"

//using namespace std;

class Domestic : public Location
	{
		public:

			Domestic(string city,string name);
            Domestic(){

            };
			//city
			string getCity();

    		void setCity(string city);

            int reduceecapacity (int unitSpace){
                ecapacity = ecapacity - unitSpace;
                return ecapacity;
            }
            int reducehcapacity (int unitSpace){
                hcapacity = hcapacity - unitSpace;
                return hcapacity;
            }
            int reduceccapacity (int unitSpace){
                ccapacity = ccapacity - unitSpace;
                return ccapacity;
            }
    		int reducecapacity (int capacity){
    		    this->capacity = capacity;
                return capacity;
    		}
            int getCapacity(){
                capacity = ccapacity + hcapacity + ecapacity;
                return capacity;
            }
    		friend ostream& operator<<(ostream &os, const Domestic &obj)
            {
                cout << " |----------------|  "<<obj.name<<"  |--------------------|" << endl;
    						cout<<"__|"<<endl;
    						cout<<"City:                     "<<obj.city<<endl;
    						cout<<"Warehouse Name:           "<<obj.name<<endl;
                            cout<<"Electronical Capacity:    "<<obj.ecapacity<<endl;
                            cout<<"Home Appliances Capacity: "<<obj.hcapacity<<endl;
                            cout<<"Constuctions Materials:   "<<obj.ccapacity<<endl;
    						cout<<"Total Capacity:           "<<obj.capacity<<endl;
                cout << "------------------------------------------------------" << endl;
    						return os;
    		    		}
	};





#endif /* DOMESTIC_H_ */
