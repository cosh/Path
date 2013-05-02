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
class EdgeContainer;

class Vertex : public GraphElement {

private:
	const EdgeContainer* const _inEdgeContainer;
	const EdgeContainer* const _outEdgeContainer;

	void AddEdge();
	void AddOutEdge(const short edgePropertyId, const Edge * outEdge);
	void AddInEdge(const short edgePropertyId, const Edge * inEdge);

public:
	const Edge* const GetAllEdges();
	const Edge* const GetAllOutEdges();
	const Edge* const GetAllInEdges();
	const Edge* const GetOutEdges(const short edgePropertyId);
	const Edge* const GetInEdges(const short edgePropertyId);

	const Vertex* const GetAllNeighbors();
	const Vertex* const GetAllOutNeighbors();
	const Vertex* const GetAllInNeighbors();
	const Vertex* const GetOutNeighbors(const short edgePropertyId);
	const Vertex* const GetInNeighbors(const short edgePropertyId);

	const short* GetInEdgeIds();
	const short* GetOutEdgeIds();

	unsigned int GetOutDegree();
	unsigned int GetInDegree();
};

#endif
