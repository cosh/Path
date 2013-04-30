/*
 * graphElement.cpp
 *
 *  Created on: 29.04.2013
 *      Author: cosh
 *     Purpose: This is the header file for the graph element.
 *
 * Copyright (c) 2013 Henning Rauch
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in the
 * Software without restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so, subject to the
 * following conditions:
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

 */

#ifndef _graphElement_h
#define _graphElement_h

#include "KeyKeyValueStore.h"

class GraphElement {

private:
	const long _id;

	const KeyKeyValueStore * _c4;
	bool _isDirty;

	const long _creationDate;
	const unsigned int _modificationDateDifference;

	const int _shortCut;
	void AddProperty(const short propertyId, const char* value, const int ttl = 0);
	void RemoveProperty(const short propertyId);

public:
	const long GetCreationDate();
	const long GetModificationDate();

	const int GetShortcut();

	const char * const GetProperty(const short propertyId);
	const int GetPropertyAsInteger(const short propertyId);
	const double GetPropertyAsDouble(const short propertyId);
};

#endif
