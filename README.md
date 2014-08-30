About
-------------------------------

CGRectPositioning is a header file with macros for doing relative CGRect layouts in code.

CGRectPositioning macros can position a CGRect above, below, inside, outside, centered, adjacent to, and all other combinations relative to another CGRect using a set padding.

Also provided are macros for creating a CGRect from a size, getting the center point of a CGRect, and working with a grid of CGRects.

Reference
-------------------------------

#### Position inside an edge of a rect

`CGRect CGRectInsideTop(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect inside the top center of ofRect offset by padding.

`CGRect CGRectInsideRight(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect inside the right center of ofRect offset by padding.

`CGRect CGRectInsideBottom(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect inside the bottom center of ofRect offset by padding.

`CGRect CGRectInsideLeft(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect inside the left center of ofRect offset by padding.

#### Position inside a corner of a rect

`CGRect CGRectInsideTopLeft(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect inside the top left corner of ofRect offset both horizontally and vertically by padding.

`CGRect CGRectInsideTopRight(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect inside the top right corner of ofRect offset both horizontally and vertically by padding.

`CGRect CGRectInsideBottomLeft(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect inside the bottom left corner of ofRect offset both horizontally and vertically by padding.

`CGRect CGRectInsideBottomRight(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect inside the bottom right corner of ofRect offset both horizontally and vertically by padding.

#### Position outside an edge of a rect

`CGRect CGRectAbove(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect above the top center of ofRect offset by padding.

`CGRect CGRectBelow(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect below the bottom center of ofRect offset by padding.

`CGRect CGRectLeftOf(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect left of the left center of ofRect offset by padding.

`CGRect CGRectRightOf(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect right of the right center of ofRect offset by padding.

#### Position outside a corner of a rect

`CGRect CGRectOutsideTopLeft(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect outside the top left corner of ofRect offset both horizontally and vertically by padding.

`CGRect CGRectOutsideTopRight(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect outside the top right corner of ofRect offset both horizontally and vertically by padding.

`CGRect CGRectOutsideBottomLeft(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect outside the bottom left corner of ofRect offset both horizontally and vertically by padding.

`CGRect CGRectOutsideBottomRight(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect outside the bottom right corner of ofRect offset both horizontally and vertically by padding.

#### Position outside the corner of a rect and align an edge

`CGRect CGRectAboveLeft(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect above ofRect with left edges aligned and offset by padding.

`CGRect CGRectLeftOfTop(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect left of ofRect with top edges aligned and offset by padding.

`CGRect CGRectAboveRight(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect above ofRect with right edges aligned and offset by padding.

`CGRect CGRectRightOfTop(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect right of ofRect with top edges aligned and offset by padding.

`CGRect CGRectLeftOfBottom(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect left of ofRect with bottom edges aligned and offset by padding.

`CGRect CGRectBelowLeft(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect below ofRect with left edges aligned and offset by padding.

`CGRect CGRectBelowRight(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect below ofRect with right edges aligned and offset by padding.

`CGRect CGRectRightOfBottom(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect right of ofRect with bottom edges aligned and offset by padding.

#### Position a rect with a center point
`CGRect CGRectCenterAt(CGRect rect, CGPoint point)`

#### Other helpful functions

`CGPoint CGRectCenter(CGRect rect)`

Returns a CGPoint with the center of a rect.

`CGRect CGRectSized(CGSize sized)`

Create a rect sized with the given size at 0,0.

`CGRect CGRectGridCell(CGRect rect, CGPoint cellPoint)`

Generates a CGRect grid cell based on the origin cell (rect) and a coordinate (cellPoint) within the possible grid.

`void CGRectGrid(CGRect rect, CGRect *grid, size_t width, size_t height)`

Divide a rect into a grid of smaller rects according to width, height. Grid must be large enough to hold width*height CGRects.

`UIViewReplaceView(UIView *view, UIView newView)`

Replace view with newView in the view heirarchy with the same size and autoresizingMask. The clause `view` will also be assigned newView.

License
-------------------------------

The BSD License
