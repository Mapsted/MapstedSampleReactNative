//
//  ICppLocationCriteria.h
//  positioning
//
//  Created by Daniel on 2022-09-27.
//  Copyright © 2022 Mapsted. All rights reserved.
//

#ifndef ICppLocationCriteria_h
#define ICppLocationCriteria_h

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, EnumLocationCriteriaTriggerDirection);
typedef NS_ENUM(NSInteger, EnumLocationCriteriaTriggerType);


/// Represents a blueprint for searchable objects. The fields correspond to possible search filters
@protocol ICppLocationCriteria <NSObject>

- (EnumLocationCriteriaTriggerDirection) getLocationCriteriaTriggerDirection;
- (EnumLocationCriteriaTriggerType) getLocationCriteriaTriggerType;


@end

#endif /* ICppLocationCriteria_h */
