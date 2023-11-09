// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
// Autogenerated from Pigeon (v13.0.0), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import <Foundation/Foundation.h>

@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

/// Mirror of NSKeyValueObservingOptions.
///
/// See https://developer.apple.com/documentation/foundation/nskeyvalueobservingoptions?language=objc.
typedef NS_ENUM(NSUInteger, FWFNSKeyValueObservingOptionsEnum) {
  FWFNSKeyValueObservingOptionsEnumNewValue = 0,
  FWFNSKeyValueObservingOptionsEnumOldValue = 1,
  FWFNSKeyValueObservingOptionsEnumInitialValue = 2,
  FWFNSKeyValueObservingOptionsEnumPriorNotification = 3,
};

/// Wrapper for FWFNSKeyValueObservingOptionsEnum to allow for nullability.
@interface FWFNSKeyValueObservingOptionsEnumBox : NSObject
@property(nonatomic, assign) FWFNSKeyValueObservingOptionsEnum value;
- (instancetype)initWithValue:(FWFNSKeyValueObservingOptionsEnum)value;
@end

/// Mirror of NSKeyValueChange.
///
/// See https://developer.apple.com/documentation/foundation/nskeyvaluechange?language=objc.
typedef NS_ENUM(NSUInteger, FWFNSKeyValueChangeEnum) {
  FWFNSKeyValueChangeEnumSetting = 0,
  FWFNSKeyValueChangeEnumInsertion = 1,
  FWFNSKeyValueChangeEnumRemoval = 2,
  FWFNSKeyValueChangeEnumReplacement = 3,
};

/// Wrapper for FWFNSKeyValueChangeEnum to allow for nullability.
@interface FWFNSKeyValueChangeEnumBox : NSObject
@property(nonatomic, assign) FWFNSKeyValueChangeEnum value;
- (instancetype)initWithValue:(FWFNSKeyValueChangeEnum)value;
@end

/// Mirror of NSKeyValueChangeKey.
///
/// See https://developer.apple.com/documentation/foundation/nskeyvaluechangekey?language=objc.
typedef NS_ENUM(NSUInteger, FWFNSKeyValueChangeKeyEnum) {
  FWFNSKeyValueChangeKeyEnumIndexes = 0,
  FWFNSKeyValueChangeKeyEnumKind = 1,
  FWFNSKeyValueChangeKeyEnumNewValue = 2,
  FWFNSKeyValueChangeKeyEnumNotificationIsPrior = 3,
  FWFNSKeyValueChangeKeyEnumOldValue = 4,
  FWFNSKeyValueChangeKeyEnumUnknown = 5,
};

/// Wrapper for FWFNSKeyValueChangeKeyEnum to allow for nullability.
@interface FWFNSKeyValueChangeKeyEnumBox : NSObject
@property(nonatomic, assign) FWFNSKeyValueChangeKeyEnum value;
- (instancetype)initWithValue:(FWFNSKeyValueChangeKeyEnum)value;
@end

/// Mirror of WKUserScriptInjectionTime.
///
/// See https://developer.apple.com/documentation/webkit/wkuserscriptinjectiontime?language=objc.
typedef NS_ENUM(NSUInteger, FWFWKUserScriptInjectionTimeEnum) {
  FWFWKUserScriptInjectionTimeEnumAtDocumentStart = 0,
  FWFWKUserScriptInjectionTimeEnumAtDocumentEnd = 1,
};

/// Wrapper for FWFWKUserScriptInjectionTimeEnum to allow for nullability.
@interface FWFWKUserScriptInjectionTimeEnumBox : NSObject
@property(nonatomic, assign) FWFWKUserScriptInjectionTimeEnum value;
- (instancetype)initWithValue:(FWFWKUserScriptInjectionTimeEnum)value;
@end

/// Mirror of WKAudiovisualMediaTypes.
///
/// See [WKAudiovisualMediaTypes](https://developer.apple.com/documentation/webkit/wkaudiovisualmediatypes?language=objc).
typedef NS_ENUM(NSUInteger, FWFWKAudiovisualMediaTypeEnum) {
  FWFWKAudiovisualMediaTypeEnumNone = 0,
  FWFWKAudiovisualMediaTypeEnumAudio = 1,
  FWFWKAudiovisualMediaTypeEnumVideo = 2,
  FWFWKAudiovisualMediaTypeEnumAll = 3,
};

/// Wrapper for FWFWKAudiovisualMediaTypeEnum to allow for nullability.
@interface FWFWKAudiovisualMediaTypeEnumBox : NSObject
@property(nonatomic, assign) FWFWKAudiovisualMediaTypeEnum value;
- (instancetype)initWithValue:(FWFWKAudiovisualMediaTypeEnum)value;
@end

