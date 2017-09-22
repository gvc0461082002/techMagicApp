#pragma once

#include"KinectHandler.h"
#include"ImageProcessor.h"

using namespace std;

#define ESC_KEY 27
#define SPACE_KEY 32
#define ENABLE_SAVE_IMAGE true
#define ENABLE_SPELL_TRAINING false

KinectHandler m_kinect;
ImageProcessor m_imageProcessor;

String windowName = "Wand Trace Window";