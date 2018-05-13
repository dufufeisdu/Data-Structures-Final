#include "movement.h"

void getDecision(struct cube* redCube, int tock){

    if(tock ==0){
    redCube->horizontalVel = 0;
    redCube->moveRight = 1; //toggle moving right
    }

    if(tock==100){
    redCube->slowDownHorizontal = 1;
    }


    if(tock==150){
    redCube->verticalVel  = 0; //AI needs to mimick the player inputs, look at how keyboard movements are handled. Similiar commands
    redCube->moveUp = 1;        //need to be called in order for the movement to look natural, since the "engine" was originally
    }                           //meant to be human controlled


    if(tock==240){
    redCube->slowDownVertical = 1;
    }

    if(tock==320){
    redCube->horizontalVel = 0;
    redCube->moveRight = 1;
    }

    if(tock==440){
    redCube->slowDownHorizontal = 1;
    }

    if(tock == 570){
    redCube->verticalVel = 0;
    redCube->moveDown = 1;
    }

    if(tock ==700){
    redCube->slowDownVertical = 1;
    }

    //Set up actual logic here for AI
}
