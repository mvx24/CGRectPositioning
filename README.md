CGRectPositioning
=================

Header file with macros for doing relative CGRect layouts in code.

###License

	Copyright (c) 2012, Symbiotic Software LLC
	All rights reserved.
	
	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions are met:
		* Redistributions of source code must retain the above copyright
		  notice, this list of conditions and the following disclaimer.
		* Redistributions in binary form must reproduce the above copyright
		  notice, this list of conditions and the following disclaimer in the
		  documentation and/or other materials provided with the distribution.
		* Neither the name of Symbiotic Software LLC nor the
		  names of its contributors may be used to endorse or promote products
		  derived from this software without specific prior written permission.
	
	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
	ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
	WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
	DISCLAIMED. IN NO EVENT SHALL SYMBIOTIC SOFTWARE LLC BE LIABLE FOR ANY
	DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
	(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
	LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
	ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
	SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

###Reference

####Position inside an edge of a rect

`CGRect CGRectInsideTop(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect inside the top center of ofRect offset by padding.

`CGRect CGRectInsideRight(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect inside the right center of ofRect offset by padding.

`CGRect CGRectInsideBottom(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect inside the bottom center of ofRect offset by padding.

`CGRect CGRectInsideLeft(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect inside the left center of ofRect offset by padding.

####Position inside a corner of a rect

`CGRect CGRectInsideTopLeft(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect inside the top left corner of ofRect offset both horizontally and vertically by padding.

`CGRect CGRectInsideTopRight(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect inside the top right corner of ofRect offset both horizontally and vertically by padding.

`CGRect CGRectInsideBottomLeft(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect inside the bottom left corner of ofRect offset both horizontally and vertically by padding.

`CGRect CGRectInsideBottomRight(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect inside the bottom right corner of ofRect offset both horizontally and vertically by padding.

####Position outside an edge of a rect

`CGRect CGRectAbove(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect above the top center of ofRect offset by padding.

`CGRect CGRectBelow(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect below the bottom center of ofRect offset by padding.

`CGRect CGRectLeftOf(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect left of the left center of ofRect offset by padding.

`CGRect CGRectRightOf(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect right of the right center of ofRect offset by padding.

####Position outside a corner of a rect

`CGRect CGRectOutsideTopLeft(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect outside the top left corner of ofRect offset both horizontally and vertically by padding.

`CGRect CGRectOutsideTopRight(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect outside the top right corner of ofRect offset both horizontally and vertically by padding.

`CGRect CGRectOutsideBottomLeft(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect outside the bottom left corner of ofRect offset both horizontally and vertically by padding.

`CGRect CGRectOutsideBottomRight(CGRect rect, CGRect ofRect, CGFloat padding)`

Position rect outside the bottom right corner of ofRect offset both horizontally and vertically by padding.

####Position outside the corner of a rect and align an edge

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

####Position a rect with a center point
`CGRect CGRectCenterAt(CGRect rect, CGPoint point)`

####Other helpful functions

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
