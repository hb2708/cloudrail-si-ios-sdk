
#import <Foundation/Foundation.h>

#import "CRProfileProtocol.h"

#import "CRSocialProtocol.h"




@interface CRTwitter : NSObject <CRProfileProtocol>

-(instancetype)initWithClientId:(NSString *)clientID clientSecret:(NSString *)clientSecret redirectUri:(NSString *)redirectUri;
@end
