def generate_unique_usernames(names):
    usernames = set()
    unique_names = []
    
    for name in names:
        username = name.lower().replace(" ", "_")
        original_username = username
        count = 1
        
        while username in usernames:
            username = f"{original_username}{count}"
            count += 1
        
        usernames.add(username)
        unique_names.append(username)
    
    return unique_names

# Example usage
names_list = ["Alice", "Bob", "Alice", "Charlie", "Bob", "Alice"]
unique_usernames = generate_unique_usernames(names_list)
print(unique_usernames)  
