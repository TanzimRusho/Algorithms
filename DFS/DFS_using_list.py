# Python3 program to print DFS traversal
# from a given graph

from collections import defaultdict

# This class represents a directed graph
# using adjacent list representation

class Graph:
    # constrcutor
    def __init__(self):
        # default dictionary to store Graph
        self.graph = defaultdict(list)
        
    # function to add an edge to graph
    def addEdge(self, u, v):
        self.graph[u].append(v)
        
    # A function used by DFS
    def DFSUtil(self, v, visited):

        # mark the current node as visited
        # adjacent to this vertex
        visited.add(v)
        print(v, end=" ")
        
        # recur for all the vertices adjacent to this
        # vertex
        for neighbor in self.graph[v]:
            if neighbor not in visited:
                self.DFSUtil(neighbor, visited)

    # the function to do DFS traversal. It uses 
    # recursive DFSUtil()
    def DFS(self, v):

        # make a set to store visited vertices
        visited = set()
        
        # call the recursive helper function to
        # print DFS traversal
        self.DFSUtil(v, visited)
        
# driver code
def main():
    g = Graph()
    g.addEdge(0,1)
    g.addEdge(0,2)
    g.addEdge(1,2)
    g.addEdge(2,0)
    g.addEdge(2,3)
    g.addEdge(3,3)
    
    print("Following is DFS from vertex 2:")
    g.DFS(2)
    
if __name__ == "__main__":
    main()
