//  OCR_NSString.h
//
//  Created by David Phillip Oster on 6/16/22. license.txt applies.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Copy and Extend NSStringCompareOptions
typedef NS_OPTIONS(NSUInteger, OCRStringCompareOptions) {
	/*! Always on in Simple Comic */
	OCRCaseInsensitiveSearch = (1 << 0),
	/*! Exact character-by-character equivalence */
	OCRLiteralSearch =  (1 << 1),
	/*! Search from end of source string */
	OCRBackwardSearch =  (1 << 2),
	/*! Search is limited to start (or end, if NSBackwardsSearch) of source string */
	OCRAnchoredSearch = (1 << 3),
	/*! applies to \c ocr_rangeOfString:  only. Resulting match must start on a 'word' boundary */
	OCRStartWith = (1 << 4),
	/*! applies to \c ocr_rangeOfString:  only. Resulting match must end on a 'word' boundary */
	OCREndWith = (1 << 5),
	/*! Numbers within strings are compared using numeric value. only applies to compare methods, not find */
	OCRNumericSearch = (1 << 6),
	
	OCRDiacriticInsensitiveSearch  = (1 << 7),
	OCRWidthInsensitiveSearch  = (1 << 8),
	OCRForcedOrderingSearch = (1 << 9),
	OCRRegularExpressionSearch = (1 << 10),
} ;

/// Class extentension that adds StartsWith and EndsWith options to -[NSString rangeOfString:options:range:];
@interface NSString (OCR)

/// Add StartsWith and EndsWith options to -[NSString rangeOfString:options:range:];
///
/// Do everything that the standard rangeOfString: does, but in addition handle  OCRStartWith and OCREndWith
- (NSRange)ocr_rangeOfString:(NSString *)searchString options:(OCRStringCompareOptions)mask range:(NSRange)rangeOfReceiverToSearch;

@end

NS_ASSUME_NONNULL_END
