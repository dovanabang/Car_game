#ifndef THREAT_H
#define THREAT_H

#include "CommonFunc.h"
#include "Player.h"

#define WIDTH_THREAT 65
#define HEIGHT_THREAT 140

#define WIDTH_PLAYER 63
#define HEIGHT_PLAYER 138


#define THREAT_SPEED 5


struct Threat : public CommonFunc
{
    Threat();
    ~Threat();

    void HandleMove();
    void HandleInputAction();
    void Draw(SDL_Renderer* des);


    SDL_Rect threatRect;
};

#endif // THREAT_H
