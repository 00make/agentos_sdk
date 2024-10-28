/*
 * @Author: hanyu hanyu@weilan.com
 * @Date: 2023-08-26 11:06:21
 * @LastEditors: hanyu hanyu@weilan.com
 * @LastEditTime: 2023-12-04 16:22:08
 * @FilePath: /agent_os/src/agent_msgs/include/public_params.h
 * @Description: 
 */
#pragma once

namespace pub_life_stage_params
{
  enum LIFE_STAGE
  {
    UNDEFINED = -1,
    PRODUCING = 0,
    UNPACK    = 1,
    ACTIVATED = 2
  };
}

namespace pub_object_model_params
{
  enum TAG_ID
  {
    BODY_TAG_GUESS  = -1,
    BODY_TAG        = 0,
    CHARGING_TAG    = 1,
    WORLD_TAG_ALPHA = 2,
    WORLD_TAG_BETA  = 3,
    WORLD_TAG       = 5 
  };

  enum OBJECT_ID
  {
    DEFAULT_HOME     = -1,
    CHARGING_PILE    = 0,
    PET_WORLD        = 1,
    LITTLE_TREE      = 2,

    // vision detected objects
    VISON_OBJECTS = 20,
    BICYCLE = 21,
    CAR = 22,
    MOTORBIKE = 23,
    AEROPLANE = 24,
    BUS = 25,
    TRAIN = 26,
    TRUCK = 27,
    BOAT = 28,
    TRAFFIC_LIGHT = 29,
    FIRE_HYDRANT = 30,
    STOP_SIGN = 31,
    PARKING_METER = 32,
    BENCH = 33,
    BIRD=34,
    CAT=35,
    DOG=36,
    HORSE=37,
    SHEEP=38,
    COW=39,
    ELEPHANT=40,
    BEAR=41,
    ZEBRA=42, 
    GIRAFFE = 43, 
    BACKPACK = 44, 
    UMBRELLA = 45, 
    HANDBAG = 46, 
    TIE=47, 
    SUITCASE=48,  
    FRISBEE=49,  
    SKIS=50,  
    SNOWBOARD=51,   
    SPORTS_BALL=52,   
    KITE=53,   
    BASEBALL_BAT=54,   
    BASEBALL_GLOVE=55,    
    SKATEBOARD=56,    
    SURFBOARD=57,    
    TENNIS_RACKET=58,     
    BOTTLE=59,     
    WINE_GLASS=60,      
    CUP=61,      
    FORK=62,      
    KNIFE=63,       
    SPOON=64,       
    BOWL=65,        
    BANANA=66,        
    APPLE=67,        
    SANDWICH=68,         
    ORANGE=69,  
    BROCCOLI = 70,
    CARROT = 71,
    HOT_DOG = 72,
    PIZZA = 73,
    DONUT = 74,
    CAKE = 75,
    CHAIR = 76,
    SOFA = 77,
    POTTEDPLANT = 78,
    BED = 79,
    DININGTABLE=80,
    TOILET=81,
    TVMONITOR=82,
    LAPTOP=83,
    MOUSE=84,
    REMOTE=85,
    KEYBOARD=86,
    CELL_PHONE=87,
    MICROWAVE=88,
    OVEN=89,
    TOASTER=90,
    SINK=91,
    REFRIGERATOR=92,
    BOOK=93,
    CLOCK=94,
    VASE=95,
    SCISSORS=96,
    TEDDY_BEAR=97,
    HAIR_DRIER=98,
    TOOTHBRUSH=99
  };
}

#define IS_HOME_ID(id) (id==pub_object_model_params::OBJECT_ID::CHARGING_PILE || id==pub_object_model_params::OBJECT_ID::PET_WORLD)