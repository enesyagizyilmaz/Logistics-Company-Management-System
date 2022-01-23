/*
 * Home_Appliances.h
 *
 *  Created on: 4 Oca 2022
 *      Author: ADMİN
 */

#ifndef HOME_APPLIANCES_H_
#define HOME_APPLIANCES_H_
#include<iostream>
#include"Item.h"

class Home_Appliances : public Item
	{
		public:
			Home_Appliances(string name,int volume,int weight,int amount);

			friend ostream& operator<<(ostream &os, const Home_Appliances &obj)
			{
							cout<<"-"<<endl;
							cout<<"Name: "<<obj.name<<endl;
							cout<<"Volume: "<<obj.volume<<endl;
							cout<<"Weight: "<<obj.weight<<endl;
							cout<<"Amount: "<<obj.amount<<endl;
							cout<<obj.volume*obj.weight*obj.amount*0.1<<endl;
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





#endif /* HOME_APPLIANCES_H_ */
