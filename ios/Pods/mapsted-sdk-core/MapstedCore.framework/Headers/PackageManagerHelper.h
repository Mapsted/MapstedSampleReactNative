//
//  PackageManagerHelper.h
//  positioning
//
//  Created by Parth Bhatt on 2023-03-15
//  Copyright © 2023 Mapsted. All rights reserved.
//

#ifndef PackageManagerHelper_h
#define PackageManagerHelper_h

#import <MapstedPositioningCpp.h>
#import "MNSwiftImport.h"

@interface PackageManagerHelper : NSObject

+ (DataPackage *)convertToDataPackage:(MapstedCpp::MapPackageManager::DataPackage)dataPackage;
+ (MapstedCpp::MapPackageManager::DataPackage)convertFromDataPackage:(DataPackage *)dataPackage;
@end

#endif
