//
//  TMViewController.h
//  Traffic MTL
//
//  Created by Julien Saad on 2014-05-22.
//  Copyright (c) 2014 Développements Third Bridge Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GAITrackedViewController.h"
#import "PaperFoldMenuController.h"
#import "DemoMenuController.h"

#import "BVReorderTableView.h"
#import <CoreLocation/CoreLocation.h>


@interface TMViewController : GAITrackedViewController<UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, CLLocationManagerDelegate>
@property (weak, nonatomic) IBOutlet UIView *noInternet;

@property (weak, nonatomic) IBOutlet UILabel *champlainLabel;
@property (weak, nonatomic) IBOutlet UILabel *victoriaLabel;
@property (weak, nonatomic) IBOutlet UILabel *jcLabel;
@property (weak, nonatomic) IBOutlet UIView *b1Frame;
@property (weak, nonatomic) IBOutlet BVReorderTableView *tableView;
- (IBAction)versMtlClick:(id)sender;
- (IBAction)versBanlieueClick:(id)sender;

- (IBAction)changeShore:(id)sender;

@property (weak, nonatomic) IBOutlet UIView *colorFilter;
@property (weak, nonatomic) IBOutlet UIButton *b1;

@property (weak, nonatomic) IBOutlet UIButton *b2;
@property (weak, nonatomic) IBOutlet UIView *montrealBar;
@property (weak, nonatomic) IBOutlet UIView *banlieuBar;
@property (weak, nonatomic) IBOutlet UIView *statusBarView;
@property NSMutableArray* statusBarImages;

@property UIImageView *gif;

@property (weak, nonatomic) IBOutlet UIView *bottomBar;
// Sidebar

@property DemoMenuController* sideMenu;

// Core location
@property (nonatomic,retain) CLLocationManager *manager;
@property float latitude;
@property float longitude;

@end
