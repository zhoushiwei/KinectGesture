//
//  finger.h
//  jestureCap
//
//  Created by Noah Tovares on 1/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef jestureCap_finger_h
#define jestureCap_finger_h
#include "ofxCvConstants.h"

class finger{

public:

    int xloc, yloc;
    
    vector<ofPoint> loc;
    
    finger(){
        xloc = 0;
        yloc = 0;
    }
};

#endif
