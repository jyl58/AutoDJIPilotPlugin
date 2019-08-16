/*
* @file PayloadPluginExample.cpp
* @author: JYL
* @email:jiyingliang369@126.com
* @date: 2019.06.14
*
*/
#include <iostream>
#include "PayloadPluginExample.h"

/*static creat self*/
PluginExample* PluginExample::_self=new PluginExample();

PluginExample::PluginExample()
:PayloadBase() // call base class constructor 
{
	//regist this derive to base class
	registPayloadPlugin(this);
}
PluginExample::~PluginExample(){
}
bool PluginExample::init(){
	/*regist RC response function*/
	if(!PayloadBase::registRCResponseFunction(BUTTON_C1,&PluginExample::MyRCHandle_1,"MyB1")){
		return false;	
	}
	if(!PayloadBase::registRCResponseFunction(BUTTON_C2,&PluginExample::MyRCHandle_2,"MyB2")){
		return false;	
	}
	if(!PayloadBase::registRCResponseFunction(BUTTON_C3,&PluginExample::MyRCHandle_3,"MyB3")){
		return false;	
	}
	/*regist lua call function */
	if(!PayloadBase::registLuaCallFunction(&PluginExample::MyLuahandle_1,"MyLuahandle_1")){
		return false;	
	}
	if(!PayloadBase::registLuaCallFunction(&PluginExample::MyLuahandle_2,"MyLuahandle_2")){
		return false;	
	}
	if(!PayloadBase::registLuaCallFunction(&PluginExample::MyLuahandle_3,"MyLuahandle_3")){
		return false;	
	}
	
	return true;
}
void PluginExample::MyRCHandle_1(int rc_number,int16_t value){
	std::cout<<"RC: "<<rc_number<<" Value: "<<value<<std::endl;
}
void PluginExample::MyRCHandle_2(int rc_number,int16_t value){
	std::cout<<"RC: "<<rc_number<<" Value: "<<value<<std::endl;
}
void PluginExample::MyRCHandle_3(int rc_number,int16_t value){
	std::cout<<"RC: "<<rc_number<<" Value: "<<value<<std::endl;
}
void 
PluginExample::MyLuahandle_1(UserData my_data){
	float *param=(float*)my_data; 	
	if(param!= nullptr)	
		std::cout<<"param :"<<*(param)<<std::endl;
}	
void 
PluginExample::MyLuahandle_2(UserData my_data){
	float *param=(float*)my_data; 	
	if(param!= nullptr)	
		std::cout<<"param :"<<*(param)<<std::endl;
}
void 
PluginExample::MyLuahandle_3(UserData my_data){
	float *param=(float*)my_data; 	
	if(param!= nullptr)	
		std::cout<<"param :"<<*(param)<<std::endl;
}


