#
# Be sure to run `pod lib lint NAME.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#
Pod::Spec.new do |s|
  s.name             = "Pollexor"
  s.version          = '2.0.2' 
  s.author           = { "Marcus Smith" => "m_badenochsmith@yahoo.co.uk" }
  s.source           = { :git => "https://github.com/hambroperks/pollexor.git", :tag=>'v2.0.2.J2ObjC2.1.1' }
  s.summary 	     = "Version 2.0.2 update translated via J2ObjC - no aes256 and native HmacSHA1 impl"
  s.homepage         = "http://square.github.io/pollexor/"
  s.license          = { :type => 'Apache License, Version 2.0', :file => 'LICENSE.txt' }

  s.ios.deployment_target = '9.2'
  s.osx.deployment_target = '10.7'
  s.requires_arc = false

  s.source_files = 'src/gen/objc/**/*.{h,m}'
  s.exclude_files = 'src/gen/objc/*Test.{h,m}'
  s.resources = 'src/main/resources/*'

  s.public_header_files = 'src/gen/objc/**/*.h'
  s.header_mappings_dir = 'src/gen/objc/**'
  s.compiler_flags = '-Wno-nullability-completeness'

  s.xcconfig = { 'HEADER_SEARCH_PATHS' => "\"${PODS_ROOT}/J2ObjC/dist/include\"" }

end
