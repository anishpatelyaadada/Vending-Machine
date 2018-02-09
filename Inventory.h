#pragma once
class Inventory
{
private:
	int cokeInventory=0;
	int doristosInventory=0;
	int snickersInventory=0;
	int chexMixInventory=0;
	int pepsiInventory=0;
public:
	Inventory();
	void setDefaultInventory();
	void setCokeInventory(int&);
	int getCokeInventory();
	void setDoritosInventory(int&);
	int getDoritosInventory();
	void setSnickersInventory(int&);
	int getSnickersInventory();
	void setChexMixInventory(int&);
	int getChexMixInventory();
	void setPepsiInventory(int&);
	int getPepsiInventory();
	~Inventory();
};

