//
//  Calculatrice.h
//  Labo 05
//
//  Created by Bastien Clément on 01.04.15.
//  Copyright (c) 2015 Bastien Clément. All rights reserved.
//

#ifndef __Labo_05__Calculatrice__
#define __Labo_05__Calculatrice__

#include <string>
#include "Stack.h"

using namespace std;

struct Calculator {
private:
	Stack stack;

	void add();
	void sub();
	void mult();
	void div();

public:
	Calculator();
	int eval(string expr);
};

#endif /* defined(__Labo_05__Calculatrice__) */