/// Mirror of WKWebsiteDataTypes.
///
/// See https://developer.apple.com/documentation/webkit/wkwebsitedatarecord/data_store_record_types?language=objc.
typedef NS_ENUM(NSUInteger, FWFWKWebsiteDataTypeEnum) {
  FWFWKWebsiteDataTypeEnumCookies = 0,
  FWFWKWebsiteDataTypeEnumMemoryCache = 1,
  FWFWKWebsiteDataTypeEnumDiskCache = 2,
  FWFWKWebsiteDataTypeEnumOfflineWebApplicationCache = 3,
  FWFWKWebsiteDataTypeEnumLocalStorage = 4,
  FWFWKWebsiteDataTypeEnumSessionStorage = 5,
  FWFWKWebsiteDataTypeEnumWebSQLDatabases = 6,
  FWFWKWebsiteDataTypeEnumIndexedDBDatabases = 7,
};

/// Wrapper for FWFWKWebsiteDataTypeEnum to allow for nullability.
@interface FWFWKWebsiteDataTypeEnumBox : NSObject
@property(nonatomic, assign) FWFWKWebsiteDataTypeEnum value;
- (instancetype)initWithValue:(FWFWKWebsiteDataTypeEnum)value;
@end

/// Mirror of WKNavigationActionPolicy.
///
/// See https://developer.apple.com/documentation/webkit/wknavigationactionpolicy?language=objc.
typedef NS_ENUM(NSUInteger, FWFWKNavigationActionPolicyEnum) {
  FWFWKNavigationActionPolicyEnumAllow = 0,
  FWFWKNavigationActionPolicyEnumCancel = 1,
};

/// Wrapper for FWFWKNavigationActionPolicyEnum to allow for nullability.
@interface FWFWKNavigationActionPolicyEnumBox : NSObject
@property(nonatomic, assign) FWFWKNavigationActionPolicyEnum value;
- (instancetype)initWithValue:(FWFWKNavigationActionPolicyEnum)value;
@end

/// Mirror of NSHTTPCookiePropertyKey.
///
/// See https://developer.apple.com/documentation/foundation/nshttpcookiepropertykey.
typedef NS_ENUM(NSUInteger, FWFNSHttpCookiePropertyKeyEnum) {
  FWFNSHttpCookiePropertyKeyEnumComment = 0,
  FWFNSHttpCookiePropertyKeyEnumCommentUrl = 1,
  FWFNSHttpCookiePropertyKeyEnumDiscard = 2,
  FWFNSHttpCookiePropertyKeyEnumDomain = 3,
  FWFNSHttpCookiePropertyKeyEnumExpires = 4,
  FWFNSHttpCookiePropertyKeyEnumMaximumAge = 5,
  FWFNSHttpCookiePropertyKeyEnumName = 6,
  FWFNSHttpCookiePropertyKeyEnumOriginUrl = 7,
  FWFNSHttpCookiePropertyKeyEnumPath = 8,
  FWFNSHttpCookiePropertyKeyEnumPort = 9,
  FWFNSHttpCookiePropertyKeyEnumSameSitePolicy = 10,
  FWFNSHttpCookiePropertyKeyEnumSecure = 11,
  FWFNSHttpCookiePropertyKeyEnumValue = 12,
  FWFNSHttpCookiePropertyKeyEnumVersion = 13,
};

/// Wrapper for FWFNSHttpCookiePropertyKeyEnum to allow for nullability.
@interface FWFNSHttpCookiePropertyKeyEnumBox : NSObject
@property(nonatomic, assign) FWFNSHttpCookiePropertyKeyEnum value;
- (instancetype)initWithValue:(FWFNSHttpCookiePropertyKeyEnum)value;
@end

/// An object that contains information about an action that causes navigation
/// to occur.
///
/// Wraps [WKNavigationType](https://developer.apple.com/documentation/webkit/wknavigationaction?language=objc).
typedef NS_ENUM(NSUInteger, FWFWKNavigationType) {
  /// A link activation.
  ///
  /// See https://developer.apple.com/documentation/webkit/wknavigationtype/wknavigationtypelinkactivated?language=objc.
  FWFWKNavigationTypeLinkActivated = 0,
  /// A request to submit a form.
  ///
  /// See https://developer.apple.com/documentation/webkit/wknavigationtype/wknavigationtypeformsubmitted?language=objc.
  FWFWKNavigationTypeSubmitted = 1,
  /// A request for the frame’s next or previous item.
  ///
  /// See https://developer.apple.com/documentation/webkit/wknavigationtype/wknavigationtypebackforward?language=objc.
  FWFWKNavigationTypeBackForward = 2,
  /// A request to reload the webpage.
  ///
  /// See https://developer.apple.com/documentation/webkit/wknavigationtype/wknavigationtypereload?language=objc.
  FWFWKNavigationTypeReload = 3,
  /// A request to resubmit a form.
  ///
  /// See https://developer.apple.com/documentation/webkit/wknavigationtype/wknavigationtypeformresubmitted?language=objc.
  FWFWKNavigationTypeFormResubmitted = 4,
  /// A navigation request that originates for some other reason.
  ///
  /// See https://developer.apple.com/documentation/webkit/wknavigationtype/wknavigationtypeother?language=objc.
  FWFWKNavigationTypeOther = 5,
  /// An unknown navigation type.
  ///
  /// This does not represent an actual value provided by the platform and only
  /// indicates a value was provided that isn't currently supported.
  FWFWKNavigationTypeUnknown = 6,
};

