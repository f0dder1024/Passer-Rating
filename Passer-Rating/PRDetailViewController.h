//
//  PRDetailViewController.h
//  Passer-Rating
//
//  Created by Miene Lee on 7/29/12.
//  Copyright (c) 2012 Miene Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PRDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
