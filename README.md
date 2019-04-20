# Memory-Errors
Bad memory management examples and their testing using various tools<br>

## Usage

### Compiling

Include debug information while compiling<br>

- `g++ -g file.cpp`<br>
- `gcc -g file.cpp`<br>

_Note_: if needed use static linking `-static`<br>

### Valgrind

- `valgrind --leak-check=full ./program args`<br>

_Optional_: `--track-origins=yes`, `--show-leak-kinds=all`<br>

## Sources
- https://www.linuxjournal.com/article/6556
- [ASAN](https://github.com/google/sanitizers/wiki/AddressSanitizer)
- [Different ways of leaking memory - Stackoverflow](https://stackoverflow.com/questions/6561266/different-ways-of-leaking-memory)
- [Top 10 Most Common C++ Mistakes That Developers Make | Toptal](https://www.toptal.com/c-plus-plus/top-10-common-c-plus-plus-developer-mistakes)
- [STL Containers and Auto_ptrs - Why They Don't Mix | QuantStart](https://www.quantstart.com/articles/STL-Containers-and-Auto_ptrs-Why-They-Dont-Mix)
- [The CPROVER Manual](http://www.cprover.org/cprover-manual/cbmc/tutorial/)