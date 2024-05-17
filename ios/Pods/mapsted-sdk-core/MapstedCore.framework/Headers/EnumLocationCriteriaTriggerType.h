//
//  EnumLocationCriteriaTriggerType.h
//  positioning
//
//  Created by Daniel on 2022-09-22.
//  Copyright © 2022 Mapsted. All rights reserved.
//

#ifndef EnumLocationCriteriaTriggerType_h
#define EnumLocationCriteriaTriggerType_h

/*
 Objective-C versions of Location Crtieria Trigger Type Enumeration  for Geofence SDK
 */
typedef NS_ENUM(NSInteger, EnumLocationCriteriaTriggerType) {
    UNKNOWN_LOCATION_CRITERIA = 0,
    OFF_PREMISE,
    PROPERTY,
    BUILDING,
    FLOOR,
    POI_VICINITY,
    POLYGON_GEOFENCE
};
#endif /* EnumLocationCriteriaTriggerType_h */
