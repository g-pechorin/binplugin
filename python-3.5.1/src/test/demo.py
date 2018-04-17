

# before you run this script, do ...
# > python setup.py install
# ... to set it all up

import spam

print('spam.system("ls") = %d\nspam.system("dir") = %d' % (spam.system("ls"), spam.system("dir")))


print('== cool =============')
print('== cool =============')

#
#
try:
    spam.throw('foo! i say')
except TypeError:
     print('caught the type error from the wrong number of arguments')

try:
    spam.throw()
except RuntimeError:
    print('caught the runtime error from native code')


print('== good =============')
print('== good =============')

image = [
    1, 2,
    3, 4,
    5, 6,
    7, 8,
    9, 0,
]

actual = spam.arraything(image, 3)

print(str(actual))
