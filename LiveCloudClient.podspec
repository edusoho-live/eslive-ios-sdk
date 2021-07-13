Pod::Spec.new do |s|
  s.name             = 'LiveCloudClient'
  s.version          = '0.1.0'
  s.summary          = 'Live Cloud iOS SDK.'
  s.homepage         = 'https://github.com/codeages/livecloud-ios-sdk'
  s.license          = { :type => 'Copyright', :text => 'Copyright 2021 Kuozhi Network Tech Ltd. All rights reserved.' }
  s.author           = { 'zhugexiaobo' => 'zhugexiaobo@gmail.com' }
  s.source           = { :git => 'https://github.com/codeages/livecloud-ios-sdk.git', :tag => s.version.to_s }
  s.ios.deployment_target = '9.0'
  s.source_files  = 'LiveCloudClient/LiveCloudClient.framework/Headers/*.{h}'
  s.vendored_frameworks = 'LiveCloudClient/LiveCloudClient.framework'
  s.public_header_files = 'LiveCloudClient/LiveCloudClient.framework/Headers/LiveCloudClient.h'
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
