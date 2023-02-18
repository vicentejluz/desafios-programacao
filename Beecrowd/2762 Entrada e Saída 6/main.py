std = input()

std2 = std[std.index(".") + 1:]
std = std[:std.index(".")]

print("{:d}.{:d}" .format(int(std2), int(std)))