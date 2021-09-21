def bubble_sort(input_list):
    length = len(input_list)
    
    for i in range(length):
        for j in range(length-i-1):
            if input_list[j] > input_list[j+1]:
                input_list[j], input_list[j+1] = input_list[j+1], input_list[j]
                
    return input_list

# Driver Code 
def main():
    test_case = int(input())
    
    for i in range(test_case):
        input_list = list(map(int, input().split()))
        print(bubble_sort(input_list))                

if __name__ == "__main__":
    main()