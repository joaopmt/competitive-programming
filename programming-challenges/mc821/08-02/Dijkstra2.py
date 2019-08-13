import math

class Vertex:
    def __init__(self, val):
        self.id = val
        self.adjacent = {}
        self.distance = math.inf
        self.visited = False
        self.previous = None

    def add_neighbor(self, neighbor, weight=0):
        self.adjacent[neighbor] = weight

    def __str__(self):
        return self.id

    def __lt__(self, v):
        return self.distance < v.distance

    def __gt__(self, v):
        return self.distance > v.distance

class Graph:
    def __init__(self):
        self.vertices = {}

    def __iter__(self):
        return iter(self.vertices.values())

    def add_vertex(self, val):
        new_vertex = Vertex(val)
        self.vertices[val] = new_vertex

    def add_edge(self, frm, to, weight):
        if frm not in self.vertices:
            self.add_vertex(frm)
        if to not in self.vertices:
            self.add_vertex(to)
        self.vertices[frm].add_neighbor(self.vertices[to], weight)
        self.vertices[to].add_neighbor(self.vertices[frm], weight)


import heapq
graph = Graph()

def dijkstra(start, end):
    start.distance = 0
    unvisited_queue = [v for v in graph]
    heapq.heapify(unvisited_queue)
    while len(unvisited_queue):
        curr = heapq.heappop(unvisited_queue)
        if curr == end:
            return True
        if curr.distance == math.inf:
            return False
        curr.visited = True
        for neighbor, weight in curr.adjacent.items():
            if neighbor.visited:
                continue
            new_dist = curr.distance + weight
            if new_dist < neighbor.distance:
                neighbor.distance = new_dist
                neighbor.previous = curr
        heapq.heapify(unvisited_queue)
    return False

def shortest_path(curr):
    path = ''
    while curr:
        if curr.previous:
            path = ' ' + str(curr.id) + path
        else:
            path = str(curr.id) + path
        curr = curr.previous
    return path

def print_shortest_path(curr, n):
    if not curr:
        return
    print_shortest_path(curr.previous, n)
    if curr.id != n:
        print(str(curr.id) + ' ', end='')
    else:
        print(str(curr.id))


def main():

    n, m = [int(x) for x in input().split()]
    for i in range(m):
        u, v, w = map(int, input().split())
        graph.add_edge(u, v, w)
    if 1 not in graph.vertices or n not in graph.vertices:
        print('-1')
    else:
        if dijkstra(graph.vertices[1], graph.vertices[n]):
            print_shortest_path(graph.vertices[n], n)
        else:
            print('-1')


main()
