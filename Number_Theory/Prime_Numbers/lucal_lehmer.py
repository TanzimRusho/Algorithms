def lucas_lehmer(p):
    ll_result = []
    for i in range(p-1):
        if i == 0:
            ll_result.append(4)
        else:
            term = (ll_result[i-1] * ll_result[i-1] - 2) % (2 ** p - 1)  
            ll_result.append(term)
    return ll_result
  
def main():  
    ll_result = lucas_lehmer(17)
    print(ll_result)

if __name__ == "__main__":
    main()
  
