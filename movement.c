#include "movement.h"

void handleMovement(struct cube *redCube){
  if(redCube->slowDownHorizontal && redCube->moveRight){
    redCube->verticalVel -= redCube->DECELCONST;
    if(redCube->verticalVel>=0){
        double modifier = 0.4 * redCube->verticalVel;
        redCube->xPos += modifier;
    }
    if(redCube->verticalVel<0){
    redCube->slowDownHorizontal = 0;
    redCube->moveRight = 0;
    }
  }

  if(redCube->moveRight && !redCube->slowDownHorizontal){
    redCube->horizontalVel += redCube->ACCELCONST;
    double modifier = 0.4 * redCube->horizontalVel;
    redCube->xPos += modifier;
  }

  if(redCube->slowDownHorizontal && redCube->moveLeft){
    if(redCube->horizontalVel>=0){
        redCube->horizontalVel -= redCube->DECELCONST;
        double modifier = 0.4 * redCube->horizontalVel;
        redCube->xPos -= modifier;
    }
    if(redCube->horizontalVel<0){
    redCube->slowDownHorizontal = 0;
    redCube->moveLeft = 0;
    }
  }

  if(redCube->moveLeft && !redCube->slowDownHorizontal){
    redCube->horizontalVel += redCube->ACCELCONST;
    double modifier = 0.4 * redCube->horizontalVel;
    redCube->xPos -= modifier;
  }

  if(redCube->moveUp && !redCube->slowDownVertical){
    redCube->verticalVel += redCube->ACCELCONST;
    double modifier = 0.4 * redCube->verticalVel;
    redCube->yPos += modifier;
  }

  if(redCube->slowDownVertical && redCube->moveUp){
    if(redCube->verticalVel>=0){
        redCube->verticalVel -= redCube->DECELCONST;
        double modifier = 0.4 * redCube->verticalVel;
        redCube->yPos += modifier;
    }
    if(redCube->verticalVel<0){
    redCube->slowDownVertical = 0;
    redCube->moveUp = 0;
    }
  }

  if(redCube->moveDown && !redCube->slowDownVertical){
    redCube->verticalVel += redCube->ACCELCONST;
    double modifier = 0.4 * redCube->verticalVel;
    redCube->yPos -= modifier;
  }

  if(redCube->slowDownVertical && redCube->moveDown){
    if(redCube->verticalVel>=0){
        redCube->verticalVel -= redCube->DECELCONST;
        double modifier = 0.4 * redCube->verticalVel;
        redCube->yPos -= modifier;
    }
    if(redCube->verticalVel<0){
    redCube->slowDownVertical = 0;
    redCube->moveDown = 0;
    }
  }
}





void hitBoxDetection(struct cube *redCube){


  //Bounds of Map

  if(redCube->moveDown && redCube->yPos < -6){
    redCube->slowDownVertical = 1;
  }

  if(redCube->moveUp && redCube->yPos > 6){
    redCube->slowDownVertical = 1;
  }

  if(redCube->moveLeft && redCube->xPos < -8){
    redCube->slowDownHorizontal = 1;
  }

  if(redCube->moveRight && redCube->xPos > 8){
    redCube->slowDownHorizontal = 1;
  }
  //BLOCK A HITBOXES

  if(redCube->moveRight && redCube->xPos> 1.95 && redCube->xPos < 2 && redCube->yPos < -2 && redCube->yPos > -8){
    redCube->slowDownHorizontal = 1;
  }

  if(redCube->moveLeft && redCube->xPos <6 && redCube->xPos > 5  && redCube->yPos < -2 && redCube->yPos > -6){
    redCube->slowDownHorizontal = 1;
  }

  if(redCube->moveDown && redCube->yPos<-2  && redCube->xPos > 2 && redCube->xPos < 6){
    redCube->slowDownVertical = 1;
  }

  //END BLOCK A HIT BOXES

  //Block B Hit Box Starts
  if(redCube->moveUp && redCube->yPos > 2 && redCube->yPos <2.5  && redCube->xPos > -6 && redCube->xPos < -2){
    redCube->slowDownVertical = 1;
  }

  if(redCube->moveLeft && redCube->xPos < -2 && redCube->xPos > -4  && redCube->yPos < 8 && redCube->yPos > 2){
    redCube->slowDownHorizontal = 1;
  }


  if(redCube->moveRight && redCube->xPos > -6.2 && redCube->xPos < -5  && redCube->yPos < 8 && redCube->yPos > 2){
    redCube->slowDownHorizontal = 1;
  }

  //End Block B hitbox
}


