//
//  BrandTheme.h
//  Airbitz
//
//  Created by Paul P on 12/7/15.
//  Copyright © 2015 Airbitz. All rights reserved.
//

#ifndef BrandTheme_h
#define BrandTheme_h


#ifdef RACKWALLET


#define AppFont                                         @"Lato-Regular"

#define ColorOffBright                                  UIColorFromARGB(0xffeeeeee)
#define ColorDarkGrey                                   UIColorFromARGB(0xff383838)
#define ColorWhiteFrost                                 UIColorFromARGB(0xaaffffff)

#define ColorPinUserNameSelectorShadow                  UIColorFromARGB(0xff3756B8)
#define ColorPinEntryText                               ColorOffBright
#define ColorPinEntryUsernameText                       UIColorFromARGB(0xffCAE3FF)

#define ColorLoginTitleText                             ColorOffBright
#define ColorLoginTitleTextShadow                       UIColorFromARGB(0xff1C3294)

#define DirectoryCategoryButtonsBackgroundColor         ColorWhiteFrost

#define LoginTitleTextShadowRadius                      0.0f
#define PinEntryTextShadowRadius                        1.0f


#else



#define AppFont                                         @"Lato-Regular"

#define ColorOffBright                                  UIColorFromARGB(0xffeeeeee)
#define ColorDarkGrey                                   UIColorFromARGB(0xff383838)
#define ColorWhiteFrost                                 UIColorFromARGB(0xaaffffff)

#define ColorPinUserNameSelectorShadow                  UIColorFromARGB(0xff3756B8)
#define ColorPinEntryText                               ColorOffBright
#define ColorPinEntryUsernameText                       UIColorFromARGB(0xffCAE3FF)

#define ColorLoginTitleText                             ColorOffBright
#define ColorLoginTitleTextShadow                       UIColorFromARGB(0xff1C3294)

#define DirectoryCategoryButtonsBackgroundColor         ColorWhiteFrost

#define LoginTitleTextShadowRadius                      0.0f
#define PinEntryTextShadowRadius                        1.0f


#endif

#endif /* BrandTheme_h */