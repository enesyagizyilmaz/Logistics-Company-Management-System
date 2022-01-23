/*
 * Electronical.h
 *
 *  Created on: 4 Oca 2022
 *      Author: ADMİN
 */

#ifndef ELECTRONICAL_H_
#define ELECTRONICAL_H_
#include<iostream>
#include"Item.h"
using namespace std;

class Electronical : public Item
	{
		public:
			Electronical(string name,int volume,int weight,int amount);

			friend ostream& operator<<(ostream&, const Electronical&);
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





#endif /* ELECTRONICAL_H_ */
