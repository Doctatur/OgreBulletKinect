/*
-----------------------------------------------------------------------------
Filename:    OgreApp1.h
-----------------------------------------------------------------------------


This source file is generated by the
   ___                   _              __    __ _                  _ 
  /___\__ _ _ __ ___    /_\  _ __  _ __/ / /\ \ (_)______ _ _ __ __| |
 //  // _` | '__/ _ \  //_\\| '_ \| '_ \ \/  \/ / |_  / _` | '__/ _` |
/ \_// (_| | | |  __/ /  _  \ |_) | |_) \  /\  /| |/ / (_| | | | (_| |
\___/ \__, |_|  \___| \_/ \_/ .__/| .__/ \/  \/ |_/___\__,_|_|  \__,_|
      |___/                 |_|   |_|                                 
      Ogre 1.7.x Application Wizard for VC10 (August 2010)
      http://code.google.com/p/ogreappwizards/
-----------------------------------------------------------------------------
*/
#ifndef __OgreApp1_h_
#define __OgreApp1_h_

#include "BaseApplication.h"
#if OGRE_PLATFORM == OGRE_PLATFORM_WIN32
#include "../res/resource.h"
#endif

#include <Terrain/OgreTerrain.h>
#include <Terrain/OgreTerrainGroup.h>

class OgreApp1 : public BaseApplication
{
public:
    OgreApp1(void);
    virtual ~OgreApp1(void);

protected:
    virtual void createScene(void);
};

class BasicTutorial2 : public BaseApplication
{
public:
	BasicTutorial2(void);
	virtual ~BasicTutorial2(void);
 
protected:
	virtual void createScene(void);
	virtual void createCamera(void);
	virtual void createViewports(void);
};

class BasicTutorial3 : public BaseApplication
{
private:
    Ogre::TerrainGlobalOptions* mTerrainGlobals;
    Ogre::TerrainGroup* mTerrainGroup;
    bool mTerrainsImported;
 
    void defineTerrain(long x, long y);
    void initBlendMaps(Ogre::Terrain* terrain);
    void configureTerrainDefaults(Ogre::Light* light);
public:
    BasicTutorial3(void);
    virtual ~BasicTutorial3(void);
 
protected:
    virtual void createScene(void);
    virtual void createFrameListener(void);
    virtual void destroyScene(void);
    virtual bool frameRenderingQueued(const Ogre::FrameEvent& evt);
};
#endif // #ifndef __OgreApp1_h_
