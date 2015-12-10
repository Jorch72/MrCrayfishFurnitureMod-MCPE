#include "ToasterTile.h"

int ToasterTile::_id = 209;

ToasterTile::ToasterTile(int id, Material const& material) : RotatableTile("blockToaster", id, material) {
	tex = getTextureUVCoordinateSet("iron_block", 0);
	secondary_tex = getTextureUVCoordinateSet("wool", 15);
	terciary_tex = getTextureUVCoordinateSet("stone", 0);

	setSoundType(Block::SOUND_WOOD);
	setSolid(false);
}

const TextureUVCoordinateSet& ToasterTile::getTexture(signed char side, int data) {
	return side == 0 ? tex : side == 1 ? secondary_tex : terciary_tex;
}

bool ToasterTile::use(Player& player, const BlockPos& pos) {
	int data = player.region.getData(pos);
	int rot = data & 7;
	int hasBread = ((data & 8) >> 3) == 0;

	if(hasBread) {
		//Pickup bread
		return true;
	} else { //Ah whatever, get carried item not now
		//Put bread
		return true;
	}

	return true;
}

int ToasterTile::getResource(Random& rand, int data, int idk) {
	return ToasterItem::_id;
}
