def selection_sort(input_list):
    """Takes a list of numbers and return its sorted version 
    in ascending order using selection sorting"""
    
    sorted_list = []
    
    while input_list != []:
        min_index = 0
        length = len(input_list)
        
        for i in range(length):
            if input_list[i] < input_list[min_index]:
                min_index = i
                
        sorted_list.append(input_list[min_index])
        input_list.remove(input_list[min_index])
        
    return sorted_list

# Driver code  
def main():
    number_of_tests = int(input()) 
    
    for i in range(number_of_tests):
        input_list = list(map(int, input().split()))
        print(selection_sort(input_list))

if __name__ == "__main__":   
    main()
    
