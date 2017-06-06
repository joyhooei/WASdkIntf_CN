#
#  Be sure to run `pod spec lint WASdkIntf.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

s.name = 'WASdkIntf_CN'
s.version = '1.1.4'
s.summary = 'WASdkIntf_CN framework in testing environment.'
s.license = 'MIT'
s.author = { "Hank" => "hank.zhang@gamehollywood.com" }
s.homepage = 'http://repo.wingsdk.cn:8082/summary/WASdkIntf_CN.git'
s.source = { :git => "http://admin@repo.wingsdk.cn:8082/r/WASdkIntf_CN.git" , :tag => s.version}
s.platform = :ios
s.ios.deployment_target = "7.0"
s.vendored_frameworks = 'frameworks/WASdkIntf.framework'
s.resources = ['config/*.plist']
s.requires_arc = true
end