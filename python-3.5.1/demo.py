

# before you run this script, do ...
# > python setup.py install
# ... to set it all up

import spam

print('spam.system("ls") = %d\nspam.system("dir") = %d' % (spam.system("ls"), spam.system("dir")))
