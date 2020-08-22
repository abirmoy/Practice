def count_substring(string, sub_string):
    count = 0
    occurence = string.find(sub_string)
    for i in range (len(string)):
        if occurence != -1:
            count += 1
            # updating string to a string at index after previous occarance
            string = string[occurence+1:]
            occurence = string.find(sub_string)
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)