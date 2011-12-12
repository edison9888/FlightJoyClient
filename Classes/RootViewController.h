//
//  RootViewController.h
//  MyNav
//
//  Created by 王 攀 on 11-8-23.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "ListViewController.h"
#import "JSON.h"
#import "SBJSON.h"

@interface RootViewController : ListViewController{
	
}

- (void) stopUpdateProcess;
- (void)loadToolbarItems;
- (void)addOrUpdateTableWithServerResponse:(NSString *)responseString;

@end
