//
//  StatusMessageType.h
//  positioning
//
//  Created by Parth Bhatt on 18/12/23.
//  Copyright © 2023 Mapsted. All rights reserved.
//

#ifndef StatusMessageType_h
#define StatusMessageType_h

typedef NS_ENUM(NSInteger, StatusMessageType) {
    FetchingPropertyList = 1,
    FetchingPropertyFailed,
    NoPropertiesFound,
    FetchingPropertyListCompleted,
    FetchingGlobalCategories,
    FetchingPropertyCategories,
    FetchingPropertyCategoriesCompleted,
    FetchingNearByProperties,
    InternetNotReachable,
    Other
};

#endif /* StatusMessageType_h */
