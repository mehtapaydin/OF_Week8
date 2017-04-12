//
//  stories.cpp
//  example
//
//  Created by Mehtap Aydin on 4/11/17.
//
//
#include "ofApp.h"
#include "stories.h"
#include "stories.hpp"
#include "ofxLeapMotion2.h"

stories::stories(){
    
    
    img1.load("img1.png");
    img2.load("img3.png");
    img3.load("img4.png");
    img4.load("img2.png");
   
    catchUpSpeed = 0.04f;

}



void stories::setup(){
    
}

void stories::update(){
  
    
}

void stories::draw(){
    
    img1.draw(pos.x,120,480,360);
    img2.draw(pos.x+480,120,480,360);
    img3.draw(pos.x+960,120,480,360);
    img4.draw(pos.x+1440,120,480,360);
    
}

void stories::zenoToPoint(float catchX, float catchY){
    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
}
