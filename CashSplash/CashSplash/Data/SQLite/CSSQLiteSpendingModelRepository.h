//
//  CSSQLiteSpendingModelRepository.h
//  CashSplash
//
//  Created by Ivan Fabijanovic on 23/04/14.
//  Copyright (c) 2014 Ivan Fabijanovic. All rights reserved.
//

#import "CSSpendingModelRepository.h"
#import <sqlite3.h>

@interface CSSQLiteSpendingModelRepository : CSSpendingModelRepository

- (instancetype)initWithDatabase:(sqlite3 *)database;

@end
