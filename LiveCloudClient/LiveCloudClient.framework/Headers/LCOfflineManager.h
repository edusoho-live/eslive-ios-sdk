//
//  LCOfflineManager.h
//  LiveCloudDownload
//
//  Created by aaayi on 2021/8/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kOfflineDownloadTaskStarted;
extern NSString *const kOfflineDownloadTaskDownloading;
extern NSString *const kOfflineDownloadTaskDownloaded;
extern NSString *const kOfflineDownloadTaskFailure;

@class LCOfflineManager;
@class LCOfflineInfo;
@protocol LCOfflineDelegate <NSObject>

@optional

/// 开始离线任务
- (void)offlineReplay:(LCOfflineManager *)manager fetchStarted:(LCOfflineInfo *)data;

/// 离线任务进度
- (void)offlineReplay:(LCOfflineManager *)manager downloading:(LCOfflineInfo *)data;

/// 离线任务完成
- (void)offlineReplay:(LCOfflineManager *)manager downloaded:(LCOfflineInfo *)data;

/// 离线任务失败
- (void)offlineReplay:(LCOfflineManager *)manager downloadFailure:(LCOfflineInfo *)data;

/// 离线任务取消
- (void)offlineReplay:(LCOfflineManager *)manager fetchCancled:(LCOfflineInfo *)data;

/// 离线任务被删除
- (void)offlineReplay:(LCOfflineManager *)manager deleted:(LCOfflineInfo *)data;

/// 离线任务被全部删除
- (void)offlineReplay:(LCOfflineManager *)manager deletedAll:(LCOfflineInfo *)data;

/// 离线回放已启动
/// @param URLString 播放地址
/// @param error 错误
- (void)launchOfflineReplay:(NSString * _Nullable)URLString error:(NSError *_Nullable)error;

@end

@interface LCOfflineManager : NSObject
@property(nonatomic, copy) NSString *userId;
@property(nonatomic, copy) NSString *userName;
@property (nonatomic, weak)id<LCOfflineDelegate> delegate;

+ (instancetype)defaultManager;
- (instancetype)initWithName:(NSString *)name;


/// 获取离线任务
/// @param roomId 房间id
- (LCOfflineInfo *)getTask:(NSString *)roomId;

/// 获取所有离线任务
- (NSArray<LCOfflineInfo *> *)getAllTask;


/// 开始下载
/// @param roomId 房间id
/// @param token token
- (LCOfflineInfo *)startFetchReplay:(NSString * _Nonnull)URLString roomId:(NSString * _Nonnull)roomId token:(NSString * _Nonnull)token;
- (LCOfflineInfo *)startFetchReplay:(NSString * _Nonnull)roomId token:(NSString * _Nonnull)token;
- (void)startWithRoomId:(NSString * _Nonnull)roomId;

- (void)suspendFetchReplay:(NSString *_Nonnull)roomId handler:(void(^)(void))handler;
- (void)cancelFetchReplay:(NSString *_Nonnull)roomId handler:(void(^)(void))handler;
- (void)deleteOfflineReplay:(NSString *_Nonnull)roomId handler:(void(^)(void))handler;

/// 全部删除
- (void)deleteOfflineAll;


/// 开启离线回放
/// @param roomId 房间id
/// @param options 参数
- (void)playOfflineReplay:(NSString * )roomId options:(NSDictionary *)options handler:(void (^)(NSURL *playURL, NSError *error))handler;


/// 停止离线回放
- (void)stopOfflineReplay;

- (NSString *)offlineFilePathWithRoomId:(NSString *)roomId;
@end

NS_ASSUME_NONNULL_END
