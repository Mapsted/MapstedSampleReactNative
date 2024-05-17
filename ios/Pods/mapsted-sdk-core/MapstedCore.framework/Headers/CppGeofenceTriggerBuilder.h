//
//  CppGeofenceTriggerBuilder.h
//  positioning
//
//  Created by Daniel on 2022-09-21.
//  Copyright © 2022 Mapsted. All rights reserved.
//

#ifndef CppGeofenceTriggerBuilder_h
#define CppGeofenceTriggerBuilder_h

@protocol ICppLocationCriteria;
@class CppGeofenceTrigger;

@interface CppGeofenceTriggerBuilder: NSObject

-(nullable id) initWithPropertyId:(NSInteger)propertyId geofenceId:(NSString*) geofenceId;

- (int) getPropertyId;
- (NSString*) getGeofenceId;
- (void) setLocationCriteria:(id<ICppLocationCriteria>)cppLocationCriteria;
- (id<ICppLocationCriteria>) getLocationCriteria;

@end

#endif /* CppGeofenceTriggerBuilder_h */
