
//  Created by Christopher on 9/4/15.

#import <UIKit/UIKit.h>
#import <React/RCTView.h>
#import <React/RCTBridgeModule.h>
#import "<WebKit/WebKit.h"

@interface RNPrint : RCTView <RCTBridgeModule, UIPrintInteractionControllerDelegate, UIPrinterPickerControllerDelegate, WKUIDelegate>
@property UIPrinter *pickedPrinter;
@property NSString *filePath;
@property NSString *htmlString;
@property NSURL *printerURL;
@property (nonatomic, assign) BOOL isLandscape;
@end
