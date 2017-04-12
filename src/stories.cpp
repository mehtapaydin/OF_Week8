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
    
  
    moveSpeed = ofRandom(2, 8);
    sTime = ofGetElapsedTimef();
    
    
    img1.load("img1.png");
    img2.load("img2.png");
    img3.load("img3.png");
    img3.load("img4.png");
    
    loc = ofPoint(x, -120, 0);
    

}



void stories::setup(){
}

void stories::update(){
    
    
  


}

void stories::draw(){
    
    img1.draw(-80,-120,480,320);
    img2.draw(400,-120,480,320);
    img3.draw(880,-120,480,320);
    img4.draw(1460,-120,480,320);
    
//    ofTranslate(loc);
}
