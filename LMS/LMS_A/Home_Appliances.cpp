/*
 * Home_Appliances.cpp
 *
 *  Created on: 4 Oca 2022
 *      Author: ADMİN
 */
#include"Home_Appliances.h"


Home_Appliances::Home_Appliances(string name,int volume,int weight,int amount)
			{
				this->name = name;
				this->volume = volume;
				this->weight = weight;
                this->amount = amount;
				cout<<"Home appliance item created succesfully"<<endl;
				cout<<"-------------------------------------------------------------"<<endl;
			}

string Home_Appliances::getName()
    		{
        		return name;
    		}
void Home_Appliances::setName(string name)
    		{
        		this->name = name;
    		}
int Home_Appliances::getVolume()
    		{
        		return volume;
    		}
void Home_Appliances::setVolume(int volume)
    		{
        		this->volume = volume;
    		}
int Home_Appliances::getWeight()
    		{
        		return weight;
   	 		}
void Home_Appliances::setWeight(int weight) {
    this->weight = weight;
}


