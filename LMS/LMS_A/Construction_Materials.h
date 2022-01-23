/*
 * Construction_Materials.h
 *
 *  Created on: 4 Oca 2022
 *      Author: ADMİN
 */

#ifndef CONSTRUCTION_MATERIALS_H_
#define CONSTRUCTION_MATERIALS_H_
#include<iostream>
#include<vector>
#include"Item.h"
using namespace std;

class Construction_Materials : public Item
	{
		public:
			Construction_Materials(string name,int volume,int weight,int amount);

			friend ostream& operator<<(ostream &os, const Construction_Materials &obj)
			{
							cout<<"-"<<endl;
							cout<<"Name: "<<obj.name<<endl;
							cout<<"Volume: "<<obj.volume<<endl;
							cout<<"Weight: "<<obj.weight<<endl;
							cout<<"Amount: "<<obj.amount<<endl;
							return os;
			    		}

			//name
			string getName();

    		void setName(string name);

 			//volume
    		int getVolume();

    		void setVolume(int volume);

 			//weight
    		int getWeight();

    		void setWeight(int weight);
};





#endif /* CONSTRUCTION_MATERIALS_H_ */
