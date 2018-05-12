#include "movement.h"

void getDecision(struct cube* redCube, int tock){

    if(tock ==0){
    redCube->moveRight = 1; //toggle moving right
    }

    if(tock==25){
    redCube->slowDownHorizontal = 1;
    }

    //Set up actual logic here for AI

}
