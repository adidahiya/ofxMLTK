#pragma once

#include "ofMain.h"
#include "ofxMLTK.h"

class ofApp: public ofBaseApp{
	public:
  ofSoundStream soundStream;
  ofSoundStreamSettings soundStreamSettings;
  
  MLTK mltk;
  
  void setup();
  void update();
  void draw();
  
  void audioIn(ofSoundBuffer &inBuffer);
  
  void keyPressed(int key);
  void keyReleased(int key);
  void mouseMoved(int x, int y);
  void mouseDragged(int x, int y, int button);
  void mousePressed(int x, int y, int button);
  void mouseReleased(int x, int y, int button);
  void windowResized(int w, int h);
  void dragEvent(ofDragInfo dragInfo);
  void gotMessage(ofMessage msg);
};
