//
//  KBButtonCell.h
//  KBButton
//
//  Created by Kyle Bock on 11/2/12.
//  Copyright (c) 2012 Kyle Bock. All rights reserved.
//

#import <Cocoa/Cocoa.h>

typedef enum {
    BButtonTypeDefault = 0,
    BButtonTypePrimary,
    BButtonTypeInfo,
    BButtonTypeSuccess,
    BButtonTypeWarning,
    BButtonTypeDanger,
    BButtonTypeInverse,
    BButtonTypeCustom
} BButtonType;

@interface KBButtonCell : NSButtonCell {
  NSColor *_color,
          *_userDefinedColor,
          *_userDefinedTextColor;
  BButtonType kbButtonType;
  BOOL _boldText;
  BOOL _customTextColorForced;
}

@end

