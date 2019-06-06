/* 
 * File:   MyDataObject.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 4:00 PM
 */

#include "MyDataObject.hpp"

MyDataObject::MyDataObject(const string newValue)
   {
   this->myDataValue = newValue;
   }

MyDataObject::MyDataObject(const MyDataObject& orig)
   {
   this->myDataValue = orig.myDataValue;
   }

MyDataObject::~MyDataObject()
   {
   this->myDataValue = "";
   }

void MyDataObject::setValue(string newValue)
   {
   this->myDataValue = newValue;
   }

string MyDataObject::getValue()
   {
   return(myDataValue);
   }
