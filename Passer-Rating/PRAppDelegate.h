//
//  PRAppDelegate.h
//  Passer-Rating
//
//  Created by Miene Lee on 7/29/12.
//  Copyright (c) 2012 Miene Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PRAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
