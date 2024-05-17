//
//  EnumValidBlueDotError.h
//  positioning
//
//  Created by Daniel on 2022-04-18.
//  Copyright © 2022 Mapsted. All rights reserved.
//

#ifndef EnumValidBlueDotError_h
#define EnumValidBlueDotError_h

	/// Represents errors when attempting to initialize the SDK
typedef NS_ENUM(NSInteger, EnumValidBlueDotError) {
    NOERROR = 0,
    ALWAYS_DISABLE = 10,
    MISSING_INTERTIAL_SENSORS = 20,
    MISSING_BAROMETER = 30,
    UNRELIABLE_DATA = 40,
    UNKNOWNVALUE = 400
};

#endif /* EnumValidBlueDotError_h */
