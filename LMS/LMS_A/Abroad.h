/*
 * Abroad.h
 *
 *  Created on: 4 Oca 2022
 *      Author: ADMİN
 */

#ifndef ABROAD_H_
#define ABROAD_H_
#include<iostream>
#include"Location.h"
using namespace std;

class Abroad : public Location
	{
		public:
			Abroad(string country,string city,string name);

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


    //cabroad
			string getCountry();

    		void setCountry(string country);

    		friend ostream& operator<<(ostream &os, const Abroad &obj)
    		{
                cout << " |----------------|  "<<obj.name<<"  |--------------------|" << endl;
                            cout<<"__|"<<endl;
    						cout<<"Country:                  "<<obj.country<<endl;
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



#endif /* ABROAD_H_ */
