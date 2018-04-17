This is an example Python 3.5.1 plugin

Like a good little busybody ;) python includes the all-the-tools you'll need to compile native modules.

... so `python setup.py build` should *just work* for you.

- `spammodule.c` simple python plugin that runs the C/++ `system()` command
- `setup.py` magical python buildscript
- `demo.py` simple script that runs the plugin

This worked with;
- Windows 10
- Python 3.5.1
- Visual Studio 14.0 / 2015
- https://stackoverflow.com/questions/43858836/python-installing-clarifai-vs14-0-link-exe-failed-with-exit-status-1158#44563421

... but I'm not sure how portable it is at this point
