//
//  Pageview.h
//  PiwikTracker
//
//  Created by Mattias Levin on 5/13/12.
//  Copyright (c) 2012 Mattias Levin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface PTEvent : NSManagedObject

@property (nonatomic, retain) NSString * eventData;
@property (nonatomic, retain) NSNumber * timestamp;

@end
