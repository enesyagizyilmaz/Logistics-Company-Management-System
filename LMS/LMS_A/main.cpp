//============================================================================
// Name        : LSM.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include <windows.h>
#include <conio.h>  
#include"User.h"
#include"Item.h"
#include"Electronical.h"
#include"Home_Appliances.h"
#include"Construction_Materials.h"
#include"Location.h"
#include"Domestic.h"
#include"Abroad.h"
#include"Transfer.h"
#include"Vehicle.h"
#include"FindDistance.h"
using namespace std;

const string password = "root";
const string admin_name = "admin";


int main()
{
    vector<Domestic>domestic;
    vector<Abroad>abroad;
    vector<Electronical>electronical;
    vector<Home_Appliances>home_appliances;
    vector<Construction_Materials>construction_materials;
    vector<User>user;
    domestic.push_back(Domestic("ankara","Ostim"));
    domestic.push_back(Domestic("istanbul","Gungoren"));
    domestic.push_back(Domestic("izmir","Guzelbahce"));
    domestic.push_back(Domestic("konya","Aydinlik"));
    domestic.push_back(Domestic("kocaeli","Gebze"));
    ifstream okumaDosyasi;
    string satir;
    okumaDosyasi.open("logo.txt");
    for(int i=0; i<20; i++){
	getline(okumaDosyasi, satir);
    cout<<satir<<endl;
	Sleep(15);}
    okumaDosyasi.close();
        cout<<"-------------------------------------------------------------"<<endl;
	for(int i=0;;i++)
	{
		Transfer transfer;
		int choice1;
		cout<<"1-Admin\n2-User\n3-Exit"<<endl;
		cin>>choice1;
		cout<<"-------------------------------------------------------------"<<endl;
		if(choice1==1) {

            string name,pass;
            cout << "Enter your name: ";
            cin >> name;
			cout << "Enter your password: ";
			cin >> pass;
            if (admin_name == name && password == pass) {
                int choice2;
                cout << "Admin" << endl;
                cout << "1-Warehouses\n2-Products\n3-Product Transfer\n4-Back" << endl;
                cin >> choice2;
                cout << "-------------------------------------------------------------" << endl;
                if (choice2 == 1) {
                    for (int i = 0;; i++) {
                        int choice2_1;
                        cout << "Warehouse List" << endl;
                        cout << "1-Create Warehouse\n2-Display Warehouses\n3-Exit" << endl;
                        cin >> choice2_1;
                        cout << "-------------------------------------------------------------" << endl;
                        if (choice2_1 == 1) {
                            int choice2_1_1;
                            cout << "1-Create a warehouse for domestic\n2-Create a warehouse for abroad" << endl;
                            cin >> choice2_1_1;
                            cout << "-------------------------------------------------------------" << endl;
                            if (choice2_1_1 == 1) {
                                string city, name;
                                while(1) {
                                    cout<< "Enter the city name(Choose one of them:ankara,istanbul,izmir,konya,kocaeli): ";
                                    cin >> city;
                                    if (city == "ankara" || city == "istanbul" || city == "izmir" || city == "konya" ||
                                        city == "kocaeli") {
                                        break;
                                    } else {
                                        cout << "There is no warehouse in this location." << endl;
                                    }
                                }

                                cout << "Enter the warehouse name(without spaces): ";
                                cin >> name;
                                domestic.push_back(Domestic(city, name));
                            }
                            if (choice2_1_1 == 2) {
                                string country, city, name;
                                cout << "Enter the country name(Choose one of them:usa,uk,russia,qatar,china): ";
                                cin >> country;
                                cout << "The cities you may choose:" << endl;
                                cout
                                        << "USA -> nyc(New York City),nj(New Jersey),la(Los Angeles) - UK(United Kingdom) -> london,manchester - russia -> moscow,petersburg - china -> pekin,shangai - qatar -> doha,museyid"
                                        << endl;
                                cout << "Enter the city name: ";
                                cin >> city;
                                cout << "Enter the warehouse name(without spaces): ";
                                cin >> name;
                                abroad.push_back(Abroad(country, city, name));
                            }
                        }
                        if (choice2_1 == 2) {
                            cout << "Display Warehouses" << endl;
                            int choice2_1_2;
                            cout << "1-Display the warehouses for domestic\n2-Display the warehouse for abroad: "
                                 << endl;
                            cin >> choice2_1_2;
                            cout << "-------------------------------------------------------------" << endl;
                            if (choice2_1_2 == 1) {
                                cout << "Warehouses for domestic" << endl;
                                for (int i = 0; i < domestic.size(); i++) {
                                    cout << i + 1 << domestic[i];
                                    cout << endl;
                                }
                                cout << "-------------------------------------------------------------" << endl;
                            }
                            if (choice2_1_2 == 2) {
                                cout << "Warehouses for abroad" << endl;
                                for (int i = 0; i < abroad.size(); i++) {
                                    cout << i + 1 << abroad[i];
                                    cout << endl;
                                }
                                cout << "-------------------------------------------------------------" << endl;
                            }
                        }
                        if (choice2_1 == 3) {
                            break;
                        }
                    }
                }
                if (choice2 == 2) {
                    for (int i = 0;; i++) {
                        int choice2_1;
                        cout << "Products" << endl;
                        cout << "1-Create a new product\n2-Display Products\n3-Back" << endl;
                        cin >> choice2_1;
                        cout << "-------------------------------------------------------------" << endl;
                        if (choice2_1 == 1) {
                            cout << "Create a new product" << endl;
                            int choice2_1_1;
                            cout << "What kind of product you want to add?" << endl;
                            cout << "1-Electronical\n2-Home Appliances\n3-Construction Materials" << endl;
                            cin >> choice2_1_1;
                            cout << "-------------------------------------------------------------" << endl;
                            if (choice2_1_1 == 1) {
                                int volume, weight, amount;
                                string name;
                                cout << "Electronical" << endl;
                                cout
                                        << "Enter the product you want to add, also you have to add the volume and weight of this product"
                                        << endl;
                                cout << "Name: ";
                                cin >> name;
                                cout << "Volume: ";
                                cin >> volume;
                                cout << "Weight: ";
                                cin >> weight;
                                cout << "Amount: ";
                                cin >> amount;
                                electronical.push_back(Electronical(name, volume, weight, amount));
                            }
                            if (choice2_1_1 == 2) {
                                int volume, weight, amount;
                                string name;
                                cout << "Home Appliances" << endl;
                                cout
                                        << "Enter the product you want to add, also you have to add the volume and weight of this product"
                                        << endl;
                                cout << "Name: ";
                                cin >> name;
                                cout << "Volume: ";
                                cin >> volume;
                                cout << "Height: ";
                                cin >> weight;
                                home_appliances.push_back(Home_Appliances(name, volume, weight, amount));
                            }
                            if (choice2_1_1 == 3) {
                                int volume, weight, amount;
                                string name;
                                cout << "Construction Materials" << endl;
                                cout
                                        << "Enter the product you want to add, also you have to add the volume and weight of this product"
                                        << endl;
                                cout << "Name: ";
                                cin >> name;
                                cout << "Volume: ";
                                cin >> volume;
                                cout << "Height: ";
                                cin >> weight;
                                construction_materials.push_back(Construction_Materials(name, volume, weight, amount));
                            }
                        }
                        if (choice2_1 == 2) {
                            cout << "Display Products" << endl;
                            int choice2_1_1;
                            cout << "What kind of product you want to display?" << endl;
                            cout << "1-Electronical\n2-Home Appliances\n3-Construction Materials" << endl;
                            cin >> choice2_1_1;
                            cout << "-------------------------------------------------------------" << endl;
                            if (choice2_1_1 == 1) {
                                cout << "Electronical" << endl;
                                for (int i = 0; i < electronical.size(); i++) {
                                    cout << i + 1 << electronical[i];
                                    cout << endl;
                                }
                                cout << "----------------------------------------" << endl;
                            }
                            if (choice2_1_1 == 2) {
                                cout << "Home Appliances" << endl;
                                for (int i = 0; i < home_appliances.size(); i++) {
                                    cout << i + 1 << home_appliances[i];
                                    cout << endl;
                                }
                                cout << "----------------------------------------" << endl;
                            }
                            if (choice2_1_1 == 3) {
                                cout << "Construction Materials" << endl;
                                for (int i = 0; i < construction_materials.size(); i++) {
                                    cout << i + 1 << construction_materials[i];
                                    cout << endl;
                                }
                                cout << "----------------------------------------" << endl;
                            }
                        }
                        if (choice2_1 == 3) {
                            break;
                        }
                    }
                }
                if (choice2 == 3) {
                    for (int i = 0;; i++) {
                        int choice3_1,j=0;
                        cout << "Product Transfer" << endl;
                        cout
                                << "1-From domestic to domestic\n2-From abroad to domestic\n3-From domestic to abroad\n4-From abroad to abroad\n5-Back"
                                << endl;
                        cin >> choice3_1;
                        cout << "-------------------------------------------------------------" << endl;
                        if (choice3_1 == 1) {
                            Vehicle vehicle;
                            string vehicle_v;
                            cout << "From domestic to domestic" << endl;
                            cout << "      WAREHOUSES"<<endl;
                            for (int i = 0; i < domestic.size(); i++) {
                                cout << i + 1 << domestic[i];
                                cout << endl;
                            }
                            cout << "-------------------------------------------------------------" << endl;
                            cout << "Please choose warehouses(1, 2, 3..)"<<endl;
                            cout << "From: ";
                            cin>>i;
                            int fee = 0, distance = 0, unitSpace = 0, km = 0, product;
                            string city1, city2, country = "turkey";
                           /*
                            cin >> city1;*/
                            cout << "To: ";
                            cin >> j;
                            cout << "Choose product type to be sent: "<<endl<<"1-Electronical\n2-Home Appliances\n3-Construction Materials"<<endl;
                            cin >> product;
                            cout << "Unit Space of the product: ";
                            cin >> unitSpace;
                            switch(product){
                                case 1:
                                    domestic[i-1].reduceecapacity(unitSpace);
                                    domestic[j-1].reduceecapacity(-unitSpace);
                                    break;
                                case 2:
                                    domestic[i-1].reducehcapacity(unitSpace);
                                    domestic[j-1].reducehcapacity(-unitSpace);
                                    break;
                                case 3:
                                    domestic[i-1].reduceccapacity(unitSpace);
                                    domestic[j-1].reduceccapacity(-unitSpace);
                                    break;
                            }

                            domestic[i-1].reducecapacity(domestic[i-1].getCapacity());
                            domestic[j-1].reducecapacity(domestic[j-1].getCapacity());
                            //d.reducecapacity(unitSpace);
                            FindDistance findDistance;
                            km = findDistance.findDistance(domestic[i-1].getCity(), domestic[j-1].getCity());
                            distance = km * unitSpace;
                            vehicle_v = vehicle.vehicle(domestic[i-1].getCity(), domestic[j-1].getCity());
                            fee = transfer.fee(distance, country);
                            cout << "Distance: " << km << " km" << endl << "Fee: " << fee << "$" << endl << "Via: "
                                 << vehicle_v << endl;
                            cout << "------------------------| SUCCEED |--------------------------"<<endl;
                            cout << "-----------------| THANKS FOR CHOOSING US |------------------"<<endl;
                        }
                        if (choice3_1 == 2) {
                            Vehicle vehicle;
                            string vehicle_v;
                            int fee = 0, distance = 0, amount = 0, km = 0,unitSpace = 0, product;
                            string country1, country2, city1, city2;
                            FindDistance findDistance;
                            cout << "From abroad to domestic" << endl;
                            for (int i = 0; i < abroad.size(); i++) {
                                cout << i + 1 << abroad[i];
                                cout << endl;
                            }
                            cout << "-------------------------------------------------------------" << endl;
                            cout << "Please choose warehouses (abroad)(1, 2, 3..)"<<endl;
                            cout << "From: ";
                            cin>>i;
                            for (int j = 0; j < domestic.size(); j++) {
                                cout << j + 1 << domestic[j];
                                cout << endl;
                            }
                            cout << "Please choose warehouses(domestic)(1, 2, 3..)"<<endl;
                            cout << "To: ";
                            cin >> j;
                            cout << "Choose product type to be sent: "<<endl<<"1-Electronical\n2-Home Appliances\n3-Construction Materials"<<endl;
                            cin >> product;
                            cout << "Unit Space of the product: ";
                            cin >> unitSpace;
                            switch(product){
                                case 1:
                                    abroad[i-1].reduceecapacity(unitSpace);
                                    domestic[j-1].reduceecapacity(-unitSpace);
                                    break;
                                case 2:
                                    abroad[i-1].reducehcapacity(unitSpace);
                                    domestic[j-1].reducehcapacity(-unitSpace);
                                    break;
                                case 3:
                                    abroad[i-1].reduceccapacity(unitSpace);
                                    domestic[j-1].reduceccapacity(-unitSpace);
                                    break;
                            }
                            abroad[i-1].reducecapacity(abroad[i-1].getCapacity());
                            domestic[j-1].reducecapacity(domestic[j-1].getCapacity());
                            km = findDistance.findDistance(abroad[i-1].getCity(), domestic[j-1].getCity());
                            distance = km * unitSpace;
                            cout<<"Country: "<<abroad[i-1].getCountry()<<endl;
                            vehicle_v = vehicle.vehicle(abroad[i-1].getCity(), domestic[j-1].getCity());
                            fee = transfer.fee(distance, abroad[i-1].getCountry())*1/10;
                            cout << "Distance: " << km << " km" << endl << "Fee: " << fee << "$" << endl << "Via: "
                                 << vehicle_v << endl;
                            cout << "------------------------| SUCCEED |--------------------------"<<endl;
                            cout << "-----------------| THANKS FOR CHOOSING US |------------------"<<endl;
                            cout << "-------------------------------------------------------------" << endl;
                        }
                        if (choice3_1 == 3) {
                            Vehicle vehicle;
                            string vehicle_v;
                            int fee = 0, distance = 0, amount = 0, km = 0,product, unitSpace;
                            string country1, country2, city1, city2;
                            FindDistance findDistance;
                            cout << "From domestic to abroad" << endl;
                            cout << "      WAREHOUSES"<<endl;
                            for (int i = 0; i < domestic.size(); i++) {
                                cout << i + 1 << domestic[i];
                                cout << endl;
                            }
                            cout << "-------------------------------------------------------------" << endl;
                            cout << "Please choose warehouses(domestic)(1, 2, 3..)"<<endl;
                            cout << "From: ";
                            cin>>i;
                            for (int j = 0; j < abroad.size(); j++) {
                                cout << j + 1 << abroad[j];
                                cout << endl;
                            }
                            cout << "-------------------------------------------------------------" << endl;
                            cout << "Please choose warehouses (abroad)(1, 2, 3..)"<<endl;
                            cout << "To: ";
                            cin>>j;
                            cout << "From(country): Turkey" << endl;
                            cout << "Choose product type to be sent: "<<endl<<"1-Electronical\n2-Home Appliances\n3-Construction Materials"<<endl;
                            cin >> product;
                            cout << "Unit Space of the product: ";
                            cin >> unitSpace;
                            switch(product){
                                case 1:
                                    abroad[j-1].reduceecapacity(unitSpace);
                                    domestic[i-1].reduceecapacity(-unitSpace);
                                    break;
                                case 2:
                                    abroad[j-1].reducehcapacity(unitSpace);
                                    domestic[i-1].reducehcapacity(-unitSpace);
                                    break;
                                case 3:
                                    abroad[j-1].reduceccapacity(unitSpace);
                                    domestic[i-1].reduceccapacity(-unitSpace);
                                    break;
                            }
                            abroad[j-1].reducecapacity(abroad[j-1].getCapacity());
                            domestic[i-1].reducecapacity(domestic[i-1].getCapacity());
                            km = findDistance.findDistance(domestic[i-1].getCity(), abroad[j-1].getCity());
                            distance = km * unitSpace;
                            vehicle_v = vehicle.vehicle(domestic[i-1].getCity(), abroad[j-1].getCity());
                            fee = transfer.fee(distance, abroad[j-1].getCountry());
                            cout << "Distance: " << km << " km" << endl << "Fee: " << fee << "$" << endl << "Via: "
                                 << vehicle_v << endl;
                            cout << "------------------------| SUCCEED |--------------------------"<<endl;
                            cout << "-----------------| THANKS FOR CHOOSING US |------------------"<<endl;
                            cout << "-------------------------------------------------------------" << endl;
                        }
                        if (choice3_1 == 4) {
                            Vehicle vehicle;
                            string vehicle_v;
                            int fee = 0, distance = 0, amount = 0, km = 0,unitSpace,product;
                            string country1, country2, city1, city2;
                            FindDistance findDistance;
                            cout << "From abroad to abroad" << endl;
                            for (int i = 0; i < abroad.size(); i++) {
                                cout << i + 1 << abroad[i];
                                cout << endl;
                            }
                            cout << "-------------------------------------------------------------" << endl;
                            cout << "Please choose warehouses (abroad)(1, 2, 3..)"<<endl;
                            cout << "From: ";
                            cin>>i;
                            for (int j = 0; j < abroad.size(); j++) {
                                cout << j + 1 << abroad[j];
                                cout << endl;
                            }
                            cout << "-------------------------------------------------------------" << endl;
                            cout << "Please choose warehouses (abroad)(1, 2, 3..)"<<endl;
                            cout << "To: ";
                            cin>>j;
                            cout << "Choose product type to be sent: "<<endl<<"1-Electronical\n2-Home Appliances\n3-Construction Materials"<<endl;
                            cin >> product;
                            cout << "Unit Space of the product: ";
                            cin >> unitSpace;
                            switch(product){
                                case 1:
                                    abroad[i-1].reduceecapacity(unitSpace);
                                    abroad[j-1].reduceecapacity(-unitSpace);
                                    break;
                                case 2:
                                    abroad[i-1].reducehcapacity(unitSpace);
                                    abroad[j-1].reducehcapacity(-unitSpace);
                                    break;
                                case 3:
                                    abroad[i-1].reduceccapacity(unitSpace);
                                    abroad[j-1].reduceccapacity(-unitSpace);
                                    break;
                            }
                            abroad[i-1].reducecapacity(abroad[i-1].getCapacity());
                            abroad[j-1].reducecapacity(abroad[j-1].getCapacity());
                            km = findDistance.findDistance(abroad[i-1].getCity(), abroad[j-1].getCity());
                            distance = km * unitSpace;
                            vehicle_v = vehicle.vehicle(abroad[i-1].getCity(), abroad[j-1].getCity());
                            fee = transfer.fee(distance, abroad[j-1].getCountry());
                            cout << "Distance: " << km << " km" << endl << "Fee: " << fee << "$" << endl << "Via: "
                                 << vehicle_v << endl;
                            cout << "------------------------| SUCCEED |--------------------------"<<endl;
                            cout << "-----------------| THANKS FOR CHOOSING US |------------------"<<endl;
                            cout << "-------------------------------------------------------------" << endl;
                        }
                        if (choice3_1 == 5) {
                            break;
                        }
                    }
                }
            }
            else{
                cout<<" Invalid username or password."<<endl;
            }
        }

		if(choice1==2)
		{
			cout<<"User"<<endl;
			for(int i=0;;i++)
			{
				cout<<"1-Create a new user\n2-Display the user list\n3-Display the warehouses\n4-Display the products\n5-Back"<<endl;
				int choice2;
				cin>>choice2;
				cout<<"-------------------------------------------------------------"<<endl;
				if(choice2==1)
				{
					cin.ignore();
					cout<<"Create a new user"<<endl;
					int userId;
					string name;
					string address;
					string mobileNo;
					string eMail;
					cout<<"User ID: ";
					cin>>userId;
					cout<<"Name: ";
                    cin.ignore();
                    getline(cin,name);
					cout<<"Address: ";
					getline(cin, address);
					cout<<"Mobie No(without spaces): ";
                    getline(cin,mobileNo);

					cout<<"e-Mail: ";
					cin>>eMail;
					user.push_back(User(userId, name, address, mobileNo, eMail));
				}
				if(choice2==2)
				{
					for(int i=0;i<user.size();i++)
					{
						cout<<i+1<<user[i];
						cout<<endl;
					}
					cout<<"-------------------------------------------------------------"<<endl;
				}
				if(choice2==3)
				{
					cout<<"Display the warehouses"<<endl;
					int choice2_1_2;
					cout<<"1-Display the warehouses for domestic\n2-Display the warehouse for abroad: "<<endl;
					cin>>choice2_1_2;
					cout<<"-------------------------------------------------------------"<<endl;
					if(choice2_1_2==1)
					{
						cout<<"Warehouses for domestic"<<endl;
						for(int i=0;i<domestic.size();i++)
						{
							cout<<i+1<<domestic[i];
							cout<<endl;
						}
						cout<<"-------------------------------------------------------------"<<endl;
					}
					if(choice2_1_2==2)
					{
						cout<<"Warehouses for abroad"<<endl;
						for(int i=0;i<abroad.size();i++)
						{
							cout<<i+1<<abroad[i];
							cout<<endl;
						}
						cout<<"-------------------------------------------------------------"<<endl;
					}
				}
				if(choice2==4)
				{
					cout<<"Display the products"<<endl;
					int choice2_1_1;
					cout<<"What kind of product you want to display?"<<endl;
					cout<<"1-Electronical\n2-Home Appliances\n3-Construction Materials"<<endl;
					cin>>choice2_1_1;
					cout<<"-------------------------------------------------------------"<<endl;
					if(choice2_1_1==1)
					{
						cout<<"Electronical"<<endl;
						for(int i=0;i<electronical.size();i++)
						{
							cout<<i+1<<electronical[i];
							cout<<endl;
						}
						cout<<"----------------------------------------"<<endl;
					}
					if(choice2_1_1==2)
					{
						cout<<"Home Appliances"<<endl;
						for(int i=0;i<home_appliances.size();i++)
						{
							cout<<i+1<<home_appliances[i];
							cout<<endl;
						}
						cout<<"----------------------------------------"<<endl;
					}
					if(choice2_1_1==3)
					{
						cout<<"Construction Materials"<<endl;
						for(int i=0;i<construction_materials.size();i++)
						{
							cout<<i+1<<construction_materials[i];
							cout<<endl;
						}
						cout<<"----------------------------------------"<<endl;
					}
				}
				if(choice2==5)
				{
					break;
				}
			}
		}
		if(choice1==3)
		{
			break;
		}
	}
	return 0;

}
