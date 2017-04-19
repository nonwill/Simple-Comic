//
//  DTPageArrayController.h
//  SimpleComic
//
//  Created by Alexander Rauchfuss on 6/11/08.
//  Copyright 2008 Dancing Tortoise Software. All rights reserved.
//


#import <Cocoa/Cocoa.h>
@class TSSTPage;

@interface DTPageArrayController : NSArrayController

@property (assign, nonatomic) NSUInteger pageOrder;
@property (assign, nonatomic) NSUInteger pageLayout;

@property (readonly) TSSTPage * firstPage;
@property (readonly) TSSTPage * secondPage;
/* This is just a stub for the time being.
    Long term there may be an arbitrary number of pages on screen. */
@property (readonly) NSArray * visiblePages;

//+ (NSSet *)keyPathsForValuesAffectingFirstPage;
//+ (NSSet *)keyPathsForValuesAffectingSecondPage;

- (void)selectFirst;
- (void)selectLast;

- (IBAction)selectNext:(id)sender;
- (IBAction)selectPrevious:(id)sender;

- (IBAction)pageRight:(id)sender;
- (IBAction)pageLeft:(id)sender;
- (IBAction)pageTurn:(id)sender;
- (IBAction)shiftPageRight:(id)sender;
- (IBAction)shiftPageLeft:(id)sender;
- (IBAction)skipRight:(id)sender;
- (IBAction)skipLeft:(id)sender;

- (BOOL)canSelectLeft;
- (BOOL)canSelectRight;

@end
