#include "newheader.h"

using namespace std;

    //bots[assault,shotgun,machine gun,sniper]
    const float hp[4]= {5000,3000,7000,3000};//max health
    float shield[4]= {3000,5000,5000,3000};//max shield
    ///for duration related things, time is done in ms

    ///for distance related things, distance is done in meters
    ///one meter=one tile
    ///short range has a 3 tile radius
    ///medium range has a 5 tile radius (excluding short range)
    ///long range has a 7 tile radius (excluding medium/short range)

    ///movement speeds are done in mm per second
    float speed[4]={1200,2000,750,1000};// speed not carrying resource
    float rspeed[4]={500,500,750,600};//speed with resource

    float burstReload[4]={1000,1000,1500,3000};//time between bursts of shots
    int shotCount[4]={3,1,30,1};//number of times shooting in a burst
    int bullets[4]={2,5,1,1};//bullets that come out each shot
    float damage[4]={300,600,275,2000};//per bullet
    float cooldown[4]={100,100,80,100};//time between bursts, useless stat if shotCount=1

    float tickTimings[4]={250,250,250,250};//time it take to choose an action, all bots currently act at 4 actions a second

    int longRange[4]={10,5,10,100};
    int main()
    {

    }