/// Wrapper for FWFWKNavigationType to allow for nullability.
@interface FWFWKNavigationTypeBox : NSObject
@property(nonatomic, assign) FWFWKNavigationType value;
- (instancetype)initWithValue:(FWFWKNavigationType)value;
@end

/// Possible permission decisions for device resource access.
///
/// See https://developer.apple.com/documentation/webkit/wkpermissiondecision?language=objc.
typedef NS_ENUM(NSUInteger, FWFWKPermissionDecision) {
  /// Deny permission for the requested resource.
  ///
  /// See https://developer.apple.com/documentation/webkit/wkpermissiondecision/wkpermissiondecisiondeny?language=objc.
  FWFWKPermissionDecisionDeny = 0,
  /// Deny permission for the requested resource.
  ///
  /// See https://developer.apple.com/documentation/webkit/wkpermissiondecision/wkpermissiondecisiongrant?language=objc.
  FWFWKPermissionDecisionGrant = 1,
  /// Prompt the user for permission for the requested resource.
  ///
  /// See https://developer.apple.com/documentation/webkit/wkpermissiondecision/wkpermissiondecisionprompt?language=objc.
  FWFWKPermissionDecisionPrompt = 2,
};

/// Wrapper for FWFWKPermissionDecision to allow for nullability.
@interface FWFWKPermissionDecisionBox : NSObject
@property(nonatomic, assign) FWFWKPermissionDecision value;
- (instancetype)initWithValue:(FWFWKPermissionDecision)value;
@end

/// List of the types of media devices that can capture audio, video, or both.
///
/// See https://developer.apple.com/documentation/webkit/wkmediacapturetype?language=objc.
typedef NS_ENUM(NSUInteger, FWFWKMediaCaptureType) {
  /// A media device that can capture video.
  ///
  /// See https://developer.apple.com/documentation/webkit/wkmediacapturetype/wkmediacapturetypecamera?language=objc.
  FWFWKMediaCaptureTypeCamera = 0,
  /// A media device or devices that can capture audio and video.
  ///
  /// See https://developer.apple.com/documentation/webkit/wkmediacapturetype/wkmediacapturetypecameraandmicrophone?language=objc.
  FWFWKMediaCaptureTypeCameraAndMicrophone = 1,
  /// A media device that can capture audio.
  ///
  /// See https://developer.apple.com/documentation/webkit/wkmediacapturetype/wkmediacapturetypemicrophone?language=objc.
  FWFWKMediaCaptureTypeMicrophone = 2,
  /// An unknown media device.
  ///
  /// This does not represent an actual value provided by the platform and only
  /// indicates a value was provided that isn't currently supported.
  FWFWKMediaCaptureTypeUnknown = 3,
};

/// Wrapper for FWFWKMediaCaptureType to allow for nullability.
@interface FWFWKMediaCaptureTypeBox : NSObject
@property(nonatomic, assign) FWFWKMediaCaptureType value;
- (instancetype)initWithValue:(FWFWKMediaCaptureType)value;
@end

@class FWFNSKeyValueObservingOptionsEnumData;
@class FWFNSKeyValueChangeKeyEnumData;
@class FWFWKUserScriptInjectionTimeEnumData;
@class FWFWKAudiovisualMediaTypeEnumData;
@class FWFWKWebsiteDataTypeEnumData;
@class FWFWKNavigationActionPolicyEnumData;
@class FWFNSHttpCookiePropertyKeyEnumData;
@class FWFWKPermissionDecisionData;
@class FWFWKMediaCaptureTypeData;
@class FWFNSUrlRequestData;
@class FWFWKUserScriptData;
@class FWFWKNavigationActionData;
@class FWFWKFrameInfoData;
@class FWFNSErrorData;
@class FWFWKScriptMessageData;
@class FWFWKSecurityOriginData;
@class FWFNSHttpCookieData;
@class FWFObjectOrIdentifier;

@interface FWFNSKeyValueObservingOptionsEnumData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithValue:(FWFNSKeyValueObservingOptionsEnum)value;
@property(nonatomic, assign) FWFNSKeyValueObservingOptionsEnum value;
@end

@interface FWFNSKeyValueChangeKeyEnumData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithValue:(FWFNSKeyValueChangeKeyEnum)value;
@property(nonatomic, assign) FWFNSKeyValueChangeKeyEnum value;
@end

@interface FWFWKUserScriptInjectionTimeEnumData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithValue:(FWFWKUserScriptInjectionTimeEnum)value;
@property(nonatomic, assign) FWFWKUserScriptInjectionTimeEnum value;
@end

@interface FWFWKAudiovisualMediaTypeEnumData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithValue:(FWFWKAudiovisualMediaTypeEnum)value;
@property(nonatomic, assign) FWFWKAudiovisualMediaTypeEnum value;
@end

@interface FWFWKWebsiteDataTypeEnumData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithValue:(FWFWKWebsiteDataTypeEnum)value;
@property(nonatomic, assign) FWFWKWebsiteDataTypeEnum value;
@end

