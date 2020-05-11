//
//  Copyright (c) 2020 Open Whisper Systems. All rights reserved.
//

#import "TSInfoMessage.h"

NS_ASSUME_NONNULL_BEGIN

@class OWSDisappearingMessagesConfiguration;
@class TSThread;

@interface OWSDisappearingConfigurationUpdateInfoMessage : TSInfoMessage

@property (nonatomic, readonly) BOOL configurationIsEnabled;

- (instancetype)initWithThread:(TSThread *)contact messageType:(TSInfoMessageType)infoMessage NS_UNAVAILABLE;
- (instancetype)initWithGrdbId:(int64_t)grdbId
                      uniqueId:(NSString *)uniqueId
           receivedAtTimestamp:(uint64_t)receivedAtTimestamp
                        sortId:(uint64_t)sortId
                     timestamp:(uint64_t)timestamp
                uniqueThreadId:(NSString *)uniqueThreadId
                 attachmentIds:(NSArray<NSString *> *)attachmentIds
                          body:(nullable NSString *)body
                  contactShare:(nullable OWSContact *)contactShare
               expireStartedAt:(uint64_t)expireStartedAt
                     expiresAt:(uint64_t)expiresAt
              expiresInSeconds:(unsigned int)expiresInSeconds
            isViewOnceComplete:(BOOL)isViewOnceComplete
             isViewOnceMessage:(BOOL)isViewOnceMessage
                   linkPreview:(nullable OWSLinkPreview *)linkPreview
                messageSticker:(nullable MessageSticker *)messageSticker
                 quotedMessage:(nullable TSQuotedMessage *)quotedMessage
  storedShouldStartExpireTimer:(BOOL)storedShouldStartExpireTimer
                 customMessage:(nullable NSString *)customMessage
           infoMessageUserInfo:(nullable NSDictionary<InfoMessageUserInfoKey, id> *)infoMessageUserInfo
                   messageType:(TSInfoMessageType)messageType
                          read:(BOOL)read
           unregisteredAddress:(nullable SignalServiceAddress *)unregisteredAddress NS_UNAVAILABLE;

- (nullable instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER;

/**
 * @param remoteName is nil when created by the local user
 */
- (instancetype)initWithThread:(TSThread *)thread
                 configuration:(OWSDisappearingMessagesConfiguration *)configuration
           createdByRemoteName:(nullable NSString *)remoteName
        createdInExistingGroup:(BOOL)createdInExistingGroup NS_DESIGNATED_INITIALIZER;

// --- CODE GENERATION MARKER

// This snippet is generated by /Scripts/sds_codegen/sds_generate.py. Do not manually edit it, instead run `sds_codegen.sh`.

// clang-format off

- (instancetype)initWithGrdbId:(int64_t)grdbId
                      uniqueId:(NSString *)uniqueId
           receivedAtTimestamp:(uint64_t)receivedAtTimestamp
                        sortId:(uint64_t)sortId
                     timestamp:(uint64_t)timestamp
                uniqueThreadId:(NSString *)uniqueThreadId
                 attachmentIds:(NSArray<NSString *> *)attachmentIds
                          body:(nullable NSString *)body
                  contactShare:(nullable OWSContact *)contactShare
               expireStartedAt:(uint64_t)expireStartedAt
                     expiresAt:(uint64_t)expiresAt
              expiresInSeconds:(unsigned int)expiresInSeconds
            isViewOnceComplete:(BOOL)isViewOnceComplete
             isViewOnceMessage:(BOOL)isViewOnceMessage
                   linkPreview:(nullable OWSLinkPreview *)linkPreview
                messageSticker:(nullable MessageSticker *)messageSticker
                 quotedMessage:(nullable TSQuotedMessage *)quotedMessage
  storedShouldStartExpireTimer:(BOOL)storedShouldStartExpireTimer
            wasRemotelyDeleted:(BOOL)wasRemotelyDeleted
                 customMessage:(nullable NSString *)customMessage
           infoMessageUserInfo:(nullable NSDictionary<InfoMessageUserInfoKey, id> *)infoMessageUserInfo
                   messageType:(TSInfoMessageType)messageType
                          read:(BOOL)read
           unregisteredAddress:(nullable SignalServiceAddress *)unregisteredAddress
  configurationDurationSeconds:(unsigned int)configurationDurationSeconds
        configurationIsEnabled:(BOOL)configurationIsEnabled
           createdByRemoteName:(nullable NSString *)createdByRemoteName
        createdInExistingGroup:(BOOL)createdInExistingGroup
NS_DESIGNATED_INITIALIZER NS_SWIFT_NAME(init(grdbId:uniqueId:receivedAtTimestamp:sortId:timestamp:uniqueThreadId:attachmentIds:body:contactShare:expireStartedAt:expiresAt:expiresInSeconds:isViewOnceComplete:isViewOnceMessage:linkPreview:messageSticker:quotedMessage:storedShouldStartExpireTimer:wasRemotelyDeleted:customMessage:infoMessageUserInfo:messageType:read:unregisteredAddress:configurationDurationSeconds:configurationIsEnabled:createdByRemoteName:createdInExistingGroup:));

// clang-format on

// --- CODE GENERATION MARKER

@end

NS_ASSUME_NONNULL_END
