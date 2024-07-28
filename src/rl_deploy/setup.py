from setuptools import setup

package_name = 'rl_deploy'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='lwx',
    maintainer_email='82310560+WeixianLin-cc@users.noreply.github.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "rl_node = rl_deploy.rl_deploy:main"
        ],
    },
)
#功能包名++main函数名