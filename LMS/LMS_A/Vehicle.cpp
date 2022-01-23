
/*
 * Vehicle.cpp
 *
 *  Created on: 4 Oca 2022
 *      Author: ADMİN
 */

#include"Vehicle.h"

string Vehicle::vehicle(string city1,string city2)
		{
			if( (city1=="ankara"&&city2=="konya") || (city1=="konya"&&city2=="ankara") )
			{
				string vehicle;
				cout<<"Options from Konya <-> Ankara : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if( (city1=="ankara"&&city2=="istanbul") || (city1=="istanbul"&&city2=="ankara") )
			{
				string vehicle;
				cout<<"Options from Istanbul <-> Ankara : truck,train: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if( (city1=="ankara"&&city2=="izmir") || (city1=="izmir"&&city2=="ankara") )
			{
				string vehicle;
				cout<<"Options from Ankara <-> Izmir : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if( (city1=="ankara"&&city2=="kocaeli") || (city1=="kocaeli"&&city2=="ankara") )
			{
				string vehicle;
				cout<<"Options from Ankara <-> Kocaeli : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if( (city1=="istanbul"&&city2=="izmir") || (city2=="izmir"&&city2=="istanbul") )
			{
				string vehicle;
				cout<<"Options from Istanbul <-> Izmir : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if( (city1=="istanbul"&&city2=="konya") || (city1=="konya"&&city2=="istanbul") )
			{
				string vehicle;
				cout<<"Options from Istanbul <-> Konya : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if( (city1=="istanbul"&&city2=="kocaeli") || (city1=="kocaeli"&&city2=="istanbul") )
			{
				string vehicle;
				cout<<"Options from Istanbul <-> Kocaeli : truck,train,ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if( (city1=="izmir"&&city2=="konya") || (city1=="konya"&&city2=="izmir") )
			{
				string vehicle;
				cout<<"Options from Izmir <-> Konya : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if( (city1=="izmir"&&city2=="kocaeli") || (city1=="kocaeli"&&city2=="izmir") )
			{
				string vehicle;
				cout<<"Options from Izmir <-> Kocaeli : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if( (city1=="konya"&&city2=="kocaeli") || (city1=="kocaeli"&&city2=="konya") )
			{
				string vehicle;
				cout<<"Options from Konya <-> Kocaeli : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="nyc"&&city2=="nj") || (city1=="nj"&&city2=="nyc"))
			{
				string vehicle;
				cout<<"Options from New York City <-> New Jersey : truck,train,ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="nyc"&&city2=="la") || (city1=="la"&&city2=="nyc"))
			{
				string vehicle;
				cout<<"Options from New York City <-> Los Angeles : truck,train,ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="nyc"&&city2=="london") || (city1=="london"&&city2=="nyc"))
			{
				string vehicle;
				cout<<"Options from New York City <-> London : ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="nyc"&&city2=="manchester") || (city1=="manchester"&&city2=="nyc"))
			{
				string vehicle;
				cout<<"Options from Manchester <-> London : airplane: ";
				vehicle="airplane";
				return vehicle;

			}
			 if((city1=="nyc"&&city2=="moscow") || (city1=="moscow"&&city2=="nyc"))
			{
				string vehicle;
				cout<<"Options from New York City <-> Moscow : airplane: ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="nyc"&&city2=="petersburg") || (city1=="petersburg"&&city2=="nyc"))
			{
				string vehicle;
				cout<<"Options from New York City <-> St. Petersburg : ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="nyc"&&city2=="pekin") || (city1=="pekin"&&city2=="nyc"))
			{
				string vehicle;
				cout<<"Options from New York City <-> St. Petersburg : airplane: ";
				return vehicle;
			}
			 if((city1=="nyc"&&city2=="shangai") || (city1=="shangai"&&city2=="nyc"))
			{
				string vehicle;
				cout<<"Options from New York City <-> Shangai : ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="nyc"&&city2=="doha") || (city1=="doha"&&city2=="nyc"))
			{
				string vehicle;
				cout<<"Options from New York City <-> Doha : ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="nyc"&&city2=="museyid") || (city1=="museyid"&&city2=="nyc"))
			{
				string vehicle;
				cout<<"Options from New York City <-> Museyid : ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="nj"&&city2=="la") || (city1=="la"&&city2=="nj"))
			{
				string vehicle;
				cout<<"Options from New Jersey <-> Los Angeles : truck,train,ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="nj"&&city2=="london") || (city1=="london"&&city2=="nj"))
			{
				string vehicle;
				cout<<"Options from New York City <-> London : ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="nj"&&city2=="manchester") || (city1=="manchester"&&city2=="nj"))
			{
				string vehicle;
				cout<<"Options from New Jersey <-> Manchester : ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="nj"&&city2=="moscow") || (city1=="moscow"&&city2=="nj"))
			{
				string vehicle;
				cout<<"Options from New Jersey <-> Moscow : ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="nj"&&city2=="petersburg") || (city1=="petersburg"&&city2=="nj"))
			{
				string vehicle;
				cout<<"Options from New Jersey <-> St. Petersburg : ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="nj"&&city2=="pekin") || (city1=="pekin"&&city2=="nj"))
			{
				string vehicle;
				cout<<"Options from New Jersey <-> Pekin : airplane: ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="nj"&&city2=="shangai") || (city1=="shangai"&&city2=="nj"))
			{
				string vehicle;
				cout<<"Options from New Jersey <-> Shangai : ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="nj"&&city2=="doha") || (city1=="doha"&&city2=="nj"))
			{
				string vehicle;
				cout<<"Options from New Jersey <-> Doha : ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="nj"&&city2=="museyid") || (city1=="museyid"&&city2=="nj"))
			{
				string vehicle;
				cout<<"Options from New Jersey <-> Museyid : ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="la"&&city2=="london") || (city1=="london"&&city2=="la"))
			{
				string vehicle;
				cout<<"Options from Los Angeles <-> London : airplane: ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="la"&&city2=="manchester") || (city1=="manchester"&&city2=="la"))
			{
				string vehicle;
				cout<<"Options from Los Angeles <-> Manchester : airplane: ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="la"&&city2=="moscow") || (city1=="moscow"&&city2=="la"))
			{
				string vehicle;
				cout<<"Options from Los Angeles <-> Moscow : airplane: ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="la"&&city2=="petersburg") || (city1=="petersburg"&&city2=="la"))
			{
				string vehicle;
				cout<<"Options from Los Angeles <-> St. Petersburg : ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="la"&&city2=="pekin") || (city1=="pekin"&&city2=="la"))
			{
				string vehicle;
				cout<<"Options from Los Angeles <-> Moscow : airplane: ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="la"&&city2=="shangai") || (city1=="shangai"&&city2=="la"))
			{
				string vehicle;
				cout<<"Options from Los Angeles <-> Shangai : ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="la"&&city2=="doha") || (city1=="doha"&&city2=="la"))
			{
				string vehicle;
				cout<<"Options from Los Angeles <-> Doha : ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="la"&&city2=="museyid") || (city1=="museyid"&&city2=="la"))
			{
				string vehicle;
				cout<<"Options from Los Angeles <-> Museyid : ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="london"&&city2=="manchester") || (city1=="manchester"&&city2=="london"))
			{
				string vehicle;
				cout<<"Options from London <-> Manchester : truck,airplane,train: ";
				cin>>vehicle;
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
			}
			 if((city1=="london"&&city2=="moscow") || (city1=="moscow"&&city2=="london"))
			{
				string vehicle;
				cout<<"Options from London <-> Moscow : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="london"&&city2=="petersburg") || (city1=="petersburg"&&city2=="london"))
			{
				string vehicle;
				cout<<"Options from London <-> Petersburg : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="london"&&city2=="pekin") || (city1=="pekin"&&city2=="london"))
			{
				string vehicle;
				cout<<"Options from London <-> Pekin : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="london"&&city2=="shangai") || (city1=="shangai"&&city2=="london"))
			{
				string vehicle;
				cout<<"Options from London <-> Shangai : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="london"&&city2=="doha") || (city1=="doha"&&city2=="london"))
			{
				string vehicle;
				cout<<"Options from London <-> Doha : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="london"&&city2=="museyid") || (city1=="museyid"&&city2=="doha"))
			{
				string vehicle;
				cout<<"Options from London <-> Museyid : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="manchester"&&city2=="moscow") || (city1=="moscow"&&city2=="manchester"))
			{
				string vehicle;
				cout<<"Options from London <-> Moscow : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="manchester"&&city2=="petersburg") || (city1=="petersburg"&&city2=="manchester"))
			{
				string vehicle;
				cout<<"Options from Manchester <-> Petersburg : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="manchester"&&city2=="pekin") || (city1=="pekin"&&city2=="manchester"))
			{
				string vehicle;
				cout<<"Options from Manchester <-> Pekin : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="manchester"&&city2=="shangai") || (city1=="shangai"&&city2=="manchester"))
			{
				string vehicle;
				cout<<"Options from Manchester <-> Shangai : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="manchester"&&city2=="doha") || (city1=="doha"&&city2=="manchester"))
			{
				string vehicle;
				cout<<"Options from Manchester <-> Doha : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="manchester"&&city2=="museyid") || (city1=="museyid"&&city2=="manchester"))
			{
				string vehicle;
				cout<<"Options from Manchester <-> Museyid : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="moscow"&&city2=="petersburg") || (city1=="petersburg"&&city2=="moscow"))
			{
				string vehicle;
				cout<<"Options from Moscow <-> Petersburg : truck,train,ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="moscow"&&city2=="pekin") || (city1=="pekin"&&city2=="moscow"))
			{
				string vehicle;
				cout<<"Options from Moscow <-> Pekin : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="moscow"&&city2=="shangai") || (city1=="shangai"&&city2=="moscow"))
			{
				string vehicle;
				cout<<"Options from Moscow <-> Shangai : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="moscow"&&city2=="doha") || (city1=="doha"&&city2=="moscow"))
			{
				string vehicle;
				cout<<"Options from Moscow <-> Doha : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="moscow"&&city2=="museyid") || (city1=="museyid"&&city2=="moscow"))
			{
				string vehicle;
				cout<<"Options from Moscow <-> Museyid : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="petersburg"&&city2=="pekin") || (city1=="pekin"&&city2=="petersburg"))
			{
				string vehicle;
				cout<<"Options from St. Petersburg <-> Pekin : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="petersburg"&&city2=="shangai") || (city1=="shangai"&&city2=="petersburg"))
			{
				string vehicle;
				cout<<"Options from St. Petersburg <-> Shangai : truck,train,airplane,ship: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			 if((city1=="petersburg"&&city2=="doha") || (city1=="doha"&&city2=="petersburg"))
			{
				string vehicle;
				cout<<"Options from St. Petersburg <-> Doha : truck,train,ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="petersburg"&&city2=="museyid") || (city1=="museyid"&&city2=="petersburg"))
			{
				string vehicle;
				cout<<"Options from St. Petersburg <-> Petersburg : truck,train,ship,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="pekin"&&city2=="shangai") || (city1=="shangai"&&city2=="pekin"))
			{
				string vehicle;
				cout<<"Options from Moscow <-> Petersburg : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="pekin"&&city2=="doha") || (city1=="doha"&&city2=="pekin"))
			{
				string vehicle;
				cout<<"Options from Pekin <-> Doha : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="pekin"&&city2=="museyid") || (city1=="museyid"&&city2=="pekin"))
			{
				string vehicle;
				cout<<"Options from Pekin <-> Museyid : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="shangai"&&city2=="doha") || (city1=="doha"&&city2=="shangai"))
			{
				string vehicle;
				cout<<"Options from Shangai <-> Doha : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="shangai"&&city2=="museyid") || (city1=="museyid"&&city2=="shangai"))
			{
				string vehicle;
				cout<<"Options from Shangai <-> Museyid : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
			}
			 if((city1=="doha"&&city2=="museyid") || (city1=="museyid"&&city2=="doha"))
			{
				string vehicle;
				cout<<"Options from Doha <-> Museyid : truck,train,airplane: ";
				cin>>vehicle;
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="train")
				{
					return vehicle;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			 if((city1=="ankara"&&city2=="nyc") || (city1=="nyc"&&city2=="ankara"))
			{
				string vehicle;
				cout<<"Options from Ankara <-> New York City : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="ankara"&&city2=="nj") || (city1=="nj"&&city2=="ankara"))
			{
				string vehicle;
				cout<<"Options from Ankara <-> New Jersey : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="ankara"&&city2=="la") || (city1=="la"&&city2=="ankara"))
			{
				string vehicle;
				cout<<"Options from Ankara <-> Los Angeles : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="ankara"&&city2=="london") || (city1=="london"&&city2=="ankara"))
			{
				string vehicle;
				cout<<"Options from Ankara <-> London : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="ankara"&&city2=="manchester") || (city1=="manchester"&&city2=="ankara"))
			{
				string vehicle;
				cout<<"Options from Ankara <-> Manchester : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="ankara"&&city2=="moscow") || (city1=="moscow"&&city2=="ankara"))
			{
				string vehicle;
				cout<<"Options from Ankara <-> Moscow : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			 if((city1=="ankara"&&city2=="petersburg") || (city1=="petersburg"&&city2=="ankara"))
			{
				string vehicle;
				cout<<"Options from Ankara <-> Petersburg : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			 if((city1=="ankara"&&city2=="pekin") || (city1=="pekin"&&city2=="ankara"))
			{
				string vehicle;
				cout<<"Options from Ankara <-> Pekin : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			 if((city1=="ankara"&&city2=="shangai") || (city1=="shangai"&&city2=="ankara"))
			{
				string vehicle;
				cout<<"Options from Ankara <-> Shangai : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			 if((city1=="ankara"&&city2=="doha") || (city1=="doha"&&city2=="ankara"))
			{
				string vehicle;
				cout<<"Options from Ankara <-> Doha : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			 if((city1=="ankara"&&city2=="museyid") || (city1=="museyid"&&city2=="ankara"))
			{
				string vehicle;
				cout<<"Options from Ankara <-> Museyid : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			 if((city1=="istanbul"&&city2=="nyc") || (city1=="nyc"&&city2=="istanbul"))
			{
				string vehicle;
				cout<<"Options from Istnabul <-> Moscow : train,airplane,truck,ship: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			 if((city1=="istanbul"&&city2=="nj") || (city1=="nj"&&city2=="istanbul"))
			{
				string vehicle;
				cout<<"Options from Istanbul <-> Moscow : airplane,ship: ";
				cin>>vehicle;
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			 if((city1=="istanbul"&&city2=="la") || (city1=="la"&&city2=="istanbul"))
			{
				string vehicle;
				cout<<"Options from Istanbul <-> Moscow : airplane,ship: ";
				cin>>vehicle;
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			 if((city1=="istanbul"&&city2=="london") || (city1=="london"&&city2=="istanbul"))
			{
				string vehicle;
				cout<<"Options from Istanbul <-> London : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="istanbul"&&city2=="manchester") || (city1=="manchester"&&city2=="istanbul"))
			{
				string vehicle;
				cout<<"Options from Istanbul <-> Manchester : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="istanbul"&&city2=="moscow") || (city1=="moscow"&&city2=="istanbul"))
			{
				string vehicle;
				cout<<"Options from Istanbul <-> Moscow : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			 if((city1=="istanbul"&&city2=="petersburg") || (city1=="petersburg"&&city2=="istanbul"))
			{
				string vehicle;
				cout<<"Options from Istanbul <-> St. Petersburg : train,airplane,truck,ship: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			 if((city1=="istanbul"&&city2=="pekin") || (city1=="pekin"&&city2=="istanbul"))
			{
				string vehicle;
				cout<<"Options from Istanbul <-> Pekin : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			 if((city1=="istanbul"&&city2=="shangai") || (city1=="shangai"&&city2=="istanbul"))
			{
				string vehicle;
				cout<<"Options from Istanbul <-> Shangai : train,airplane,truck,ship: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			 if((city1=="istanbul"&&city2=="doha") || (city1=="doha"&&city2=="istanbul"))
			{
				string vehicle;
				cout<<"Options from Istanbul <-> Doha : train,airplane,truck,ship: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			 if((city1=="istanbul"&&city2=="museyid") || (city1=="museyid"&&city2=="istanbul"))
			{
				string vehicle;
				cout<<"Options from Istanbul <-> Museyid : train,airplane,truck,ship: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			 if((city1=="izmir"&&city2=="nyc") || (city1=="nyc"&&city2=="istanbul"))
			{
				string vehicle;
				cout<<"Options from Izmır <-> New York City : airplane,ship: ";
				cin>>vehicle;
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			 if((city1=="izmir"&&city2=="nj") || (city1=="nj"&&city2=="izmir"))
			{
				string vehicle;
				cout<<"Options from Izmır <-> New Jersey : train,airplane,truck,ship: ";
				cin>>vehicle;
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			 if((city1=="izmir"&&city2=="la") || (city1=="la"&&city2=="istanbul"))
			{
				string vehicle;
				cout<<"Options from Izmır <-> Los Angeles : train,airplane,truck,ship: ";
				cin>>vehicle;
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			 if((city1=="izmir"&&city2=="london") || (city1=="london"&&city2=="izmir"))
			{
				string vehicle;
				cout<<"Options from Izmır <-> London : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="izmir"&&city2=="manchester") || (city1=="manchester"&&city2=="izmir"))
			{
				string vehicle;
				cout<<"Options from Izmır <-> Manchester : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="izmir"&&city2=="moscow") || (city1=="moscow"&&city2=="izmir"))
			{
				string vehicle;
				cout<<"Options from Istanbul <-> Museyid : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			 if((city1=="izmir"&&city2=="petersburg") || (city1=="petersburg"&&city2=="izmir"))
			{
				string vehicle;
				cout<<"Options from Izmir <-> St. Petersburg : train,airplane,truck,ship: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			if((city1=="izmir"&&city2=="pekin") || (city1=="pekin"&&city2=="izmir"))
			{
				string vehicle;
				cout<<"Options from Izmir <-> Pekin : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			 if((city1=="izmir"&&city2=="shangai") || (city1=="shangai"&&city2=="izmir"))
			{
				string vehicle;
				cout<<"Options from Izmir <-> Shangai : train,airplane,truck,ship: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			 if((city1=="izmir"&&city2=="doha") || (city1=="doha"&&city2=="izmir"))
			{
				string vehicle;
				cout<<"Options from Izmir <-> Doha : train,airplane,truck,ship: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			 if((city1=="izmir"&&city2=="museyid") || (city1=="museyid"&&city2=="izmir"))
			{
				string vehicle;
				cout<<"Options from Izmir <-> Museyid : train,airplane,truck,ship: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			 if((city1=="konya"&&city2=="nyc") || (city1=="nyc"&&city2=="konya"))
			{
				string vehicle;
				cout<<"Options from Konya <-> New York City : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="konya"&&city2=="nj") || (city1=="nj"&&city2=="konya"))
			{
				string vehicle;
				cout<<"Options from Konya <-> New Jersey : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="konya"&&city2=="la") || (city1=="la"&&city2=="konya"))
			{
				string vehicle;
				cout<<"Options from Konya <-> Los Angeles : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="konya"&&city2=="manchester") || (city1=="manchester"&&city2=="konya"))
			{
				string vehicle;
				cout<<"Options from Konya <-> Manchester : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			 if((city1=="konya"&&city2=="moscow") || (city1=="moscow"&&city2=="konya"))
			{
				string vehicle;
				cout<<"Options from Konya <-> Moscow : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			 if((city1=="konya"&&city2=="petersburg") || (city1=="petersburg"&&city2=="konya"))
			{
				string vehicle;
				cout<<"Options from Konya <-> St. Petersburg : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			 if((city1=="konya"&&city2=="pekin") || (city1=="pekin"&&city2=="konya"))
			{
				string vehicle;
				cout<<"Options from Konya <-> Pekin : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			 if((city1=="konya"&&city2=="shangai") || (city1=="shangai"&&city2=="konya"))
			{
				string vehicle;
				cout<<"Options from Konya <-> Shangai : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			 if((city1=="konya"&&city2=="doha") || (city1=="doha"&&city2=="konya"))
			{
				string vehicle;
				cout<<"Options from Konya <-> Doha : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			 if((city1=="konya"&&city2=="museyid") || (city1=="museyid"&&city2=="konya"))
			{
				string vehicle;
				cout<<"Options from Konya <-> Museyid : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			 if((city1=="kocaeli"&&city2=="nyc") || (city1=="nyc"&&city2=="kocaeli"))
			{
				string vehicle;
				cout<<"Options from Kocaeli <-> New York City : airplane,ship: ";
				cin>>vehicle;
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			if((city1=="kocaeli"&&city2=="nj") || (city1=="nj"&&city2=="kocaeli"))
			{
				string vehicle;
				cout<<"Options from Kocaeli <-> New Jersey : train,airplane,truck,ship: ";
				cin>>vehicle;
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			if((city1=="kocaeli"&&city2=="la") || (city1=="la"&&city2=="kocaeli"))
			{
				string vehicle;
				cout<<"Options from Kocaeli <-> Los Angeles : train,airplane,truck,ship: ";
				cin>>vehicle;
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			if((city1=="kocaeli"&&city2=="london") || (city1=="london"&&city2=="kocaeli"))
			{
				string vehicle;
				cout<<"Options from Kocaeli <-> London : airplane ";
				vehicle=="airplane";
				return vehicle;
			}

			if((city1=="kocaeli"&&city2=="manchester") || (city1=="manchester"&&city2=="kocaeli"))
			{
				string vehicle;
				cout<<"Options from Kocaeli <-> Manchester : airplane ";
				vehicle=="airplane";
				return vehicle;
			}
			if((city1=="kocaeli"&&city2=="moscow") || (city1=="moscow"&&city2=="kocaeli"))
			{
				string vehicle;
				cout<<"Options from Kocaeli <-> Moscow : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			if((city1=="kocaeli"&&city2=="petersburg") || (city1=="petersburg"&&city2=="kocaeli"))
			{
				string vehicle;
				cout<<"Options from Kocaeli <-> St. Petersburg : train,airplane,truck,ship: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			if((city1=="kocaeli"&&city2=="pekin") || (city1=="pekin"&&city2=="kocaeli"))
			{
				string vehicle;
				cout<<"Options from Kocaeli <-> St. Petersburg : train,airplane,truck: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
			}
			if((city1=="kocaeli"&&city2=="shangai") || (city1=="shangai"&&city2=="kocaeli"))
			{
				string vehicle;
				cout<<"Options from Kocaeli <-> Shangai : train,airplane,truck,ship: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			if((city1=="kocaeli"&&city2=="doha") || (city1=="doha"&&city2=="kocaeli"))
			{
				string vehicle;
				cout<<"Options from Kocaeli <-> Doha : train,airplane,truck,ship: ";
				cin>>vehicle;
				if(vehicle=="train")
				{
					return vehicle ;
				}
				if(vehicle=="airplane")
				{
					return vehicle;
				}
				if(vehicle=="truck")
				{
					return vehicle;
				}
				if(vehicle=="ship")
				{
					return vehicle;
				}
			}
			return 0;
		}


