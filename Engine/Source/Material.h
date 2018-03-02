#pragma once
#ifndef MATERIAL_H
#define MATERIAL_H

#include "Texture.h"
#include "Util/Vector3f.h"

namespace Flux {
    class Shader;

    class Material {
    public:
        Material()
            :
            diffuseTex(0),
            normalTex(0),
            metalTex(0),
            roughnessTex(0),
            stencilTex(0),
            emissionTex(0),
            emission(0, 0, 0),
            tilingX(1), tilingY(1)
        {

        }

        Texture2D* diffuseTex;
        Texture2D* normalTex;
        Texture2D* metalTex;
        Texture2D* roughnessTex;
        Texture2D* stencilTex;
        Texture2D* emissionTex;
        Vector3f emission;
        float tilingX, tilingY;

        void bind(Shader& shader) const;
        void release(Shader& shader) const;
    };
}

#endif /* MATERIAL_H */
