//
// Created by vadim on 11/09/15.
//

#ifndef MYGAME_PART_H
#define MYGAME_PART_H

#include "cocos2d.h"
#include "responsivehelper.h"
#include "const.h"
#include <vector>

USING_NS_CC;
using namespace std;

class Part : public Sprite {
private:
    Vec2 prefferedPosition;
    PhysicsBody *physicsBody;
    int imageWidhtHeight;
    int delet;
    char const  *index;
    char spriteFileName[caracter_char];
    void setUpAnimation(const char index[]);
    char* getFileName(const char index[],int image);
    float rotationAngle=1;

public:
    Part(const char index[],Vec2 prefferedPosition , int imageWidhtHeight,int positionImage);
    void sircleColaider();
    void update(float delta);
    bool deltaDistant();
    void show();
    int  deleteImage();
    void rotate(float angle);
    bool angleTrue();

};


#endif //MYGAME_PART_H
