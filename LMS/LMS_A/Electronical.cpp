/*
 * Electronical.cpp
 *
 *  Created on: 4 Oca 2022
 *      Author: ADMİN
 */
#include"Electronical.h"
#include"Item.h"

Electronical::Electronical(string name,int volume,int weight,int amount)
			{
				this->name = name;
				this->volume = volume;
				this->weight = weight;
				this->amount = amount;
				cout<<"Electronical item created succesfully"<<endl;
				cout<<"-------------------------------------------------------------"<<endl;
			}
ostream& operator<<(ostream &os, const Electronical &obj)
			{
				cout<<"-"<<endl;
				cout<<"Name: "<<obj.name<<endl;
				cout<<"Volume: "<<obj.volume<<endl;
				cout<<"Weight: "<<obj.weight<<endl;
				cout<<"Amount: "<<obj.amount<<endl;
                cout<<"Unit Space: "<<obj.volume*obj.weight*obj.amount*0.1<<"Us"<<endl;
			return os;
    		}
string Electronical::getName()
    		{
        		return name;
    		}
void Electronical::setName(string name)
    		{
        		this->name = name;
    		}
int Electronical::getVolume()
    		{
        		return volume;
    		}
void Electronical::setVolume(int volume)
    		{
        		this->volume = volume;
    		}
int Electronical::getWeight()
    		{
        		return weight;
    		}
void Electronical::setWeight(int weight)
    		{
        		this->weight = weight;
    		}
