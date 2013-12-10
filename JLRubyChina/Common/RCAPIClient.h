//
//  RCAPIClient.h
//  SinaMBlogNimbus
//
//  Created by jimneylee on 13-7-25.
//  Copyright (c) 2013年 jimneylee. All rights reserved.
//

#import "AFHTTPClient.h"
#import "JLAFHTTPClient.h"

@interface RCAPIClient : JLAFHTTPClient

+ (RCAPIClient*)sharedClient;

//================================================================================
// search
//================================================================================
// 搜索用户
+ (NSString*)relativePathForTopicsWithPageCounter:(NSUInteger)pageCounter
                                     perpageCount:(NSUInteger)perpageCount;
// 查看帖子详细
+ (NSString*)relativePathForTopicDetailWithTopicId:(unsigned long)topicId;
@end

NSString *const kAPIBaseURLString;