//
// Created by vadim on 09/09/15.
//

#include "responsivehelper.h"

ResponsiveHelper::ResponsiveHelper()
{

}

ResponsiveHelper* ResponsiveHelper::getInstance(){
    static ResponsiveHelper instance;
    return &instance;
}

void ResponsiveHelper::init(Size a,Size b){
    this->k = Size(a.width/b.width,a.height/b.height);
}

Size ResponsiveHelper::convert(Size a){
    return Size(a.width*this->k.width,a.height*this->k.height);
}

float ResponsiveHelper::getKX(){
    return this->k.width;
}

float ResponsiveHelper::getKY(){
    return this->k.height;
}
