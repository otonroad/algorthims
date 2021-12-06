nodes = [[4], [7, 2], [1, 3, 6, 9]]
newlist1 = []
def reverse_tree(lst):
    if not lst:
        return
    newlist1.append(lst.pop(0)[::-1])
    reverse_tree(lst)

reverse_tree(nodes)

print(newlist1)