# build_tool_leason

## Bazel

### Bazel Lesson

lesson1 : <https://youtu.be/5hXj11l5Xy4>\
lesson2 : <https://youtu.be/0kh_X6TwijE>\
lesson3 : <https://youtu.be/TiwZOz1Ht7g>\
lesson4 : <https://youtu.be/dhZo08a-SIQ>

#### Bazel Lesson 1: build

```bash
cd  lesson1/hello
bazel build ...
cd ..
bazel build //hello:wowza
```

#### Bazel Lesson 2: run

```bash
cd  lesson2
bazel run //hello:wowza
```

#### Bazel Lesson 3: test

```bash
cd  lesson3/hello
bazel test hello-test
```

#### Bazel Lesson 4: query

```bash
mkdir lesson4
cd  lesson3
bazel query "deps(//hello:wowza)" --noimplicit_deps
bazel query "deps(//hello:wowza)" --noimplicit_deps --output graph > ../lesson4/graph.in
dot -Tpng < ../lesson4/graph.in > ../lesson4/graph.png
```

** if you don't have "dot", ```brew install graphviz```

## CMake

### CMake Lesson

lesson1 : <https://youtu.be/eJNp-hQ-dTI>\
lesson2 : <https://youtu.be/_diH39da2ZU>\
lesson3 : <https://youtu.be/QmgThji3P00>\
lesson4 : <https://youtu.be/o6ZKnr0CRwc>\
lesson5 : <https://youtu.be/4EarwWM_VBw>

#### CMake Lesson 1: build

```bash
cd  lesson1/build
cmake ../
make
./quickbits
```

** if you don't have "cmake", ```brew install cmake```

#### CMake Lesson 2: library

```bash
cd  lesson2/build
cmake ../
make
./quickbits
```

#### CMake Lesson 3: add package

```bash
cd  lesson3/build
cmake ../
make
./panda
```

#### CMake Lesson 4: add package

```bash
cd  lesson4/build
cmake ../ -DCMAKE_BUILD_TYPE=Release
make
./panda
```

#### CMake Lesson 5: add env

```bash
cd  lesson5/build
cmake ../ -DCMAKE_BUILD_TYPE=Release
make
./panda
```
