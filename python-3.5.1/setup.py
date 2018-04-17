from distutils.core import setup, Extension

module1 = Extension('spam',
                    sources = [
                        'src/main/spammodule.c',
                        'src/main/spampp.cpp',
                        'src/main/run_arraything.cpp',
                    ])

setup (name = 'spam',
       version = '1.0',
       description = 'This is a demo package',
       ext_modules = [module1])