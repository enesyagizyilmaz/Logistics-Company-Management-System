/*
 * Domestic.cpp
 *
 *  Created on: 4 Oca 2022
 *      Author: ADMİN
 */

#include"Domestic.h"
#include"Location.h"
#include<iostream>
using namespace std;

Domestic::Domestic(string city,string name)
			{
				this->city = city;
				this->name=name;
				cout<<"Warehouse created succesfully"<<endl;
				cout<<"-------------------------------------------------------------"<<endl;
			}
string Domestic::getCity()
    		{
        		return city;
    		}
void Domestic::setCity(string city)
    		{
        		this->city = city;
    		}
