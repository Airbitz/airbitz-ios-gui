//
//  InfoPopupView.h
//  Airbitz
//
//  Created by James on 4/13/18.
//  Copyright © 2018 Airbitz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InfoPopupView : UIView

- (instancetype)initWithTitle:(nullable NSString *)titleText
                        image:(nullable UIImage *)image
                    bodyLabel:(nullable NSString *)bodyText
                   buttonText:(nullable NSString *)buttonText
                 buttonAction:(void(^_Nullable)())buttonAction;

- (void)show:(UIView *)parentView;
- (void)dismiss;

@end