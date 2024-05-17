//
//  MapPackageManagerWrapper.h
//  MapViewer
//
//  Created by Mapsted on 2019-02-01.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MNPackageType.h"

@class DataPackage;

NS_ASSUME_NONNULL_BEGIN

@interface MapPackageManagerWrapper : NSObject

+ (nonnull instancetype)shared;

- (BOOL)updateMapTiles:(NSString *)packagePath;
- (DataPackage *)getPackage:(int)propertyId forPackageType:(MNPackageType)packageType;
- (BOOL)updatePackage:(DataPackage *)dataPackage;
- (BOOL)deletePackage:(int)propertyId;
- (NSString *)getMapTilesFilePath;
@end

NS_ASSUME_NONNULL_END
