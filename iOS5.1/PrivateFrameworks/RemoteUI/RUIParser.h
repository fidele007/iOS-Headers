/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSXMLParserDelegate-Protocol.h"

@class NSMutableArray, NSXMLParser, RUIObjectModel;

@interface RUIParser : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *_parser;
    RUIObjectModel *_uiObjectModel;
    NSMutableArray *_pages;
    int _actionSignal;
    int _parserState;
}

- (id)initWithXML:(id)arg1;
- (void)dealloc;
- (id)uiObjectModel;
- (int)actionSignal;
- (id)_createNewPage;
- (void)_newRowWithAttributeDict:(id)arg1;
- (id)_lastPageCreateIfNeeded;
- (id)_lastRow;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;

@end
