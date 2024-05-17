//
//  CppPropertyLocationCriteria.h
//  positioning
//
//  Created by Daniel on 2022-09-28.
//  Copyright © 2022 Mapsted. All rights reserved.
//

#ifndef CppPropertyLocationCriteria_h
#define CppPropertyLocationCriteria_h

#import "ICppLocationCriteria.h"

typedef NS_ENUM(NSInteger, EnumLocationCriteriaTriggerDirection);
typedef NS_ENUM(NSInteger, EnumLocationCriteriaTriggerType);

@interface CppPropertyLocationCriteria: NSObject<ICppLocationCriteria>

-(nullable id) initWithPropertyId:(NSInteger)propertyId;

- (void) setTriggerDelay:(float)delayInSeconds ignoreDelayedEventIfStateChanged:(BOOL)ignoreDelayedEventIfStateChanged;
- (void) setTriggerDirection:(EnumLocationCriteriaTriggerDirection)direction;

- (int) getPropertyId;
- (float) getDelayInSeconds;
- (BOOL) getIgnoreDelayedEventIfStateChanged;

- (EnumLocationCriteriaTriggerDirection) getLocationCriteriaTriggerDirection;
- (EnumLocationCriteriaTriggerType) getLocationCriteriaTriggerType;
@end

#endif /* CppPropertyLocationCriteria_h */