@interface FWFWKNavigationActionPolicyEnumData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithValue:(FWFWKNavigationActionPolicyEnum)value;
@property(nonatomic, assign) FWFWKNavigationActionPolicyEnum value;
@end

@interface FWFNSHttpCookiePropertyKeyEnumData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithValue:(FWFNSHttpCookiePropertyKeyEnum)value;
@property(nonatomic, assign) FWFNSHttpCookiePropertyKeyEnum value;
@end

@interface FWFWKPermissionDecisionData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithValue:(FWFWKPermissionDecision)value;
@property(nonatomic, assign) FWFWKPermissionDecision value;
@end

@interface FWFWKMediaCaptureTypeData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithValue:(FWFWKMediaCaptureType)value;
@property(nonatomic, assign) FWFWKMediaCaptureType value;
@end

/// Mirror of NSURLRequest.
///
/// See https://developer.apple.com/documentation/foundation/nsurlrequest?language=objc.
@interface FWFNSUrlRequestData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithUrl:(NSString *)url
    httpMethod:(nullable NSString *)httpMethod
    httpBody:(nullable FlutterStandardTypedData *)httpBody
    allHttpHeaderFields:(NSDictionary<NSString *, NSString *> *)allHttpHeaderFields;
@property(nonatomic, copy) NSString * url;
@property(nonatomic, copy, nullable) NSString * httpMethod;
@property(nonatomic, strong, nullable) FlutterStandardTypedData * httpBody;
@property(nonatomic, copy) NSDictionary<NSString *, NSString *> * allHttpHeaderFields;
@end

/// Mirror of WKUserScript.
///
/// See https://developer.apple.com/documentation/webkit/wkuserscript?language=objc.
@interface FWFWKUserScriptData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithSource:(NSString *)source
    injectionTime:(nullable FWFWKUserScriptInjectionTimeEnumData *)injectionTime
    isMainFrameOnly:(BOOL )isMainFrameOnly;
@property(nonatomic, copy) NSString * source;
@property(nonatomic, strong, nullable) FWFWKUserScriptInjectionTimeEnumData * injectionTime;
@property(nonatomic, assign) BOOL  isMainFrameOnly;
@end

/// Mirror of WKNavigationAction.
///
/// See https://developer.apple.com/documentation/webkit/wknavigationaction.
@interface FWFWKNavigationActionData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithRequest:(FWFNSUrlRequestData *)request
    targetFrame:(FWFWKFrameInfoData *)targetFrame
    navigationType:(FWFWKNavigationType)navigationType;
@property(nonatomic, strong) FWFNSUrlRequestData * request;
@property(nonatomic, strong) FWFWKFrameInfoData * targetFrame;
@property(nonatomic, assign) FWFWKNavigationType navigationType;
@end

/// Mirror of WKFrameInfo.
///
/// See https://developer.apple.com/documentation/webkit/wkframeinfo?language=objc.
@interface FWFWKFrameInfoData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithIsMainFrame:(BOOL )isMainFrame;
@property(nonatomic, assign) BOOL  isMainFrame;
@end

/// Mirror of NSError.
///
/// See https://developer.apple.com/documentation/foundation/nserror?language=objc.
@interface FWFNSErrorData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithCode:(NSInteger )code
    domain:(NSString *)domain
    userInfo:(nullable NSDictionary<NSString *, id> *)userInfo;
@property(nonatomic, assign) NSInteger  code;
@property(nonatomic, copy) NSString * domain;
@property(nonatomic, copy, nullable) NSDictionary<NSString *, id> * userInfo;
@end

/// Mirror of WKScriptMessage.
///
/// See https://developer.apple.com/documentation/webkit/wkscriptmessage?language=objc.
@interface FWFWKScriptMessageData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithName:(NSString *)name
    body:(nullable id )body;
@property(nonatomic, copy) NSString * name;
@property(nonatomic, strong, nullable) id  body;
@end

/// Mirror of WKSecurityOrigin.
///
/// See https://developer.apple.com/documentation/webkit/wksecurityorigin?language=objc.
@interface FWFWKSecurityOriginData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithHost:(NSString *)host
    port:(NSInteger )port
    protocol:(NSString *)protocol;
@property(nonatomic, copy) NSString * host;
@property(nonatomic, assign) NSInteger  port;
@property(nonatomic, copy) NSString * protocol;
@end

/// Mirror of NSHttpCookieData.
///
/// See https://developer.apple.com/documentation/foundation/nshttpcookie?language=objc.
@interface FWFNSHttpCookieData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithPropertyKeys:(NSArray<FWFNSHttpCookiePropertyKeyEnumData *> *)propertyKeys
    propertyValues:(NSArray<id> *)propertyValues;
@property(nonatomic, copy) NSArray<FWFNSHttpCookiePropertyKeyEnumData *> * propertyKeys;
@property(nonatomic, copy) NSArray<id> * propertyValues;
@end

/// An object that can represent either a value supported by
/// `StandardMessageCodec`, a data class in this pigeon file, or an identifier
/// of an object stored in an `InstanceManager`.
@interface FWFObjectOrIdentifier : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithValue:(nullable id )value
    isIdentifier:(BOOL )isIdentifier;
