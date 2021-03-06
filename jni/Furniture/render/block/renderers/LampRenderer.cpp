#include "LampRenderer.h"

void LampRenderer::render(const BlockPos& pos, FurnitureBlock& tile, BlockTessellator* tess) {
	tess->useForcedUV = true;
	int x = pos.x, y = pos.y, z = pos.z;

     tess->forcedUV = tile.getTexture(0, 0);
    
     tess->setRenderBounds(0.2, 0.0, 0.2, 0.8, 0.3, 0.8);
     tess->tessellateBlockInWorld(tile, pos);
     tess->setRenderBounds(0.45, 0.3, 0.45, 0.55, 0.5, 0.55);
     tess->tessellateBlockInWorld(tile, pos);

     tess->forcedUV = tile.getTexture(1, 0);
     tess->setRenderBounds(0.1, 0.5, 0.1, 0.9, 0.7, 0.9);
     tess->tessellateBlockInWorld(tile, pos);
     tess->setRenderBounds(0.15, 0.7, 0.15, 0.85, 0.8, 0.85);
     tess->tessellateBlockInWorld(tile, pos); 
     tess->setRenderBounds(0.2, 0.8, 0.2, 0.8, 0.85, 0.8);
     tess->tessellateBlockInWorld(tile, pos); 
     tess->setRenderBounds(0.3, 0.85, 0.3, 0.7, 0.9, 0.7);
     tess->tessellateBlockInWorld(tile, pos); 

     tess->useForcedUV = false;
}
