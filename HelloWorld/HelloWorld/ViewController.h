//
//  ViewController.h
//  HelloWorld
//
//  Created by MacPro1 on 2/25/16.
//  Copyright © 2016 MacPro1. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (copy,nonatomic) NSString *userName;
-(NSString *)userName;
-(void)setUserName: (NSString *)newUserName;

@end

