/*
* @file PayloadPluginExample.h
* @author: JYL
* @email:jiyingliang369@126.com
* @date: 2019.06.14
*
*/
#pragma once
#include <iostream>
#include "PayloadPlugin.h"

class PluginExample : public PayloadBase{
public:
	PluginExample(const PluginExample&)=delete;
	PluginExample& operator=(const PluginExample&)=delete;
	~PluginExample();
	/*init function use to regist response function */	
	bool init() override;
	/*RC response function  need static funtion*/
	static void MyRCHandle_1(int rc_number,int16_t value);
	static void MyRCHandle_2(int rc_number,int16_t value);
	static void MyRCHandle_3(int rc_number,int16_t value);
	/*lua script call function */	
	static void MyLuahandle_1(UserData my_data);
	static void MyLuahandle_2(UserData my_data);
	static void MyLuahandle_3(UserData my_data);
	
private:
	PluginExample();
	/*static self*/
	static PluginExample* _self;
	/*user data*/
};

