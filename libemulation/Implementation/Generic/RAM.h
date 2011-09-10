
/**
 * libemulation
 * RAM
 * (C) 2010 by Marc S. Ressl (mressl@umich.edu)
 * Released under the GPL
 *
 * Controls random access memory
 */

// Notes:
// * size is the RAM size. It must be a power of two.
// * To determine the power state, set the controlBus.
// * powerOnPattern is the byte pattern used when power is first applied.
// * image is the RAM image.

#include "OEComponent.h"

#include "ControlBus.h"

typedef enum
{
    RAM_GET_MEMORY,
} RAMMessage;

class RAM : public OEComponent
{
public:
    RAM();
    
    bool setValue(string name, string value);
    bool setRef(string name, OEComponent *ref);
    bool setData(string name, OEData *data);
    bool getData(string name, OEData **data);
    bool init();
    
    bool postMessage(OEComponent *sender, int message, void *data);
    
    void notify(OEComponent *sender, int notification, void *data);
    
    OEUInt8 read(OEAddress address);
    void write(OEAddress address, OEUInt8 value);
    
private:
    OEAddress size;
    OEData data;
    OEUInt8 *datap;
    OEAddress mask;
    
    OEComponent *controlBus;
    OEData powerOnPattern;
    ControlBusPowerState powerState;
    
    void initMemory();
};
