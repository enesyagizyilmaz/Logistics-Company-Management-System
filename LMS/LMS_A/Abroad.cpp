/*
 * Abroad.cpp
 *
 *  Created on: 4 Oca 2022
 *      Author: ADMİN
 */
#include"Abroad.h"
#include"Location.h"

Abroad::Abroad(string country,string city,string name)
			{
				this->country = country;
				this->city = city;
				this->name=name;
				cout<<"Warehouse created succesfully"<<endl;
				cout<<"-------------------------------------------------------------"<<endl;
			}
string Abroad::getCity()
    		{
        		return city;
    		}
void Abroad::setCity(string city)
    		{
        		this->city = city;
    		}
string Abroad::getCountry()
    		{
        		return country;
    		}
void Abroad::setCountry(string country)
    		{
        		this->country = country;
    		}
