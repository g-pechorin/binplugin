This is an example Python 3.5.1 plugin

Like a good little busybody ;) python includes the all-the-tools you'll need to compile native modules.

... so `python setup.py build` should *just work* for you.

- `spammodule.c` simple python plugin that runs the C/++ `system()` command
- `setup.py` magical python buildscript
- `demo.py` simple script that runs the plugin