@property(nonatomic, strong, nullable) id  value;
/// Whether value is an int that is used to retrieve an instance stored in an
/// `InstanceManager`.
@property(nonatomic, assign) BOOL  isIdentifier;
@end

/// The codec used by FWFWKWebsiteDataStoreHostApi.
NSObject<FlutterMessageCodec> *FWFWKWebsiteDataStoreHostApiGetCodec(void);

/// Mirror of WKWebsiteDataStore.
///
/// See https://developer.apple.com/documentation/webkit/wkwebsitedatastore?language=objc.
@protocol FWFWKWebsiteDataStoreHostApi
- (void)createFromWebViewConfigurationWithIdentifier:(NSInteger)identifier configurationIdentifier:(NSInteger)configurationIdentifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)createDefaultDataStoreWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)removeDataFromDataStoreWithIdentifier:(NSInteger)identifier ofTypes:(NSArray<FWFWKWebsiteDataTypeEnumData *> *)dataTypes modifiedSince:(double)modificationTimeInSecondsSinceEpoch completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
@end

extern void SetUpFWFWKWebsiteDataStoreHostApi(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FWFWKWebsiteDataStoreHostApi> *_Nullable api);

/// The codec used by FWFUIViewHostApi.
NSObject<FlutterMessageCodec> *FWFUIViewHostApiGetCodec(void);

/// Mirror of UIView.
///
/// See https://developer.apple.com/documentation/uikit/uiview?language=objc.
@protocol FWFUIViewHostApi
- (void)setBackgroundColorForViewWithIdentifier:(NSInteger)identifier toValue:(nullable NSNumber *)value error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setOpaqueForViewWithIdentifier:(NSInteger)identifier isOpaque:(BOOL)opaque error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void SetUpFWFUIViewHostApi(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FWFUIViewHostApi> *_Nullable api);

/// The codec used by FWFUIScrollViewHostApi.
NSObject<FlutterMessageCodec> *FWFUIScrollViewHostApiGetCodec(void);

/// Mirror of UIScrollView.
///
/// See https://developer.apple.com/documentation/uikit/uiscrollview?language=objc.
@protocol FWFUIScrollViewHostApi
- (void)createFromWebViewWithIdentifier:(NSInteger)identifier webViewIdentifier:(NSInteger)webViewIdentifier error:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSArray<NSNumber *> *)contentOffsetForScrollViewWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)scrollByForScrollViewWithIdentifier:(NSInteger)identifier x:(double)x y:(double)y error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setContentOffsetForScrollViewWithIdentifier:(NSInteger)identifier toX:(double)x y:(double)y error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void SetUpFWFUIScrollViewHostApi(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FWFUIScrollViewHostApi> *_Nullable api);

/// The codec used by FWFWKWebViewConfigurationHostApi.
NSObject<FlutterMessageCodec> *FWFWKWebViewConfigurationHostApiGetCodec(void);

/// Mirror of WKWebViewConfiguration.
///
/// See https://developer.apple.com/documentation/webkit/wkwebviewconfiguration?language=objc.
@protocol FWFWKWebViewConfigurationHostApi
- (void)createWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)createFromWebViewWithIdentifier:(NSInteger)identifier webViewIdentifier:(NSInteger)webViewIdentifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setAllowsInlineMediaPlaybackForConfigurationWithIdentifier:(NSInteger)identifier isAllowed:(BOOL)allow error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setLimitsNavigationsToAppBoundDomainsForConfigurationWithIdentifier:(NSInteger)identifier isLimited:(BOOL)limit error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setMediaTypesRequiresUserActionForConfigurationWithIdentifier:(NSInteger)identifier forTypes:(NSArray<FWFWKAudiovisualMediaTypeEnumData *> *)types error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void SetUpFWFWKWebViewConfigurationHostApi(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FWFWKWebViewConfigurationHostApi> *_Nullable api);

/// The codec used by FWFWKWebViewConfigurationFlutterApi.
NSObject<FlutterMessageCodec> *FWFWKWebViewConfigurationFlutterApiGetCodec(void);

/// Handles callbacks from a WKWebViewConfiguration instance.
///
/// See https://developer.apple.com/documentation/webkit/wkwebviewconfiguration?language=objc.
@interface FWFWKWebViewConfigurationFlutterApi : NSObject
- (instancetype)initWithBinaryMessenger:(id<FlutterBinaryMessenger>)binaryMessenger;
- (void)createWithIdentifier:(NSInteger)identifier completion:(void (^)(FlutterError *_Nullable))completion;
@end

/// The codec used by FWFWKUserContentControllerHostApi.
NSObject<FlutterMessageCodec> *FWFWKUserContentControllerHostApiGetCodec(void);

