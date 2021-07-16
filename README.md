# LiveCloudClient

[![Version](https://img.shields.io/cocoapods/v/LiveCloudClient.svg?style=flat)](https://cocoapods.org/pods/LiveCloudClient)
[![Platform](https://img.shields.io/cocoapods/p/LiveCloudClient.svg?style=flat)](https://cocoapods.org/pods/LiveCloudClient)


## 安装

1. 开始前确保你已安装 Cocoapods。参考 [Getting Started with CocoaPods](https://guides.cocoapods.org/using/getting-started.html#getting-started) 安装说明。

2. 在终端里进入项目根目录，并运行 `pod init` 命令。项目文件夹下会生成一个 `Podfile` 文本文件。

3. 打开 `Podfile` 文件，修改文件为如下内容。注意将 `Your App` 替换为你的 `Target` 名称。

```ruby
# platform :ios, '9.0'
target 'Your App' do
    pod 'LiveCloudClient'
end
```

4. 在终端内运行 `pod install` 命令安装 SDK。成功安装后，Terminal 中会显示 `Pod installation complete!`，此时项目文件夹下会生成一个 `xcworkspace` 文件。

5. 打开新生成的 `xcworkspace` 文件。

## 权限

在项目的 `Info.plist` 文件中增加权限说明

```xml
<key>NSCameraUsageDescription</key>
<string>使用摄像头拍摄</string>
<key>NSMicrophoneUsageDescription</key>
<string>使用麦克风录音</string>
```

## 示例

- Swift 接入示例

```swift
import LiveCloudClient

    ......

    // 通过接口获取直播课堂 url
    let controller = LiveCloudViewController.init(roomUrl: url, options: nil);
    self.navigationController?.pushViewController(controller, animated: true);
    
    ......
}
```

- Objective-C 接入示例

```objc
#import "LiveCloudClient/LiveCloudClient.h"
    
    ......

    // 通过接口获取直播课堂 url
    LiveCloudViewController *controller = [[LiveCloudViewController alloc] initWithRoomUrl:url options:nil];
    [self.navigationController pushViewController:controller animated:YES];

    ......
}
```


## License

Copyright 2021 Kuozhi Network Tech Ltd. All rights reserved.
