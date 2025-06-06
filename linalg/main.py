import numpy as np
from secret import flag

def linalg(p, q):
  v1 = np.array([i for i in p])
  v2 = np.array([[i] for i in q])
  return ''.join([chr(i) for i in np.array(np.matrix((v1*v2)%ord('Z')+ord('A')).flatten())[0]]).encode().hex()

p = flag

a=linalg(p,'GISAC'.encode())

with open('flag.cif','w') as file:
  file.write(a)