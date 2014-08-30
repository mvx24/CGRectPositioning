Pod::Spec.new do |s|
  s.name         = "CGRectPositioning"
  s.version      = "1.0.0"
  s.summary      = "Header file with macros for doing relative CGRect layouts in code."
  s.description  = <<-DESC
    CGRectPositioning macros can position a CGRect above, below, inside, outside, centered, adjacent to, and all other combinations relative to another CGRect using a set padding.
    Also provided are macros for creating a CGRect from a size, getting the center point of a CGRect, and working with a grid of CGRects.
    DESC
  s.homepage = "https://github.com/mvx24/CGRectPositioning"
  s.license = { :type => "BSD", :file => "LICENSE" }
  s.platform = :ios, "4.3"
  s.source = { :git => "git@github.com:mvx24/CGRectPositioning.git", :tag => "1.0.0" }
  s.source_files  = "CGRectPositioning.h"
end
