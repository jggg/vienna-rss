//
//  Export.h
//  Vienna
//
//  Created by Steve on 5/27/05.
//  Copyright (c) 2004-2005 Steve Palmer. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Cocoa/Cocoa.h>
@class FoldersTree;

@interface Export : NSObject
	
+(NSInteger)exportToFile:(NSString *)exportFileName from:(NSArray *)foldersArray
        inFoldersTree:(FoldersTree *)foldersTree withGroups:(BOOL)groupFlag;
+(NSInteger)exportToFile:(NSString *)exportFileName fromFoldersTree:(FoldersTree *)foldersTree
        selection:(BOOL)selectionFlag withGroups:(BOOL)groupFlag;

@end
