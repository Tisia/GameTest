#!/bin/sh
cocos compile -p Android -l cpp Puzzle
sudo adb install -r bin/debug/android/Puzzle-debug.apk
sudo adb shell am start -n com.MyCompany.MyGame2/org.cocos2dx.cpp.AppActivity
