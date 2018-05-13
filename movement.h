#ifndef MOVEMENT_H_
#define MOVEMENT_H_


struct cube{ //Red Cube Variables
double xPos;
double yPos;
double zPos;

int moveRight;
int moveLeft;
int moveUp;
int moveDown;

double verticalVel;
double horizontalVel;

double ACCELCONST;
double DECELCONST;

int slowDownHorizontal;
int slowDownVertical;
int aiMoveUp;
};

void handleMovement(struct cube *redCube);

void hitBoxDetection(struct cube *redCube);

#endif // MOVEMENT_H_
