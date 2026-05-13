# How to run
## Manually

Build from ../repo/build$:
```Bash
# only run whenchanging CMakeLists.txt, adding/removing src files, or changin dependencies:
~/vscode/OrbitalPhysicsSimulator/build$ cmake ..

# build every time after modifying code:
~/vscode/OrbitalPhysicsSimulator/build$ cmake --build .
```

Run from ../repo/build$:
```Bash
~/vscode/OrbitalPhysicsSimulator/build$ ./game
```

## With shell script

Run from ../repo$:
```Bash
~/vscode/OrbitalPhysicsSimulator$ ./build.sh
```

You may need permission with:
```Bash
chmod +x build.sh
```
