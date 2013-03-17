//
//  DetailViewController.h
//  Test Product
//
//  Created by Martin Crockett on 17/03/2013.
//  Copyright (c) 2013 Martin Crockett. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
