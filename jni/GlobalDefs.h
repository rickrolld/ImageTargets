

#ifndef _GLOBALDEFS_H_
#define _GLOBALDEFS_H_


// Defines:

//enemy properties
#define MAX_NUM_ENEMIES 20
#define NUM_ENEMY_TYPES 10
#define ENEMY_NUM_FRAMES 48
#define ENEMY_SCALE 50.0f
#define ENEMY_MOVEMENT_SPEED 50.0f
#define HP_SCALE 50.0f
#define ENEMY_LIFT 30.0f
#define HP_LIFT 60.0f

#define MISSILE_RANGE 140.0f

//tower/missile properties
#define NUM_MISSILE_TYPES 12
#define NUM_TOWER_TYPES 12
#define MAX_NUM_TOWERS 25
#define MISSILE_NUM_FRAMES 24
#define TOWER_SCALE 75.0f
#define MISSILE_SCALE 40.0f

//#define STARTING_X 350.0f
//#define STARTING_Y -350.0.0f


//game properties
#define NUM_LEVELS 10
#define NUM_ENEMY_PER_ROUND 20

//board properties
#define MARKER_SIZE 50
#define BOARD_SIZE 8  //8x8 markers
#define MAX_NUM_MARKERS (MAX_NUM_TOWERS+4) //# towers + 4 corners


//#define TILE_SIZE 50.0f //size of each 8x8 tile
//CALIBRATED DISTNACE BETWEEN CORNER MARKERS: 442 TO 444
#define TILE_SIZE 63.14f //distnace between each 8x8 tile

/*
#define BOARD_SIZE_UNITS 350 //distance between corner markers
#define BOARD_DIST_BETWEEN_MARKERS (BOARD_SIZE_UNITS/(BOARD_SIZE-1))  //350/7=50 UNITS
*/

// Structures: 
struct EnemyUnit
{
    int type;
	int texture;
	char name[30];
    float X;
    float Y;
	float direction;
	float max_HP;
	float HP;
	float speed;
	float defense;
	float score;
	float deploydelay;
	bool deployed;
	bool dead;
    double prevTime;
	int section;
};

struct MissileUnit
{
	bool initialized;
    int type;
	int texture;
	char name[20];
    float X;
    float Y;
	float defaultX;
	float defaultY;
	float angle;
	float speed;
	float stunrate;
	float attack;
	int cost;
	float scale;
	int currentTarget;
	float currentTargetDistance;
	double prevTime;
	double prevShotTime;
	double waitShotTime;
	bool updatedShotTime;
};

//tower struct
struct TowerUnit
{
    int type;
	int texture;
	int missiletype;
	char name[20];
	float lift;
	float scale;
	float rotate;
    int initialized;
    int upgradeLevel; //tower level
	int upgradeCost;
    float boardX;   //position of tower in board coordinates
    float boardY;
};

//Level struct
struct Level
{
    float start;
    float end;
    int killCount;
};

#endif
