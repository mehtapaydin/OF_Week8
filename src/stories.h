//
//  stories.h
//  example
//
//  Created by Mehtap Aydin on 4/11/17.
//
//

#ifndef stories_h
#define stories_h

#include "ofMain.h"
#include "ofApp.h"

#include "stories.h"


class stories{
    
public:
    stories();
    void setup();
    void update();
    void draw();
    ofPoint pos;
    void	zenoToPoint(float catchX, float catchY);
    float catchUpSpeed;
    
private:
    
    ofImage img1;
    ofImage img2;
    ofImage img3;
    ofImage img4;
    float x;
    float sTime;	// start time
    float sWeight;      // scale weight
    float moveSpeed;	
};

#endif /* stories_h */