/// Mirror of WKUserContentController.
///
/// See https://developer.apple.com/documentation/webkit/wkusercontentcontroller?language=objc.
@protocol FWFWKUserContentControllerHostApi
- (void)createFromWebViewConfigurationWithIdentifier:(NSInteger)identifier configurationIdentifier:(NSInteger)configurationIdentifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)addScriptMessageHandlerForControllerWithIdentifier:(NSInteger)identifier handlerIdentifier:(NSInteger)handlerIdentifier ofName:(NSString *)name error:(FlutterError *_Nullable *_Nonnull)error;
- (void)removeScriptMessageHandlerForControllerWithIdentifier:(NSInteger)identifier name:(NSString *)name error:(FlutterError *_Nullable *_Nonnull)error;
- (void)removeAllScriptMessageHandlersForControllerWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)addUserScriptForControllerWithIdentifier:(NSInteger)identifier userScript:(FWFWKUserScriptData *)userScript error:(FlutterError *_Nullable *_Nonnull)error;
- (void)removeAllUserScriptsForControllerWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void SetUpFWFWKUserContentControllerHostApi(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FWFWKUserContentControllerHostApi> *_Nullable api);

/// The codec used by FWFWKPreferencesHostApi.
NSObject<FlutterMessageCodec> *FWFWKPreferencesHostApiGetCodec(void);

/// Mirror of WKUserPreferences.
///
/// See https://developer.apple.com/documentation/webkit/wkpreferences?language=objc.
@protocol FWFWKPreferencesHostApi
- (void)createFromWebViewConfigurationWithIdentifier:(NSInteger)identifier configurationIdentifier:(NSInteger)configurationIdentifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setJavaScriptEnabledForPreferencesWithIdentifier:(NSInteger)identifier isEnabled:(BOOL)enabled error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void SetUpFWFWKPreferencesHostApi(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FWFWKPreferencesHostApi> *_Nullable api);

/// The codec used by FWFWKScriptMessageHandlerHostApi.
NSObject<FlutterMessageCodec> *FWFWKScriptMessageHandlerHostApiGetCodec(void);

/// Mirror of WKScriptMessageHandler.
///
/// See https://developer.apple.com/documentation/webkit/wkscriptmessagehandler?language=objc.
@protocol FWFWKScriptMessageHandlerHostApi
- (void)createWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void SetUpFWFWKScriptMessageHandlerHostApi(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FWFWKScriptMessageHandlerHostApi> *_Nullable api);

/// The codec used by FWFWKScriptMessageHandlerFlutterApi.
NSObject<FlutterMessageCodec> *FWFWKScriptMessageHandlerFlutterApiGetCodec(void);

/// Handles callbacks from a WKScriptMessageHandler instance.
///
/// See https://developer.apple.com/documentation/webkit/wkscriptmessagehandler?language=objc.
@interface FWFWKScriptMessageHandlerFlutterApi : NSObject
- (instancetype)initWithBinaryMessenger:(id<FlutterBinaryMessenger>)binaryMessenger;
- (void)didReceiveScriptMessageForHandlerWithIdentifier:(NSInteger)identifier userContentControllerIdentifier:(NSInteger)userContentControllerIdentifier message:(FWFWKScriptMessageData *)message completion:(void (^)(FlutterError *_Nullable))completion;
@end

/// The codec used by FWFWKNavigationDelegateHostApi.
NSObject<FlutterMessageCodec> *FWFWKNavigationDelegateHostApiGetCodec(void);

/// Mirror of WKNavigationDelegate.
///
/// See https://developer.apple.com/documentation/webkit/wknavigationdelegate?language=objc.
@protocol FWFWKNavigationDelegateHostApi
- (void)createWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void SetUpFWFWKNavigationDelegateHostApi(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FWFWKNavigationDelegateHostApi> *_Nullable api);

/// The codec used by FWFWKNavigationDelegateFlutterApi.
NSObject<FlutterMessageCodec> *FWFWKNavigationDelegateFlutterApiGetCodec(void);

/// Handles callbacks from a WKNavigationDelegate instance.
///
/// See https://developer.apple.com/documentation/webkit/wknavigationdelegate?language=objc.
@interface FWFWKNavigationDelegateFlutterApi : NSObject
- (instancetype)initWithBinaryMessenger:(id<FlutterBinaryMessenger>)binaryMessenger;
- (void)didFinishNavigationForDelegateWithIdentifier:(NSInteger)identifier webViewIdentifier:(NSInteger)webViewIdentifier URL:(nullable NSString *)url completion:(void (^)(FlutterError *_Nullable))completion;
- (void)didStartProvisionalNavigationForDelegateWithIdentifier:(NSInteger)identifier webViewIdentifier:(NSInteger)webViewIdentifier URL:(nullable NSString *)url completion:(void (^)(FlutterError *_Nullable))completion;
- (void)decidePolicyForNavigationActionForDelegateWithIdentifier:(NSInteger)identifier webViewIdentifier:(NSInteger)webViewIdentifier navigationAction:(FWFWKNavigationActionData *)navigationAction completion:(void (^)(FWFWKNavigationActionPolicyEnumData *_Nullable, FlutterError *_Nullable))completion;
- (void)didFailNavigationForDelegateWithIdentifier:(NSInteger)identifier webViewIdentifier:(NSInteger)webViewIdentifier error:(FWFNSErrorData *)error completion:(void (^)(FlutterError *_Nullable))completion;
- (void)didFailProvisionalNavigationForDelegateWithIdentifier:(NSInteger)identifier webViewIdentifier:(NSInteger)webViewIdentifier error:(FWFNSErrorData *)error completion:(void (^)(FlutterError *_Nullable))completion;
- (void)webViewWebContentProcessDidTerminateForDelegateWithIdentifier:(NSInteger)identifier webViewIdentifier:(NSInteger)webViewIdentifier completion:(void (^)(FlutterError *_Nullable))completion;
@end

