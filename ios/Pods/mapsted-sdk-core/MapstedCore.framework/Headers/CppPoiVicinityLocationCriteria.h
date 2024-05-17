//
//  CppPoiVicinityLocationCriteria.h
//  positioning
//
//  Created by Daniel on 2022-09-28.
//  Copyright © 2022 Mapsted. All rights reserved.
//

#ifndef CppPoiVicinityLocationCriteria_h
#define CppPoiVicinityLocationCriteria_h

#import "ICppLocationCriteria.h"
@class MNEntityZone;

typedef NS_ENUM(NSInteger, EnumLocationCriteriaTriggerDirection);
typedef NS_ENUM(NSInteger, EnumLocationCriteriaTriggerType);

@interface CppPoiVicinityLocationCriteria: NSObject<ICppLocationCriteria>

- (id) init;

- (void) setTriggerDelay:(float)delayInSeconds ignoreDelayedEventIfStateChanged:(BOOL)ignoreDelayedEventIfStateChanged;
- (float) getDelayInSeconds;
- (BOOL) getIgnoreDelayedEventIfStateChanged;

- (void) setActivationDistance:(float)distanceInMeters;
- (float) getActivationDistance;

- (void) setEntityZones:(NSArray<MNEntityZone*> *)entityZones;
- (NSArray<MNEntityZone*>*) getEntityZones;

- (void) setTriggerDirection:(EnumLocationCriteriaTriggerDirection)direction;
- (EnumLocationCriteriaTriggerDirection) getLocationCriteriaTriggerDirection;

- (EnumLocationCriteriaTriggerType) getLocationCriteriaTriggerType;

@end

#endif /* CppPoiVicinityLocationCriteria_h */
