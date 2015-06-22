//
//  TestTableViewCell.h
//  moreCocoaPodPractice
//
//  Created by Leo Kwan on 6/21/15.
//  Copyright (c) 2015 Leo Kwan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SWTableViewCell.h>

@interface TestTableViewCell : SWTableViewCell


@property (weak, nonatomic) UILabel *customLabel;
@property (weak, nonatomic) UIImageView *customImageView;

@end
