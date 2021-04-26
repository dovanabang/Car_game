#ifndef GLOBAL_H
#define GLOBAL_H

#include <SDL.h>
#include <SDL_image.h>
#include <cstdlib>
#include <string>
#include <iostream>
#include <ctime>


extern SDL_Window* gWindow ;


extern SDL_Renderer* gRenderer ;


extern SDL_Event gEvent;


const int SCREEN_WIDTH = 441;
const int SCREEN_HEIGHT = 636;



const int COLOR_KEY_R = 255;
const int COLOR_KEY_G = 255;
const int COLOR_KEY_B = 255;

extern int START_BUTTON_POSX ;
extern int START_BUTTON_POSY ;
extern int QUIT_BUTTON_POSX ;
extern int QUIT_BUTTON_POSY ;
extern int START_BUTTON_HEIGHT ;
extern int START_BUTTON_WIDTH ;
extern int QUIT_BUTTON_HEIGHT ;
extern int QUIT_BUTTON_WIDTH ;

extern SDL_Texture* start_button_texture_1 ;
extern SDL_Texture* start_button_texture_2 ;

extern SDL_Texture* quit_button_texture_1 ;
extern SDL_Texture* quit_button_texture_2 ;



#endif // GLOBAL_H
