//
//  NSImage+MGProportionalFill.h
//  Photopage
//
//  Created by Gleb on 06/01/2013.
//  Based on the code by Matt Gemmell on 20/08/2008.
//  Copyright 2008 Instinctive Code.
//

#import <Cocoa/Cocoa.h>

@interface NSImage (MGProportionalFill)

typedef enum {
    MGImageResizeCrop,	// analogous to UIViewContentModeScaleAspectFill, i.e. "best fit" with no space around.
    MGImageResizeCropStart,
    MGImageResizeCropEnd,
    MGImageResizeScale	// analogous to UIViewContentModeScaleAspectFit, i.e. scale down to fit, leaving space around if necessary.
} MGImageResizingMethod;

- (NSImage *)imageToFitSize:(CGSize)size method:(MGImageResizingMethod)resizeMethod;
- (NSImage *)imageCroppedToFitSize:(CGSize)size; // uses MGImageResizeCrop
- (NSImage *)imageScaledToFitSize:(CGSize)size; // uses MGImageResizeScale

@end
