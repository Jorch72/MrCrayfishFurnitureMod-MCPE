#include "FurnitureTile.h"

FurnitureTile* FurnitureTile::tileTableWood = NULL;
FurnitureTile* FurnitureTile::tileTableStone = NULL;
FurnitureTile* FurnitureTile::tileCoffeeTableWood = NULL;
FurnitureTile* FurnitureTile::tileCoffeeTableStone = NULL;
FurnitureTile* FurnitureTile::tileChairWood = NULL;
FurnitureTile* FurnitureTile::tileChairStone = NULL;
FurnitureTile* FurnitureTile::tileToilet = NULL;
FurnitureTile* FurnitureTile::tileCabinet = NULL;
FurnitureTile* FurnitureTile::tileKitchenCabinet = NULL;
FurnitureTile* FurnitureTile::tileDoorbell = NULL;
FurnitureTile* FurnitureTile::tileBin = NULL;
FurnitureTile* FurnitureTile::tileLamp = NULL;
FurnitureTile* FurnitureTile::tileChoppingBoard = NULL;
FurnitureTile* FurnitureTile::tileToaster = NULL;
FurnitureTile* FurnitureTile::tileMicrowave = NULL;
FurnitureTile* FurnitureTile::tileBarStool = NULL;
FurnitureTile* FurnitureTile::tileCounter = NULL;
FurnitureTile* FurnitureTile::tileCookieJar = NULL;
FurnitureTile* FurnitureTile::tileOven = NULL;
FurnitureTile* FurnitureTile::tilePlate = NULL;

FurnitureTile::FurnitureTile(const std::string& name, int id, Material const* material) : Block(name, id, material) {
	init();
	category = 1;
	
	new TileItem(id - 256);
}
