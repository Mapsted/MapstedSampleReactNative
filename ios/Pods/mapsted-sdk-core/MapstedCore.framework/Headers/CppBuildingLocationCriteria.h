//
//  CppBuildingLocationCriteria.h
//  positioning
//
//  Created by Daniel on 2022-09-21.
//  Copyright © 2022 Mapsted. All rights reserved.
//

#ifndef CppBuildingLocationCriteria_h
#define CppBuildingLocationCriteria_h

#import "ICppLocationCriteria.h"

typedef NS_ENUM(NSInteger, EnumLocationCriteriaTriggerDirection);
typedef NS_ENUM(NSInteger, EnumLocationCriteriaTriggerType);

@interface CppBuildingLocationCriteria: NSObject<ICppLocationCriteria>

-(nullable id) initWithBuildingId:(NSInteger)buildingId;

- (void) setTriggerDelay:(float)delayInSeconds ignoreDelayedEventIfStateChanged:(BOOL)ignoreDelayedEventIfStateChanged;
- (void) setTriggerDirection:(EnumLocationCriteriaTriggerDirection)direction;

- (int) getBuildingId;
- (float) getDelayInSeconds;
- (BOOL) getIgnoreDelayedEventIfStateChanged;

- (EnumLocationCriteriaTriggerDirection) getLocationCriteriaTriggerDirection;
- (EnumLocationCriteriaTriggerType) getLocationCriteriaTriggerType;


@end
#endif /* CppBuildingLocationCriteria_h */
