//
//  SocialProtocol.h
//  CloudRail_ServiceCode
//
//  Created by Felipe Cesar on 20/06/16.
//  Copyright © 2016 CloudRail. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Interface for interaction with social networks
 */
@protocol CRSocialProtocol <NSObject>

/**
 * Creates a new post/update to the currently logged in user's wall/stream/etc.
 * Throws an exception if the content is too long for the service instance.
 * @param content The post's content
 */
//void postUpdate(String content);

/**
 * Retrieves a list of connection/friend/etc. IDs.
 * The IDs are compatible with those returned by Profile.getIdentifier().
 * @return A (possibly empty) list of IDs
 */
//List<String> getConnections();
@end
