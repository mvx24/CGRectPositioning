Pod::Spec.new do |s|
  s.name = "CGRectPositioning"
  s.version = "1.0.0"
  s.summary = "Header file with macros for doing relative CGRect layouts in code."
  s.description = <<-DESC
    CGRectPositioning macros can position a CGRect above, below, inside, outside, centered, adjacent to, and all other combinations relative to another CGRect using a set padding.
    Also provided are macros for creating a CGRect from a size, getting the center point of a CGRect, and working with a grid of CGRects.
    DESC
  s.author = { "Symbiotic Software" => "marc@symbioticsoftware.com" }
  s.social_media_url = "http://twitter.com/symbioticsoftwr"
  s.homepage = "http://symbioticsoftware.com"
  s.license = { :type => "BSD", :file => "LICENSE" }
  s.platform = :ios, "4.3"
  s.source = { :git => "git@github.com:mvx24/CGRectPositioning.git", :tag => "1.0.0" }
  s.source_files = "CGRectPositioning.h"
  s.requires_arc = false
end
