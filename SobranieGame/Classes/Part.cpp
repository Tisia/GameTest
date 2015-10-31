//
// Created by vadim on 11/09/15.
//

#include "Part.h"

Part::Part(const char index[],Vec2 prefferedPosition,int imageWidhtHeight,int positionImage) {
    this->delet=0;
    this->index=index;
    this->setUpAnimation(index);
    char fileName[caracter_char];
    strcpy(fileName,this->getFileName(index,positionImage));
  //  this->initWithTexture(Director::getInstance()->getTextureCache()->getTextureForKey(fileName));

    this->initWithTexture(Director::getInstance()->getTextureCache()->addImage(fileName));
    this->rotationAngle*=positionImage;
    this->prefferedPosition=prefferedPosition;
    this->imageWidhtHeight=imageWidhtHeight;
    scheduleUpdate();
}

void Part::setUpAnimation(char const index[]) {
    for(int i(0);i < 120;i++){
        Director::getInstance()->getTextureCache()->addImage(this->getFileName(index,i));
    }
}

void Part::sircleColaider() {
    this->physicsBody=PhysicsBody::createCircle(this->getContentSize().width/2,PhysicsMaterial(0,1,0));
    this->setPhysicsBody(this->physicsBody);

}

void Part::update(float delta) {
   // CCLOG("X : %f",this->getPositionX());
   // CCLOG("Y : %f",this->getPositionY());
    deltaDistant();
    angleTrue();
    deleteImage();
}

bool Part::deltaDistant(){
    return fabs((this->getPositionX()-this->prefferedPosition.x))<15 &&
        fabs(this->getPositionY()-this->prefferedPosition.y)<15;
}

int  Part::deleteImage() {
    if (deltaDistant() && angleTrue()) {
       // this->setVisible(false);
        this->delet=1;
        sprintf(this->spriteFileName,"%s%s.png",this->index,this->index);
        this->initWithFile(this->spriteFileName);
        this->setPosition(prefferedPosition);
        return this->delet;
    }
}

void Part::rotate(float angle) {
    char fileName[255];
    strcpy(fileName,this->getFileName(this->index, (int) (this->rotationAngle/3)));
    this->rotationAngle += angle;
    if(rotationAngle < 0)
        rotationAngle += 360;
    if(rotationAngle >= 360)
        rotationAngle -= 360;
    Texture2D *texture = Director::getInstance()
                ->getTextureCache()->addImage(fileName);
    this->initWithTexture(texture);
}

char *Part::getFileName(char const index[], int image) {
    char fileName[255];
    sprintf(fileName,"%s_%05d.png",index,image);
    return fileName;
}

bool Part::angleTrue() {
    //CCLOG("%f",this->rotationAngle);
    return this->rotationAngle>=0 && this->rotationAngle<=20 ||
                this->rotationAngle>=340 && this->rotationAngle<=360;
}
