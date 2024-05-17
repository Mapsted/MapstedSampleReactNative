//
//  MNPositioningMode.h
//  positioning
//
//  Created by Mapsted on 2020-04-30.
//  Copyright © 2020 Mapsted. All rights reserved.
//

#ifndef MNPositioningMode_h
#define MNPositioningMode_h
typedef NS_ENUM(NSInteger, MNPositioningMode) {
  MNModeInfo = 10,
  MNModeCalibration = 20,
  MNModeWayFinding = 30,
  MNModePositioning = 40,
  MNModeCMSStaging = 6 // Updated the positioningMode from the Common.h with PositioningMode enum objects
};
#endif /* MNPositioningMode_h */
