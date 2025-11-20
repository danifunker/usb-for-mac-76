#ifndef MAIN_H
#define MAIN_H

// C stuff
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Mac stuff
#include <DriverServices.h>
#include <NameRegistry.h>
#include <PCI.h>

// Local stuff
#include "PCIDevice.h"
#include "NameReg.h"
#include "Timing.h"

#include ":OHCI:OHCI.h"
#include ":OHCI:ISR.h"

#define SONNET_TANGO_GESTALT_NAME "pci1033,35"

#define NEC_USB2_GESTALT_NAME      "pci1033,00e0"
#define KEYLARGO_USB_GESTALT_NAME  "pci106b,19"
#define ORANGE_USB_GESTALT_NAME    "pci11c1,5802"

void MAIN_ProcessEvent(EventRecord *event);
void MAIN_EventLoop();

#endif
