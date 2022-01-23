/*
 * User.h
 *
 *  Created on: 28 Ara 2021
 *      Author: ADMİN
 */

#ifndef USER_H_
#define USER_H_
#include<iostream>
using namespace std;


class User
{
	private:
		int userId;
		string name;
		string address;
		string mobileNo;
		string eMail;
	public:
		User(int userId,string name,string address,string mobileNo,string eMail)
		{
			this->userId=userId;
			this->name=name;
			this->address=address;
			this->mobileNo=mobileNo;
			this->eMail=eMail;
			cout<<"User created succesfully"<<endl;
			cout<<"-------------------------------------------------------------"<<endl;
		}
		//userId
		int getUserId();

		void setUserId(int userId);
		//name
		string getName();

		void setName(string name);

		//address
		string getAddress();

		void setAddress(string address);

		//mobno
		string getmobileNo();

		void setmobileNo(string mobileNo);

		//email
		string getEmail();

		void setEmail(string email);

		friend ostream& operator<<(ostream& os, const User &obj)
		{
					cout<<"-"<<endl;
					cout<<"User ID: "<<obj.userId<<endl;
					cout<<"Name: "<<obj.name<<endl;
					cout<<"Address: "<<obj.address<<endl;
					cout<<"Mobile No: "<<obj.mobileNo<<endl;
					cout<<"e-Mail: "<<obj.eMail<<endl;
					return os;
		    	}

};



#endif /* USER_H_ */
