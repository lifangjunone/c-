from setuptools import setup, Extension
import pybind11

ext_modules = [
    Extension(
        name='api',
        sources=['../c_code/api.cpp'],
        language='c++',
        include_dirs=[
            get_pybind_include(),
            get_pybind_include(user=True)
        ]
    )
]

setup(
    name='api',
    version='0.0.1',
    ext_modules=ext_modules,
    install_requires=['pybind11>=2.4'],
    setup_requires=['pybind11>=2.4'],
)