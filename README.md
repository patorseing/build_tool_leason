# build_tool_leason

## Bazel

### Lesson

lesson1 : <https://youtu.be/5hXj11l5Xy4>\
lesson2 : <https://youtu.be/0kh_X6TwijE>\
lesson3 : <https://youtu.be/TiwZOz1Ht7g>\
lesson4 : <https://youtu.be/dhZo08a-SIQ>\

#### Lesson 4: query and graph

```bash
mkdir lesson4
cd  lesson3
bazel query "deps(//hello:wowza)" --noimplicit_deps
bazel query "deps(//hello:wowza)" --noimplicit_deps --output graph > ../lesson4/graph.in
dot -Tpng < ../lesson4/graph.in > ../lesson4/graph.png
```

** if you don't have "dot", ```brew install graphviz```
