//
//  MasterViewController.h
//  Test Product
//
//  Created by Martin Crockett on 17/03/2013.
//  Copyright (c) 2013 Martin Crockett. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
