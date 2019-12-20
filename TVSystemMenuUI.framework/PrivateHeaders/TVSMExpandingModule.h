/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVSystemMenuUI.framework/TVSystemMenuUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemMenuUI/TVSMModule.h>
#import <TVSystemMenuUI/TVSMModuleExpandedContentViewControllerDelegate.h>

@protocol TVSMModuleContentViewController, TVSMModuleDelegate;
@class TVSMButtonViewController, NSString, UIImage, NSBundle, NSArray;

@interface TVSMExpandingModule : NSObject <TVSMModule, TVSMModuleExpandedContentViewControllerDelegate> {

	TVSMButtonViewController*<TVSMModuleContentViewController> _contentViewController;
	id<TVSMModuleDelegate> _delegate;
	long long _type;
	NSString* _displayName;
	UIImage* _icon;
	NSString* _iconSymbolName;
	NSBundle* _bundle;

}

@property (nonatomic,readonly) NSBundle * bundle;                                                                                     //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                                                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                                                                                        //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSString * iconSymbolName;                                                                             //@synthesize iconSymbolName=_iconSymbolName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<TVSMModuleDelegate> delegate;                                                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long type;                                                                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) UIViewController*<TVSMModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<TVSMModuleExpandedContentViewController> expandedContentViewController; 
@property (nonatomic,readonly) NSArray * childModules; 
+(long long)buttonStyle;
-(id)init;
-(long long)type;
-(id<TVSMModuleDelegate>)delegate;
-(void)setDelegate:(id<TVSMModuleDelegate>)arg1 ;
-(NSBundle *)bundle;
-(NSString *)displayName;
-(UIImage *)icon;
-(UIViewController*<TVSMModuleContentViewController>)contentViewController;
-(UIViewController*<TVSMModuleExpandedContentViewController>)expandedContentViewController;
-(void)contentModuleViewControllerDidTriggerAction:(id)arg1 ;
-(NSString *)iconSymbolName;
-(void)contentModuleViewControllerDidRequestDismissal:(id)arg1 ;
-(void)contentModuleViewControllerDidRequestSystemDismissal:(id)arg1 ;
@end

