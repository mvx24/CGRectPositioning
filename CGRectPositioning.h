//
//  CGRectPositioning.h
//
//  Copyright (c) 2012 Symbiotic Software LLC. All rights reserved.
//  Note: all CGRects are assumed to be in a coordinate system with an upper-left origin.
//

#ifndef CGRECT_POSITIONING_H
#define CGRECT_POSITIONING_H

#define __CENTER_X (__ofRect.origin.x + (__ofRect.size.width - __rect.size.width)/2.0f)
#define __CENTER_Y (__ofRect.origin.y + (__ofRect.size.height - __rect.size.height)/2.0f)
#define __POSITION_WITH_ORIGIN(rect, ofRect, padding, x, y) ({ CGRect __rect = (rect); CGRect __ofRect = (ofRect); CGFloat __padding = (padding); (CGRect){.size=__rect.size, .origin=CGPointMake((x), (y))}; })

// Position inside an edge of a rect
#define CGRectInsideTop(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __CENTER_X, __ofRect.origin.y + __padding)
#define CGRectInsideBottom(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __CENTER_X, (__ofRect.origin.y + __ofRect.size.height) -  (__rect.size.height + __padding))
#define CGRectInsideLeft(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x + __padding, __CENTER_Y)
#define CGRectInsideRight(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, (__ofRect.origin.x + __ofRect.size.width) -  (__rect.size.width + __padding), __CENTER_Y)

// Position inside a corner of a rect
#define CGRectInsideTopLeft(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x + __padding, __ofRect.origin.y + __padding)
#define CGRectInsideTopRight(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, (__ofRect.origin.x + __ofRect.size.width) - (__rect.size.width + __padding), __ofRect.origin.y + __padding)
#define CGRectInsideBottomLeft(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x + __padding, (__ofRect.origin.y + __ofRect.size.height) -  (__rect.size.height + __padding))
#define CGRectInsideBottomRight(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, (__ofRect.origin.x + __ofRect.size.width) - (__rect.size.width + __padding), (__ofRect.origin.y + __ofRect.size.height) -  (__rect.size.height + __padding))

// Position outside an edge of a rect
#define CGRectAbove(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __CENTER_X, __ofRect.origin.y - (__padding + __rect.size.height))
#define CGRectBelow(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __CENTER_X, __ofRect.origin.y + (__padding + __ofRect.size.height))
#define CGRectLeftOf(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x - (__padding + __rect.size.width), __CENTER_Y)
#define CGRectRightOf(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x + (__padding + __ofRect.size.width), __CENTER_Y)

// Position outside a corner of a rect
#define CGRectOutsideTopLeft(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x - (__rect.size.width + __padding), __ofRect.origin.y - (__rect.size.height + __padding))
#define CGRectOutsideTopRight(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x + __ofRect.size.width + __padding, __ofRect.origin.y - (__rect.size.height + __padding))
#define CGRectOutsideBottomLeft(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x - (__rect.size.width + __padding), __ofRect.origin.y + __ofRect.size.height + __padding)
#define CGRectOutsideBottomRight(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x + __ofRect.size.width + __padding, __ofRect.origin.y + __ofRect.size.height + __padding)

// Position outside the corner of a rect and align an edge
// e.g. CGRectAboveLeft - read as position above, left edges aligned
#define CGRectAboveLeft(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x, __ofRect.origin.y - (__rect.size.height + __padding))
#define CGRectLeftOfTop(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x - (__rect.size.width + __padding), __ofRect.origin.y)
#define CGRectAboveRight(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x + __ofRect.size.width - __rect.size.width, __ofRect.origin.y - (__rect.size.height + __padding))
#define CGRectRightOfTop(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x + __ofRect.size.width + __padding, __ofRect.origin.y)
#define CGRectLeftOfBottom(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x - (__rect.size.width + __padding), __ofRect.origin.y + __ofRect.size.height - __rect.size.height)
#define CGRectBelowLeft(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x, __ofRect.origin.y + __ofRect.size.height + __padding)
#define CGRectBelowRight(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x + __ofRect.size.width - __rect.size.width, __ofRect.origin.y + __ofRect.size.height + __padding)
#define CGRectRightOfBottom(rect, ofRect, padding) __POSITION_WITH_ORIGIN(rect, ofRect, padding, __ofRect.origin.x + __ofRect.size.width + __padding, __ofRect.origin.y + __ofRect.size.height - __rect.size.height)

// Position a rect with a center point
#define CGRectCenterAt(rect, point) ({ CGRect __rect = (rect); CGPoint __point = (point); (CGRect){.size=__rect.size, .origin=CGPointMake(__point.x - (__rect.size.width/2.0f), __point.y - (__rect.size.height/2.0f))}; })

// Returns a new point with the center of a rect
#define CGRectCenter(rect) ({ CGRect __rect = (rect); CGPointMake(__rect.origin.x + (__rect.size.width/2.0f), __rect.origin.y + (__rect.size.height/2.0f)); })

// Create a rect sized with the given size at 0,0
#define CGRectSized(sized) ({ CGSize __size = (sized); (CGRect){.size=__size, .origin=CGPointZero}; })

// Generates a CGRect grid cell based on the origin cell and a coordinate within the grid
#define CGRectGridCell(rect, cellPoint) ({ CGRect __rect = (rect); CGPoint __point = (cellPoint); (CGRect){.size=__rect.size, .origin=CGPointMake(__rect.origin.x + (__rect.size.width * __point.x), __rect.origin.y + (__rect.size.height * __point.y))}; })

// Divide a rect into a grid of smaller rects according to width, height
// grid must be large enough to hold width*height CGRects
static void CGRectGrid(CGRect rect, CGRect *grid, size_t width, size_t height)
{
	CGRect *ptr;
	CGSize cellSize;
	size_t x, y;
	
	cellSize.width = rect.size.width / (CGFloat)width;
	cellSize.height = rect.size.height / (CGFloat)height;
	ptr = grid;
	for(y = 0; y < height; ++y)
	{
		for(x = 0; x < width; ++x)
		{
			ptr->origin = CGPointMake(rect.origin.x + (CGFloat)x * cellSize.width, rect.origin.y + (CGFloat)y * cellSize.height);
			ptr->size = cellSize;
			++ptr;
		}
	}
}

// For views that are implemented programatically this macro can be used to replace xib placeholder views
#define UIViewReplaceView(view, newView) do {\
UIView *__view = (view); UIView *__newView = (newView);\
[__newView setFrame:[__view frame]];\
[__newView setAutoresizingMask:[__view autoresizingMask]];\
[[__view superview] insertSubview:__newView belowSubview:__view];\
[__view removeFromSuperview];\
view = __newView;\
}while(0)

#endif
