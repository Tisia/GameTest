#include "Scene.h"
#include "const.h"
#include "responsivehelper.h"
#include "Part.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    ResponsiveHelper::getInstance()->init(visibleSize,Size(original_width,original_height));
    auto *sprite=Sprite::create("Sobranie_Empty.png");
    sprite->setPosition(getContentSize().width/2,getContentSize().height/2+45*ResponsiveHelper::getInstance()->getKY());
    sprite->setScale(ResponsiveHelper::getInstance()->getKX());
    this->addChild(sprite);

    randomNum();

   /* auto *sprite1=Sprite::create("B1T.png");
    sprite1->setPosition(580*ResponsiveHelper::getInstance()->getKX(),480*ResponsiveHelper::getInstance()->getKY());
    sprite1->setVisible(false);
    this->addChild(sprite1);*/

    Part *A1 = new Part("A1",Vec2(814*ResponsiveHelper::getInstance()->getKX(),588*ResponsiveHelper::getInstance()->getKY()),140,this->randomNume[0]);
    A1->setPosition(700*ResponsiveHelper::getInstance()->getKX(),166*ResponsiveHelper::getInstance()->getKY());
   // A1->startAnimation();
   // A1->sircleColaider();
   // A1->show();
    this->addChild(A1);

    Part *A2 = new Part("A2",Vec2(822*ResponsiveHelper::getInstance()->getKX(),550*ResponsiveHelper::getInstance()->getKY()),200,this->randomNume[1]);
    A2->setPosition(444*ResponsiveHelper::getInstance()->getKX(),191*ResponsiveHelper::getInstance()->getKY());
   // A2->sircleColaider();
   // A2->startAnimation();
    this->addChild(A2);

    Part *B1 = new Part("B1",Vec2(580*ResponsiveHelper::getInstance()->getKX(),489*ResponsiveHelper::getInstance()->getKY()),150,this->randomNume[2]);
    B1->setPosition(536*ResponsiveHelper::getInstance()->getKX(),108*ResponsiveHelper::getInstance()->getKY());
   // B1->setScale(0.3);
    this->addChild(B1);

    Part *B2 = new Part("B2",Vec2(578*ResponsiveHelper::getInstance()->getKX(),438*ResponsiveHelper::getInstance()->getKY()),150,this->randomNume[3]);
    B2->setPosition(800*ResponsiveHelper::getInstance()->getKX(),130*ResponsiveHelper::getInstance()->getKY());
    // B1->setScale(0.3);
    this->addChild(B2);

    /*Part *E1 = new Part("E1",Vec2::ZERO,150,this->randomNume[3]);
    E1->setPosition(1144*ResponsiveHelper::getInstance()->getKX(),297*ResponsiveHelper::getInstance()->getKY());
   // my4->startAnimation();
    this->addChild(E1);

    Part *E2 = new Part("E2",Vec2::ZERO,150,this->randomNume[4]);
    E2->setPosition(1143*ResponsiveHelper::getInstance()->getKX(),243*ResponsiveHelper::getInstance()->getKY());
    //E2->startAnimation();
     e
    this->addChild(E2);

    Part *I = new Part("I",Vec2::ZERO,200,this->randomNume[5]);
    I->setPosition(1001*ResponsiveHelper::getInstance()->getKX(),325*ResponsiveHelper::getInstance()->getKY());
    //I->startAnimation();
    this->addChild(I);

    Part *N1 = new Part("N1",Vec2::ZERO,200,this->randomNume[6]);
    N1->setPosition(876*ResponsiveHelper::getInstance()->getKX(),164*ResponsiveHelper::getInstance()->getKY());
    //N1->startAnimation();
    this->addChild(N1);

    Part *N2 = new Part("N2",Vec2::ZERO,200,this->randomNume[7]);
    N2->setPosition(932*ResponsiveHelper::getInstance()->getKX(),278*ResponsiveHelper::getInstance()->getKY());
    //N1->startAnimation();
    this->addChild(N2);

    Part *O1 = new Part("O1",Vec2::ZERO,200,this->randomNume[8]);
    O1->setPosition(356*ResponsiveHelper::getInstance()->getKX(),301*ResponsiveHelper::getInstance()->getKY());
    //N1->startAnimation();
    this->addChild(O1);

    Part *O2 = new Part("O2",Vec2::ZERO,200,this->randomNume[9]);
    O2->setPosition(407*ResponsiveHelper::getInstance()->getKX(),289*ResponsiveHelper::getInstance()->getKY());
    //N1->startAnimation();
    this->addChild(O2);

    Part *R1 = new Part("R1",Vec2::ZERO,150,this->randomNume[10]);
    R1->setPosition(644*ResponsiveHelper::getInstance()->getKX(),327*ResponsiveHelper::getInstance()->getKY());
    //N1->startAnimation();
    this->addChild(R1);

    Part *R2 = new Part("R2",Vec2::ZERO,150,this->randomNume[11]);
    R2->setPosition(617*ResponsiveHelper::getInstance()->getKX(),144*ResponsiveHelper::getInstance()->getKY());
    //N1->startAnimation();
    this->addChild(R2);

    Part *S1 = new Part("S1",Vec2::ZERO,150,this->randomNume[12]);
    S1->setPosition(270*ResponsiveHelper::getInstance()->getKX(),127*ResponsiveHelper::getInstance()->getKY());
    //N1->startAnimation();    touch->getLocation().x;

    this->addChild(S1);

    Part *S2 = new Part("S2",Vec2::ZERO,150,this->randomNume[13]);
    S2->setPosition(255*ResponsiveHelper::getInstance()->getKX(),158*ResponsiveHelper::getInstance()->getKY());
    //N1->startAnimation();
    this->addChild(S2);*/


    this->part.push_back(A1);
    this->part.push_back(A2);
    this->part.push_back(B1);
    this->part.push_back(B2);

    /*this->part.push_back(E1);
    this->part.push_back(E2);
    this->part.push_back(I);
    this->part.push_back(O1);
    this->part.push_back(O2);
    this->part.push_back(R1);
    this->part.push_back(R2);
    this->part.push_back(N1);
    this->part.push_back(N2);
    this->part.push_back(S1);
    this->part.push_back(S2);*/

   /* auto listener = EventListenerTouchOneByOne::create();
    listener->setSwallowTouches(true);

    listener->onTouchBegan = CC_CALLBACK_2(HelloWorld::onTouchBegan, this);
    listener->onTouchMoved = CC_CALLBACK_2(HelloWorld::onTouchMoved, this);
    listener->onTouchEnded = CC_CALLBACK_2(HelloWorld::onTouchEnded, this);

    _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
*/

    auto touchListener = EventListenerTouchAllAtOnce::create();
    touchListener->onTouchesBegan = CC_CALLBACK_2(HelloWorld::onTouchesBegan, this);
    touchListener->onTouchesMoved = CC_CALLBACK_2(HelloWorld::onTouchesMoved, this);
    touchListener->onTouchesEnded = CC_CALLBACK_2(HelloWorld::onTouchesEnded, this);

    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(touchListener, this);

    return true;
}

