//
//  ViewController.h
//  ParseSavingImages
//
//  Created by Chris Milne on 11/25/14.
//  Copyright (c) 2014 ideo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import "MBProgressHUD.h"
#include <stdlib.h> // For math functions including arc4random (a number randomizer)

@interface ViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, MBProgressHUDDelegate>
{
    IBOutlet UIScrollView *photoScrollView;
    NSMutableArray *allImages;
    
    MBProgressHUD *HUD;
    MBProgressHUD *refreshHUD;
}

- (IBAction)refresh:(id)sender;
- (IBAction)cameraButtonTapped:(id)sender;
- (void)uploadImage:(NSData *)imageData;
- (void)setUpImages:(NSArray *)images;
- (void)buttonTouched:(id)sender;

@end