/// The codec used by FWFNSObjectHostApi.
NSObject<FlutterMessageCodec> *FWFNSObjectHostApiGetCodec(void);

/// Mirror of NSObject.
///
/// See https://developer.apple.com/documentation/objectivec/nsobject.
@protocol FWFNSObjectHostApi
- (void)disposeObjectWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)addObserverForObjectWithIdentifier:(NSInteger)identifier observerIdentifier:(NSInteger)observerIdentifier keyPath:(NSString *)keyPath options:(NSArray<FWFNSKeyValueObservingOptionsEnumData *> *)options error:(FlutterError *_Nullable *_Nonnull)error;
- (void)removeObserverForObjectWithIdentifier:(NSInteger)identifier observerIdentifier:(NSInteger)observerIdentifier keyPath:(NSString *)keyPath error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void SetUpFWFNSObjectHostApi(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FWFNSObjectHostApi> *_Nullable api);

/// The codec used by FWFNSObjectFlutterApi.
NSObject<FlutterMessageCodec> *FWFNSObjectFlutterApiGetCodec(void);

/// Handles callbacks from an NSObject instance.
///
/// See https://developer.apple.com/documentation/objectivec/nsobject.
@interface FWFNSObjectFlutterApi : NSObject
- (instancetype)initWithBinaryMessenger:(id<FlutterBinaryMessenger>)binaryMessenger;
- (void)observeValueForObjectWithIdentifier:(NSInteger)identifier keyPath:(NSString *)keyPath objectIdentifier:(NSInteger)objectIdentifier changeKeys:(NSArray<FWFNSKeyValueChangeKeyEnumData *> *)changeKeys changeValues:(NSArray<FWFObjectOrIdentifier *> *)changeValues completion:(void (^)(FlutterError *_Nullable))completion;
- (void)disposeObjectWithIdentifier:(NSInteger)identifier completion:(void (^)(FlutterError *_Nullable))completion;
@end

/// The codec used by FWFWKWebViewHostApi.
NSObject<FlutterMessageCodec> *FWFWKWebViewHostApiGetCodec(void);

/// Mirror of WKWebView.
///
/// See https://developer.apple.com/documentation/webkit/wkwebview?language=objc.
@protocol FWFWKWebViewHostApi
- (void)createWithIdentifier:(NSInteger)identifier configurationIdentifier:(NSInteger)configurationIdentifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setUIDelegateForWebViewWithIdentifier:(NSInteger)identifier delegateIdentifier:(nullable NSNumber *)uiDelegateIdentifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setNavigationDelegateForWebViewWithIdentifier:(NSInteger)identifier delegateIdentifier:(nullable NSNumber *)navigationDelegateIdentifier error:(FlutterError *_Nullable *_Nonnull)error;
- (nullable NSString *)URLForWebViewWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)estimatedProgressForWebViewWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)loadRequestForWebViewWithIdentifier:(NSInteger)identifier request:(FWFNSUrlRequestData *)request error:(FlutterError *_Nullable *_Nonnull)error;
- (void)loadHTMLForWebViewWithIdentifier:(NSInteger)identifier HTMLString:(NSString *)string baseURL:(nullable NSString *)baseUrl error:(FlutterError *_Nullable *_Nonnull)error;
- (void)loadFileForWebViewWithIdentifier:(NSInteger)identifier fileURL:(NSString *)url readAccessURL:(NSString *)readAccessUrl error:(FlutterError *_Nullable *_Nonnull)error;
- (void)loadAssetForWebViewWithIdentifier:(NSInteger)identifier assetKey:(NSString *)key error:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)canGoBackForWebViewWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)canGoForwardForWebViewWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)goBackForWebViewWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)goForwardForWebViewWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)reloadWebViewWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
- (nullable NSString *)titleForWebViewWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setAllowsBackForwardForWebViewWithIdentifier:(NSInteger)identifier isAllowed:(BOOL)allow error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setCustomUserAgentForWebViewWithIdentifier:(NSInteger)identifier userAgent:(nullable NSString *)userAgent error:(FlutterError *_Nullable *_Nonnull)error;
- (void)evaluateJavaScriptForWebViewWithIdentifier:(NSInteger)identifier javaScriptString:(NSString *)javaScriptString completion:(void (^)(id _Nullable, FlutterError *_Nullable))completion;
- (void)setInspectableForWebViewWithIdentifier:(NSInteger)identifier inspectable:(BOOL)inspectable error:(FlutterError *_Nullable *_Nonnull)error;
- (nullable NSString *)customUserAgentForWebViewWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void SetUpFWFWKWebViewHostApi(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FWFWKWebViewHostApi> *_Nullable api);

