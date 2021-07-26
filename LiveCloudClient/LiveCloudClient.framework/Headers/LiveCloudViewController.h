//
//  Created for LiveCloudClient in 2021/6/28
//
//  Copyright © 2021 Kuozhi Network Tech. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LiveCloudViewController : UIViewController

@property (nonatomic, copy, nullable) void (^entered)(void);
@property (nonatomic, copy, nullable) void (^exit)(void);


- (instancetype)initWithRoomUrl:(NSString *)roomUrl options:(nullable NSDictionary *)options;

@end

NS_ASSUME_NONNULL_END
