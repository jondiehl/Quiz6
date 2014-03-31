//
//  Task.h
//  quiz5
//
//  Created by Jonathan Diehl on 3/29/14.
//  Copyright (c) 2014 Jonathan Diehl. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Task : NSObject

@property (nonatomic) float urgency;
@property (nonatomic) NSDate *dueDate;
@property (nonatomic) NSString *taskName;

- (id)initWithTaskName:(NSString *)name
               urgency:(float)urgency
               dateDue:(NSDate *)dueDate;

@end
