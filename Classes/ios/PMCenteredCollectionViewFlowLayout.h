// Copyright (c) 2013-2014 Peter Meyers
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//  PMCenteredCollectionViewFlowLayout.h
//  Created by Peter Meyers on 3/25/14.
//
//

#import <UIKit/UIKit.h>

@class PMCenteredCircularCollectionView;
@interface PMCenteredCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) BOOL centeringDisabled;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-property-type"
@property (nullable, nonatomic, readonly) PMCenteredCircularCollectionView *collectionView;
#pragma clang diagnostic pop

@end
