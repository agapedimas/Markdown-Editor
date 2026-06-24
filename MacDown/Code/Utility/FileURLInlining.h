//
//  Untitled.h
//  Markdown Editor
//
//  Created by wltb on 04.01.26.
//  Copyright © 2026 Tzu-ping Chung . All rights reserved.
//

@interface FileURLInlining : NSObject
+(NSArray<NSString*>*)inlineFromIterable:(id<NSFastEnumeration>)iterable;
-(instancetype) initWithURL: (NSURL *) url;
-(NSString *) inlineContent;
@property (nonatomic, strong) NSURL *url;
@end