/// The codec used by FWFWKUIDelegateHostApi.
NSObject<FlutterMessageCodec> *FWFWKUIDelegateHostApiGetCodec(void);

/// Mirror of WKUIDelegate.
///
/// See https://developer.apple.com/documentation/webkit/wkuidelegate?language=objc.
@protocol FWFWKUIDelegateHostApi
- (void)createWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void SetUpFWFWKUIDelegateHostApi(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FWFWKUIDelegateHostApi> *_Nullable api);

/// The codec used by FWFWKUIDelegateFlutterApi.
NSObject<FlutterMessageCodec> *FWFWKUIDelegateFlutterApiGetCodec(void);

/// Handles callbacks from a WKUIDelegate instance.
///
/// See https://developer.apple.com/documentation/webkit/wkuidelegate?language=objc.
@interface FWFWKUIDelegateFlutterApi : NSObject
- (instancetype)initWithBinaryMessenger:(id<FlutterBinaryMessenger>)binaryMessenger;
- (void)onCreateWebViewForDelegateWithIdentifier:(NSInteger)identifier webViewIdentifier:(NSInteger)webViewIdentifier configurationIdentifier:(NSInteger)configurationIdentifier navigationAction:(FWFWKNavigationActionData *)navigationAction completion:(void (^)(FlutterError *_Nullable))completion;
/// Callback to Dart function `WKUIDelegate.requestMediaCapturePermission`.
- (void)requestMediaCapturePermissionForDelegateWithIdentifier:(NSInteger)identifier webViewIdentifier:(NSInteger)webViewIdentifier origin:(FWFWKSecurityOriginData *)origin frame:(FWFWKFrameInfoData *)frame type:(FWFWKMediaCaptureTypeData *)type completion:(void (^)(FWFWKPermissionDecisionData *_Nullable, FlutterError *_Nullable))completion;
/// Callback to Dart function `WKUIDelegate.runJavaScriptAlertPanel`.
- (void)runJavaScriptAlertPanelForDelegateWithIdentifier:(NSInteger)identifier message:(NSString *)message frame:(FWFWKFrameInfoData *)frame completion:(void (^)(FlutterError *_Nullable))completion;
/// Callback to Dart function `WKUIDelegate.runJavaScriptConfirmPanel`.
- (void)runJavaScriptConfirmPanelForDelegateWithIdentifier:(NSInteger)identifier message:(NSString *)message frame:(FWFWKFrameInfoData *)frame completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
/// Callback to Dart function `WKUIDelegate.runJavaScriptTextInputPanel`.
- (void)runJavaScriptTextInputPanelForDelegateWithIdentifier:(NSInteger)identifier prompt:(NSString *)prompt defaultText:(NSString *)defaultText frame:(FWFWKFrameInfoData *)frame completion:(void (^)(NSString *_Nullable, FlutterError *_Nullable))completion;
@end

/// The codec used by FWFWKHttpCookieStoreHostApi.
NSObject<FlutterMessageCodec> *FWFWKHttpCookieStoreHostApiGetCodec(void);

/// Mirror of WKHttpCookieStore.
///
/// See https://developer.apple.com/documentation/webkit/wkhttpcookiestore?language=objc.
@protocol FWFWKHttpCookieStoreHostApi
- (void)createFromWebsiteDataStoreWithIdentifier:(NSInteger)identifier dataStoreIdentifier:(NSInteger)websiteDataStoreIdentifier error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setCookieForStoreWithIdentifier:(NSInteger)identifier cookie:(FWFNSHttpCookieData *)cookie completion:(void (^)(FlutterError *_Nullable))completion;
@end

extern void SetUpFWFWKHttpCookieStoreHostApi(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FWFWKHttpCookieStoreHostApi> *_Nullable api);

/// The codec used by FWFNSUrlHostApi.
NSObject<FlutterMessageCodec> *FWFNSUrlHostApiGetCodec(void);

/// Host API for `NSUrl`.
///
/// This class may handle instantiating and adding native object instances that
/// are attached to a Dart instance or method calls on the associated native
/// class or an instance of the class.
///
/// See https://developer.apple.com/documentation/foundation/nsurl?language=objc.
@protocol FWFNSUrlHostApi
- (nullable NSString *)absoluteStringForNSURLWithIdentifier:(NSInteger)identifier error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void SetUpFWFNSUrlHostApi(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FWFNSUrlHostApi> *_Nullable api);

/// The codec used by FWFNSUrlFlutterApi.
NSObject<FlutterMessageCodec> *FWFNSUrlFlutterApiGetCodec(void);

/// Flutter API for `NSUrl`.
///
/// This class may handle instantiating and adding Dart instances that are
/// attached to a native instance or receiving callback methods from an
/// overridden native class.
///
/// See https://developer.apple.com/documentation/foundation/nsurl?language=objc.
@interface FWFNSUrlFlutterApi : NSObject
- (instancetype)initWithBinaryMessenger:(id<FlutterBinaryMessenger>)binaryMessenger;
- (void)createWithIdentifier:(NSInteger)identifier completion:(void (^)(FlutterError *_Nullable))completion;
@end

NS_ASSUME_NONNULL_END
