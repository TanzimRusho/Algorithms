# an iterative python program to do DFS traversal
# from a given source vertex, DFS(int s) traverses
# vertices reachable from s.

# this class represents a directed graph using adjacency
# list representation
class Graph:
    def __init__(self, V): # constructor
        self.V = V         # No. of vertices
        self.adj = [[] for i in range(V)] # adjacency list
        
    def addEdge(self, v, w):    # to add an edge to Graph
        self.adj[v].append(w)   # add w to v's list
        
    # prints all not yet visited vertices reachable from s
    def DFS(self, s):   
        # prints all vertices in DFS manner from a given
        # source. initially mark all devices as not visited
        visited = [False for i in range(self.V)]
        
        # make a stack for DFS
        stack = []
        
        # push the current source node.
        stack.append(s)
        
        while(len(stack)):
            # pop a vertex from stack and print it
            s = stack[-1]
            stack.pop()
            
            # stack may contain same vertex twice, so
            # we need to print the popped item only
            # if it is not visited
            if(not visited[s]):
                print(s, end=" ")
                visited[s] = True
                
            # get all adjacent vertices of the popped vertex
            # s if an adjacent has not been visited. then push
            # it to the stack.
            for node in self.adj[s]:
                if(not visited[node]):
                    stack.append(node)
            
# driver program to test methods of graph class    
g = Graph(5)   
g.addEdge(1,0)
g.addEdge(0,2)
g.addEdge(2,1)
g.addEdge(0,3)
g.addEdge(1,4)

print("Following is DFS:")
g.DFS(0)
            
# courtesy: ankush_953 from geeksforgeeks.com                
    
