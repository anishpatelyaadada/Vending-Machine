#include "Inventory.h"



Inventory::Inventory()
{
}
void Inventory::setDefaultInventory() {
	if (cokeInventory <= 5)
		cokeInventory = 30;
	if (doristosInventory <= 5)
		doristosInventory = 30;
	if (snickersInventory <= 5)
		snickersInventory = 30;
	if (chexMixInventory <= 5)
		chexMixInventory = 30;
	if (pepsiInventory <= 5)
		pepsiInventory = 30;
}
// coke
void Inventory::setCokeInventory(int &buy) {
	cokeInventory = cokeInventory -buy;
	
}
int Inventory::getCokeInventory() {
	return cokeInventory;
}
// doritos
void Inventory::setDoritosInventory(int &buy) {
	doristosInventory = doristosInventory - buy;
}
int Inventory::getDoritosInventory() {
	return doristosInventory;
}
// snickers
void Inventory::setSnickersInventory(int &buy) {
	snickersInventory = snickersInventory - buy;
}
int Inventory::getSnickersInventory() {
	return snickersInventory;
}
// chex mix
void Inventory::setChexMixInventory(int &buy) {
	chexMixInventory = chexMixInventory - buy;
}
int Inventory::getChexMixInventory() {
	return chexMixInventory;
}
// pepsi
void Inventory::setPepsiInventory(int &buy) {
	pepsiInventory = pepsiInventory - buy;
}
int Inventory::getPepsiInventory() {
	return pepsiInventory;
}

Inventory::~Inventory()
{
}
