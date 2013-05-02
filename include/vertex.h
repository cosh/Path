/*
 * vertex.h
 *
 *  Created on: 29.04.2013
 *      Author: cosh
 *     Purpose:
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

#ifndef _vertex_h
#define _vertex_h

#include "graphElement.h"
#include "edge.h"

class Edge;

class Vertex : public GraphElement {

private:
	void AddEdge();
	void AddOutEdge(const short edgePropertyId, const Edge * outEdge);
	void AddInEdge(const short edgePropertyId, const Edge * inEdge);

public:
	void GetAllEdges();
	void GetAllOutEdges();
	void GetAllInEdges();
	void GetOutEdges(const short edgePropertyId);
	void GetInEdges(const short edgePropertyId);

	void GetAllVertices();
	void GetAllOutVertices();
	void GetAllInVertices();
	void GetOutVertices(const short edgePropertyId);
	void GetInVertices(const short edgePropertyId);

	void GetInEdgeIds();
	void GetOutEdgeIds();

	unsigned int GetOutDegree();
	unsigned int GetInDegree();
};

#endif
