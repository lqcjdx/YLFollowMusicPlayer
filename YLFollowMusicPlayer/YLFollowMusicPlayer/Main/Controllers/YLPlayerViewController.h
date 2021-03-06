//
//  YLPlayerViewController.h
//  YLFollowMusicPlayer
//
//  Created by lumin on 2017/3/4.
//  Copyright © 2017年 YL. All rights reserved.
//

#import "YLBaseViewController.h"
@class YLMusic;

@interface YLPlayerViewController : YLBaseViewController
@property (nonatomic, copy) NSArray *musicList;

+ (instancetype)sharePalyer;

/**
 加载所有音乐
 
 @param musics 音乐列表
 */
- (void)loadMusics:(NSArray *)musics;


/**
 加载音乐
 
 @param musics 音乐列表
 @param index 当前音乐索引
 */
- (void)loadMusics:(NSArray *)musics withIndex:(NSInteger)index;

- (BOOL)isPlaying;

@end
//http://msching.github.io/blog/2014/11/06/audio-in-ios-8/
