//
//  PRMasterViewController.h
//  Passer-Rating
//
//  Created by Miene Lee on 7/29/12.
//  Copyright (c) 2012 Miene Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface PRMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
