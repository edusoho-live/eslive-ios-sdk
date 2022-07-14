Pod::Spec.new do |s|
  s.name             = 'eslive-ios-sdk'
  s.version          = '1.0.1'
  s.summary          = 'EduSoho Live Cloud iOS SDK.'
  s.homepage         = 'https://github.com/edusoho-live/eslive-ios-sdk'
  s.license          = { :type => 'Copyright', :text => 'Copyright 2022 Kuozhi Network Tech Ltd. All rights reserved.' }
  s.author           = { 'zhugexiaobo' => 'zhugexiaobo@gmail.com' }
  s.source           = { :git => 'https://github.com/edusoho-live/eslive-ios-sdk.git', :tag => s.version.to_s }
  s.ios.deployment_target = '9.0'
  s.source_files  = 'ESLive-iOS-SDK/ESLiveSDK.framework/Headers/*.{h}'
  s.vendored_frameworks = 'ESLive-iOS-SDK/ESLiveSDK.framework'
  s.public_header_files = 'ESLive-iOS-SDK/ESLiveSDK.framework/Headers/LiveCloudClient.h'
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
