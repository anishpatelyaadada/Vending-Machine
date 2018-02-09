#pragma once
class Money
{
private:
	double Quater = 5, totalQuater = 0, returnQuater = 0, totalReturnQuater = 0;
	double Dime = 2, totalDime = 0, returnDime = 0, totalReturnDime = 0;
	double Nickle = 1, totalNickle = 0, returnNickle = 0, totalReturnNickle = 0;
	double OneDollar = 20, totalQOneDollar = 0, returnOneDollar = 0, totalReturnOneDollar = 0;
	double FiveDollar = 100, totalFiveDolllar=0, returnFiveDollar = 0, totalReturnFiveDollar = 0;
public:
	Money();
	// if the amount exceed by specific amount in the machine then make it default
	void setDefaultQuater();
	double getTotalQuater();
	void setDefaultDime();
	double getTotalDime();
	void setDefaultNickle();
	double getTotalNickle();
	void setDefaultOneDOllar();
	double getTotalOneDollar();
	void setDefaultFiveDollar();
	double getTotalFiveDollar();

	// increase the amount in the machine by accespting the coin
	void setQuater(double&);
	double getQuater();
	void setDime(double&);
	double getDime();
	void setNickle(double&);
	double getNickle();
	void setOneDollar(double&);
	double getOneDollar();
	void setFiveDollar(double&);
	double getFiveDollar();

	// return the change
	void setReturnCoinDefault();
	void setReturnQuater(double&);
	double getReturnQuater();
	void setReturnDime(double&);
	double getReturnDime();
	void setReturnNickle(double&);
	double getReturnNickle();
	void setReturnOneDollar(double&);
	double getReturnOneDollar();
	void setReturnFiveDollar(double&);
	double getReturnFiveDollar();
	~Money();
};

