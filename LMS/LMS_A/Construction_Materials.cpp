/*
 * Construction_Materials.cpp
 *
 *  Created on: 4 Oca 2022
 *      Author: ADMİN
 */
#include<vector>
#include"Construction_Materials.h"
#include"Item.h"

Construction_Materials::Construction_Materials(string name,int volume,int weight,int amount)
			{
				this->name = name;
				this->volume = volume;
				this->weight = weight;
                this->amount = amount;
				cout<<"Construction material created successfully"<<endl;
				cout<<"-------------------------------------------------------------"<<endl;
			}

string Construction_Materials::getName()
    		{
        		return name;
    		}
void Construction_Materials::setName(string name)
    		{
        		this->name = name;
    		}
int Construction_Materials::getVolume()
    		{
       		 	return volume;
    		}
void Construction_Materials::setVolume(int volume)
    		{
        		this->volume = volume;
    		}
int Construction_Materials::getWeight()
    		{
        		return weight;
    		}
void Construction_Materials::setWeight(int weight)
    		{
        		this->weight = weight;
    		}
