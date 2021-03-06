//
//  WAFBSharePhoto.h
//  WASdkIntfUI
//
//  Created by wuyx on 16/3/15.
//  Copyright © 2016年 GHW-T-01. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
/*!
 @discussion WAFBSharePhoto
 - - -
 */
@interface WASharePhoto : NSObject
/*!
 @abstract If the photo is resident in memory, this method supplies the data.
 @return UIImage representation of the photo
 */
@property (nonatomic, strong) UIImage *image;

/*!
 @abstract The URL to the photo.
 @return URL that points to a network location or the location of the photo on disk
 */
@property (nonatomic, copy) NSURL *imageURL;

/*!
 @abstract Specifies whether the photo represented by the receiver was generated by the user or by the application.
 @return YES if the photo is user-generated, otherwise NO
 */
@property (nonatomic, assign) BOOL userGenerated;


/*!
 @abstract The user generated caption for the photo. Note that the 'caption' must come from
 * the user, as pre-filled content is forbidden by the Platform Policies (2.3).
 @return the Photo's caption if exists else returns null.
 */
@property (nonatomic, copy) NSString *caption;
@end
