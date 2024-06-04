import math
import sys

def cartesian_to_polar(p1, p2):
    x1, y1 = p1
    x2, y2 = p2
    
    # distance between the two points
    r = math.sqrt((x2 - x1)**2 + (y2 - y1)**2)
    
    # angle relative to the positive x-axis
    phi = math.atan2(y2 - y1, x2 - x1)
    
    return r, phi

def to_ascii(x):
    upper = int(x // 26)
    lower = int(x % 26)
    return chr(upper + 65) + chr(lower + 65)

p1 = (float(sys.argv[1]), float(sys.argv[2]))
p2 = (float(sys.argv[3]), float(sys.argv[4]))
r, phi = cartesian_to_polar(p1, p2)

# normalize phi if negative
if phi < 0.0:
    phi = phi + 2 * math.pi

# phi to ascii, base 26 format, scaled to 0..2*pi
phi_ = 675.0 / (2*math.pi) * phi
phi_a = to_ascii(phi_)

# r to ascii, base 26 format, scaled to 0..25
r_ = 675.0 / 25 * r
r_a = to_ascii(r_)

# this is the format of the programs input
print(f"r: {r:.0f} phi: {phi:.2f} -> {phi_a}{r_a}")
