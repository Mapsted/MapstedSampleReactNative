//
//  CppFloorLocationCriteria.h
//  positioning
//
//  Created by Daniel on 2022-09-21.
//  Copyright © 2022 Mapsted. All rights reserved.
//

#ifndef CppFloorLocationCriteria_h
#define CppFloorLocationCriteria_h

#import "ICppLocationCriteria.h"

typedef NS_ENUM(NSInteger, EnumLocationCriteriaTriggerDirection);
typedef NS_ENUM(NSInteger, EnumLocationCriteriaTriggerType);

@interface CppFloorLocationCriteria: NSObject<ICppLocationCriteria>

-(nullable id) initWithFloorId:(NSInteger)floorId;

- (void) setTriggerDelay:(float)delayInSeconds ignoreDelayedEventIfStateChanged:(BOOL)ignoreDelayedEventIfStateChanged;
- (void) setTriggerDirection:(EnumLocationCriteriaTriggerDirection)direction;

- (int) getFloorId;
- (float) getDelayInSeconds;
- (BOOL) getIgnoreDelayedEventIfStateChanged;

- (EnumLocationCriteriaTriggerDirection) getLocationCriteriaTriggerDirection;
- (EnumLocationCriteriaTriggerType) getLocationCriteriaTriggerType;

@end

#endif /* CppFloorLocationCriteria_h */
