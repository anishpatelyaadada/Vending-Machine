#include "Money.h"
#include<iostream>
using namespace std;

Money::Money()
{
}
// if money excedded in machine then make it to default
void Money::setDefaultQuater() {

	if (Quater == 25) {
		totalQuater += Quater - 20;
		Quater = 5;
	}
}
double Money::getTotalQuater() {
	return totalQuater;
}
void Money::setDefaultDime() {
	if (Dime == 10) {
		totalDime += Dime - 5;
		Dime = 2;
	}
}
double Money::getTotalDime() {
	return totalDime;
}
void Money::setDefaultNickle() {
	if (Nickle == 5) {
		totalNickle += Nickle - 1;
		Nickle = 1;
	}
}
double Money::getTotalNickle() {
	return totalNickle;
}
void Money::setDefaultOneDOllar() {
	if (OneDollar == 100) {
		totalQOneDollar += OneDollar - 20;
		OneDollar = 20;
	}
}
double Money::getTotalOneDollar() {
	return totalQOneDollar;
}
void Money::setDefaultFiveDollar() {
	if (FiveDollar == 300) {
		totalFiveDolllar += FiveDollar - 100;
		FiveDollar = 100;
	}
}
double Money::getTotalFiveDollar() {
	return totalFiveDolllar;
}

// input money
void Money::setQuater(double &amount) {
	Quater += amount;
}
double Money::getQuater() {
	return Quater;
}
void Money::setDime(double &amount) {
	Dime += amount;
}
double Money::getDime() {
	return Dime;
}
void Money::setNickle(double &amount) {
	Nickle += amount;
}
double Money::getNickle() {
	return Nickle;
}
void Money::setOneDollar(double &amount) {
	OneDollar += amount;
}
double Money::getOneDollar() {
	return OneDollar;
}
void Money::setFiveDollar(double &amount) {
	FiveDollar += amount;
}
double Money::getFiveDollar() {
	return FiveDollar;
}

// return change if money exceed the price of product
void Money::setReturnQuater(double &amount) {
	returnQuater = Quater - amount;
	totalReturnQuater += amount;
}
double Money::getReturnQuater() {
	return totalReturnQuater;
}
void Money::setReturnDime(double &amount) {
	returnDime = Dime - amount;
	totalReturnDime += amount;
}
double Money::getReturnDime() {
	return totalReturnDime;
}
void Money::setReturnNickle(double &amount) {
	returnNickle = Nickle - amount;
	totalReturnNickle += amount;
}
double Money::getReturnNickle() {
	return totalReturnNickle;
}
void Money::setReturnOneDollar(double &amount) {
	returnOneDollar = OneDollar - amount;
	totalReturnOneDollar += amount;
}
double Money::getReturnOneDollar() {
	return totalReturnOneDollar;
}
void Money::setReturnFiveDollar(double &amount) {
	returnFiveDollar = FiveDollar - amount;
	totalReturnFiveDollar += amount;
}
double Money::getReturnFiveDollar() {
	return totalReturnFiveDollar;
}

void Money::setReturnCoinDefault() {
	totalReturnQuater = 0;
	totalReturnDime = 0;
	totalReturnNickle = 0;
	totalReturnOneDollar = 0;
	totalReturnFiveDollar = 0;
}
Money::~Money()
{
}
