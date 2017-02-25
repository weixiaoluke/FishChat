//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@interface WAMarkedCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    double _cellHeight;
    _Bool _isResetElseInLandscape;
    unsigned long long _portraitNumberOfColumn;
    unsigned long long _landscapeNumberOfColumn;
    double _landscapeMinInteritemSpacing;
    double _landscapeMinLineSpacing;
    double _portraitMinInteritemSpacing;
    double _portraitMinLineSpacing;
    double _heightRatioOnWidth;
    unsigned long long _numberOfColumn;
    struct UIEdgeInsets _landscapeEdgeInsets;
    struct UIEdgeInsets _portraitEdgesInset;
}

@property(nonatomic) unsigned long long numberOfColumn; // @synthesize numberOfColumn=_numberOfColumn;
@property(nonatomic) double heightRatioOnWidth; // @synthesize heightRatioOnWidth=_heightRatioOnWidth;
@property(nonatomic) double portraitMinLineSpacing; // @synthesize portraitMinLineSpacing=_portraitMinLineSpacing;
@property(nonatomic) double portraitMinInteritemSpacing; // @synthesize portraitMinInteritemSpacing=_portraitMinInteritemSpacing;
@property(nonatomic) struct UIEdgeInsets portraitEdgesInset; // @synthesize portraitEdgesInset=_portraitEdgesInset;
@property(nonatomic) double landscapeMinLineSpacing; // @synthesize landscapeMinLineSpacing=_landscapeMinLineSpacing;
@property(nonatomic) double landscapeMinInteritemSpacing; // @synthesize landscapeMinInteritemSpacing=_landscapeMinInteritemSpacing;
@property(nonatomic) struct UIEdgeInsets landscapeEdgeInsets; // @synthesize landscapeEdgeInsets=_landscapeEdgeInsets;
@property(nonatomic) _Bool isResetElseInLandscape; // @synthesize isResetElseInLandscape=_isResetElseInLandscape;
@property(nonatomic) unsigned long long landscapeNumberOfColumn; // @synthesize landscapeNumberOfColumn=_landscapeNumberOfColumn;
@property(nonatomic) unsigned long long portraitNumberOfColumn; // @synthesize portraitNumberOfColumn=_portraitNumberOfColumn;
@property(nonatomic) double cellHeight;
- (double)getCellWidthWithColumnNum:(unsigned long long)arg1;
- (void)prepareLayout;
- (void)setUp;
- (id)init;

@end
