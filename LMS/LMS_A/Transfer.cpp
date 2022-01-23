/*
 * Transfer.cpp
 *
 *  Created on: 4 Oca 2022
 *      Author: ADMİN
 */
#include"Transfer.h"

int Transfer::fee(int km,string location)
		{
			if(location=="turkey")
			{
				cost=km*0.015;
				return cost;
			}
			else if(location=="usa")
			{
				cost=km*0.2;
				return cost;
			}
			else if(location=="uk")
			{
				cost=km*0.2;
				return cost;
			}
			else if(location=="china")
			{
				cost=km*0.15;
				return cost;
			}
			else if(location=="qatar")
			{
				cost=km*0.25;
				return cost;
			}
			else if(location=="russia")
			{
				cost=km*0.12;
				return cost;
			}
			return 0;
		}



