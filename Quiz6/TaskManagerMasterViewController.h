//
//  TaskManagerMasterViewController.h
//  Quiz6
//
//  Created by Jonathan Diehl on 3/29/14.
//  Copyright (c) 2014 Jonathan Diehl. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TaskManagerDetailViewController;

@interface TaskManagerMasterViewController : UITableViewController

@property (strong, nonatomic) TaskManagerDetailViewController *detailViewController;

@end
