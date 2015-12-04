#include "FurnitureTileAttributes.h"

FurnitureTileAttributes::FurnitureTileAttributes(Material* realMaterial, std::string ptexture, std::string stexture, Block::SoundType sounds, float hardness) {
	this->realMaterial = realMaterial;
	this->primary_tex = Block::mOwnedBlocks[1]->getTextureUVCoordinateSet(ptexture, 0);
	this->secondary_tex = Block::mOwnedBlocks[1]->getTextureUVCoordinateSet(stexture, 0);
	this->sounds = sounds;
	this->hardness = hardness;
}