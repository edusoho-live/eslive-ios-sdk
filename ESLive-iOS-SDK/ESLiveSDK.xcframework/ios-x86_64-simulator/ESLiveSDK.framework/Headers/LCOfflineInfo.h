//
//  LCOfflineInfo.h
//  LiveCloudDownload
//
//  Created by aaayi on 2021/8/25.
//

#import <Foundation/Foundation.h>
typedef NS_ENUM (NSInteger, LCOfflineStatus) {
    LCOfflineStatusWaiting = -1,
    LCOfflineStatusDownloading      = 0,
    LCOfflineStatusFinish       = 1,
    LCOfflineStatusFailure       = 2,
    LCOfflineStatusPause       = 3,
};

NS_ASSUME_NONNULL_BEGIN

@interface LCOfflineInfo : NSObject
@property(nonatomic, copy) NSString *roomId;
@property(nonatomic, copy) NSString *token;
@property(nonatomic, copy) NSString *roomName;
/// 等待中：-1，下载中：0，完成：1，失败：2
@property(nonatomic, assign) LCOfflineStatus status;
@property(nonatomic, copy) NSString *hint;
@property(nonatomic, assign) NSUInteger totalUnitCount;
@property(nonatomic, assign) NSUInteger completedUnitCount;
@property (strong, nonatomic) NSDictionary<NSString *, NSString *> *attachments;
@property (nonatomic, assign) BOOL zombieInfo;
- (float)progressValue;
@end

NS_ASSUME_NONNULL_END
