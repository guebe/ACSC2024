import matplotlib.pyplot as plt
import numpy as np

with open("float_table.txt", "r") as file:
    lines = file.readlines()

num_lines = len(lines) // 2
colors = np.linspace(0, 1, num_lines)

fig, ax = plt.subplots()

for i in range(0, len(lines), 4):
    x1 = float(lines[i])
    y1 = float(lines[i+1])
    x2 = float(lines[i+2])
    y2 = float(lines[i+3])
    ax.plot([x1, x2], [y1, y2], color=plt.cm.gray(colors[i//2]), marker='o', markersize=4)

x_try = [100, 13]
y_try = [ 90,  0]
plt.plot(x_try, y_try, marker='*', color='red', linestyle=(0, (1, 5)))

x_solve = [13,  9,  2, -1, -7, -6, -9, -17, -17, -5, 0]
y_solve = [ 0, 22, 35, 42, 42, 30, 12,  10,  -1,  0, 0]
plt.plot(x_solve, y_solve, marker='*', color='red')

ax.set_xlabel('X')
ax.set_ylabel('Y')
ax.set_title('path to origin through maze of mirrors')

plt.show()
