//
//  RQCardModel.h
//  RQTripleTriadList
//
//  Created by Qian Jixiang on 2016/12/3.
//  Copyright © 2016年 Qian Jixiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RQCardModel : NSObject
@property (nonatomic, retain) NSString *cardName;
@property (nonatomic, retain) NSString *cardElement;
@property (nonatomic, assign) NSInteger cardRank;
@property (nonatomic, assign) NSInteger cardLeftNum;
@property (nonatomic, assign) NSInteger cardRightNum;
@property (nonatomic, assign) NSInteger cardUpNum;
@property (nonatomic, assign) NSInteger cardDownNum;
@end