void HelloWorld::menuCloseCallback(Ref* pSender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
	MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
    return;
#endif

    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}

void HelloWorld::randomNum() {
    srand(time(NULL));
    for(int i(0);i<15;i++){
        this->randomNume[i]=rand()%119;
    }
}

/*bool HelloWorld::onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event) {

    this->touchedPart = HelloWorld::findCollisionPard(touch->getLocation());
    if(touchedPart) {
       // touchedPart->startAnimation();
      //  touchedPart->rotate(3);
    }
    return this->touchedPart != nullptr;
}

void HelloWorld::onTouchMoved(cocos2d::Touch *touch, cocos2d::Event *event) {

    if(this->touchedPart->deleteImage()==0) {
        Vec2 p = touch->getLocation();
        if (this->touchedPart) {
            touch->getLocation().y;
            CCLOG("%f",touch->getLocation().y);
            this->touchedPart->setPosition(p);
        }
    }
}

void HelloWorld::onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event) {
    this->touchedPart = NULL;
}
*/
Part *HelloWorld::findCollisionPard(Vec2 pos) {
    for(int i=0; i < this->part.size();i++){
        if(this->part[i]->getBoundingBox().containsPoint(pos))
            return this->part[i];
    }
    return NULL;
}



/* if(this->touchedPart){
       this->touched1=touches[0]->getLocation().y;
   }*/



/*this->touched2=touches[1]->getLocation().y;
    if(this->touched2-this->touched1 > 3){
        this->touched1+=3;
        touchedPart->rotate(3);
    }

    if(this->touched2-this->touched1<3){
        this->touched1-=3;
        touchedPart->rotate(-3);
    }*/
void HelloWorld::onTouchesBegan(const std::vector<cocos2d::Touch *> &touches, cocos2d::Event *unused_event) {
    if(touches.size()==1) {
        this->touchedPart = HelloWorld::findCollisionPard(touches[0]->getLocation());
        this->touched1 = touches[0]->getLocation().y;
    }
    if(touches.size()==2){
       // touchedPart->rotate(3);
    }
    Layer::onTouchesBegan(touches, unused_event);
}

void HelloWorld::onTouchesMoved(const std::vector<cocos2d::Touch *> &touches, cocos2d::Event *unused_event) {
    if (touches.size() == 1) {
        if (this->touchedPart) {
            if (this->touchedPart->deleteImage() == 0) {
                Vec2 p = touches[0]->getLocation();
                touches[0]->getLocation().y;
                //CCLOG("%f",touches[1]->getLocation().y);
                this->touchedPart->setPosition(p);
               // touchedPart->rotate(-3);
            }
        }
    }
    if (touches.size() == 2) {
        if (this->touchedPart) {
             this->touched2 = touches[1]->getLocation().y;
             if (this->touched2 - this->touched1 > 3) {
                 this->touched1 += 3;
                 touchedPart->rotate(3);
             }

             if (this->touched2 - this->touched1 < 3) {
                 this->touched1 -= 3;
                 touchedPart->rotate(-3);
             }
        }
    }

        Layer::onTouchesMoved(touches, unused_event);

}

void HelloWorld::onTouchesEnded(const std::vector<cocos2d::Touch *> &touches, cocos2d::Event *unused_event) {
    this->touchedPart=NULL;
    Layer::onTouchesEnded(touches, unused_event);
}
