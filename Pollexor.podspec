#
# Be sure to run `pod lib lint NAME.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#
Pod::Spec.new do |s|
  s.name             = "Pollexor"
  s.version          = '2.0.2-J2ObjC' 
  s.author           = { "Marcus Smith" => "m_badenochsmith@yahoo.co.uk" }
  s.source           = { :git => "https://github.com/LaundryMan-UAE/pollexor.git", :tag=>'2.0.2-J2Objc-2.6-3' }
  s.summary 	     = "Version 2.0.2 update translated via J2ObjC - no aes256 and native HmacSHA1 impl"
  s.homepage         = "http://square.github.io/pollexor/"
  s.license          = { :type => 'Apache License, Version 2.0', :file => 'LICENSE.txt' }

  s.ios.deployment_target = '9.2'
  s.osx.deployment_target = '10.7'
  s.requires_arc = false

s.preserve_paths = 'src/main/gen/objc/com'
  s.subspec 'com' do |o|
    o.preserve_paths = 'src/main/gen/objc/org/squareup'
    o.subspec 'squareup' do |j|
      j.preserve_paths = 'src/main/gen/objc/org/com/pollexor'
      j.subspec 'pollexor' do |c|
        c.source_files = 'src/main/gen/objc/**/*.{h,m}'
	c.exclude_files = 'src/main/gen/objc/*Test.{h,m}'
        c.public_header_files = 'src/main/gen/objc/**/*.h'
        c.header_mappings_dir = 'src/main/gen/objc'
	c.compiler_flags = '-Wno-nullability-completeness'
      end
    end
  end

  s.xcconfig = { 'HEADER_SEARCH_PATHS' => "\"${PODS_ROOT}/J2ObjC/dist/include\"" }

end
