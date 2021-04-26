#include "Threat.h"

using namespace std;

Threat::Threat()
{

    threatRect.x = 250;
    threatRect.y =  -HEIGHT_THREAT;
    threatRect.w = 50;
    threatRect.h = 120;
    pRect.w = WIDTH_THREAT;
    pRect.h = HEIGHT_THREAT;
}

Threat::~Threat()
{

}

void Threat::HandleMove()
{

    threatRect.y +=  THREAT_SPEED;

    if (threatRect.y > SCREEN_HEIGHT)
    {
        threatRect.y = - HEIGHT_THREAT;
        int x_val;
        int ob;
        ob = rand()%2;
        if(ob == 1)
        {
             x_val = 135;

        }
        else
        {
             x_val = 250;

        }
        threatRect.x = x_val;

    }
}

void Threat::Draw(SDL_Renderer* des)
{
    SDL_Rect renderQuad = {threatRect.x, threatRect.y, WIDTH_THREAT, HEIGHT_THREAT};
    SDL_RenderCopy(des, pTexture, NULL, &renderQuad);

}

void Threat::HandleInputAction()
{

}

