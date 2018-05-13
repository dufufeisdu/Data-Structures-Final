#include "movement.h"

void getDecision(struct cube* redCube, int tock){

    if(tock ==0){
    redCube->moveRight = 1; //toggle moving right
    }

    if(tock==100){
    redCube->slowDownHorizontal = 1;
    }


    if(tock==150){
    redCube->moveUp = 1;
    }


    if(tock==240){
    redCube->slowDownVertical = 1;
    }

    if(tock==320){
    redCube->moveRight = 1;
    }

    if(tock==400){
    redCube->slowDownHorizontal = 1;
    }

    if(tock == 465){
    redCube->moveDown = 1;
    }

    if(tock ==540){
    redCube->slowDownVertical = 1;
    }

    //Set up actual logic here for AI
}
