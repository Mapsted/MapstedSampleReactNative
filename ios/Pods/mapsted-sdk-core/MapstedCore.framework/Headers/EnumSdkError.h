//
//  EnumSdkError.h
//  positioning
//
//  Created by Daniel on 2022-04-18.
//  Copyright © 2022 Mapsted. All rights reserved.
//

#ifndef EnumSdkError_h
#define EnumSdkError_h

	/// Represents errors when attempting to initialize the SDK
//typedef NS_ENUM(NSInteger, EnumSdkError) {
//	NO_ERROR = 0,
//	NO_LOCATION_PERMISSIONS,
//	NO_GPS_PERMISSIONS,
//	NULL_OR_EMPTY_LOCATION,
//	MULTIPLE_BUILDINGS_FOUND,
//	NO_NEARBY_BUILDINGS,
//	BUILDING_INFO_DOWNLOAD_ERROR,
//	GET_GPS_LOCATION_ERROR,
//	MAP_LOAD_ERROR,
//	MISSING_CALLBACK,
//	FORCE_UPDATE_APP,
//	NETWORK_ERROR,
//	INSUFFICIENT_PERMISSIONS,
//	LICENCE_NOT_YET_VERIFIED,
//};

typedef NS_ENUM(NSInteger, EnumSdkError) {
    NO_ERROR = 0,
    MISSING_CALLBACK,
    NETWORK_ERROR,
    LICENCE_INVALID,
    LICENCE_EXPIRED,
    LICENCE_INCORRECT_FORMAT,
    LICENCE_INCORRECT_FILE
};

#endif /* EnumSdkError_h */
